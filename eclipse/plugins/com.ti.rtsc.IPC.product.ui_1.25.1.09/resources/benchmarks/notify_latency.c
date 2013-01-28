/* --COPYRIGHT--,BSD
 * Copyright (c) $(CPYYEAR), Texas Instruments Incorporated
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 *
 * *  Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 *
 * *  Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in the
 *    documentation and/or other materials provided with the distribution.
 *
 * *  Neither the name of Texas Instruments Incorporated nor the names of
 *    its contributors may be used to endorse or promote products derived
 *    from this software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
 * AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO,
 * THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR
 * PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR
 * CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL,
 * EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO,
 * PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS;
 * OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY,
 * WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR
 * OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE,
 * EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 * --/COPYRIGHT--*/
/*
 *  ======== notify_latency.c ========
 */

#include <xdc/std.h>

/*  -----------------------------------XDC.RUNTIME module Headers    */
#include <xdc/runtime/System.h>

/*  ----------------------------------- IPC module Headers           */
#include <ti/ipc/MultiProc.h>
#include <ti/ipc/Notify.h>

/*  ----------------------------------- BIOS6 module Headers         */
#include <ti/sysbios/knl/Task.h>
#include <ti/sysbios/BIOS.h>

/*  ----------------------------------- To get globals from .cfg Header */
#include <xdc/cfg/global.h>
#include <xdc/runtime/Timestamp.h>
#include <xdc/runtime/Types.h>

#include "bench_common.h"

#define INTERRUPT_LINE  0

/* Use a reserved event ID for highest priority */
#define EVENTID     0 + (UInt32)(Notify_SYSTEMKEY << 16)

/* Number of times to run the loop */
#define NUMLOOPS        10000

#define NUMIGNORED      100

/* Convert cycles to microseconds */
#define CYCLES_TO_US(CYCLES, CPUFREQ) \
    ((UInt32)((((Double)CYCLES * 1000000))/(Double)CPUFREQ))
    
/* Convert cycles to nanoseconds */
#define CYCLES_TO_NS(CYCLES, CPUFREQ) \
    ((UInt32)((((Double)CYCLES * 1000000000))/(Double)CPUFREQ))

UInt32 seq = 0;
UInt16 recvProcId;
UInt16 srcProc, dstProc, selfId;
UInt32 rawtimestamps[NUMLOOPS];

UInt16 numCores = 0;

UInt32 latencies[NUMLOOPS - 1];
Statistics latencyStats;

/*
 *  ======== printStatistics ========
 */
Void printStatistics()
{
    UInt32 timeElapsed;
    UInt i;
    Types_FreqHz timerFreq, cpuFreq;
    Float cpuTimerFreqRatio;
    
    Timestamp_getFreq(&timerFreq);
    BIOS_getCpuFreq(&cpuFreq);
    
    cpuTimerFreqRatio = (Float)cpuFreq.lo / (Float)timerFreq.lo;

    /* Convert timestamps to CPU time */
    for (i = 0; i < NUMLOOPS; i++) {
        rawtimestamps[i] *= cpuTimerFreqRatio;
    }
    
    for (i = 0; i < NUMLOOPS - 1; i++) {
        latencies[i] = (rawtimestamps[i + 1] - rawtimestamps[i]) / numCores;
    }

    /* squelch any rollover-effected latencies */
    for (i = 0; i < NUMLOOPS - 2; i++) {
        if (latencies[i] > 4 * latencies[i+1]) {
            latencies[i] = latencies[i+1];
            rawtimestamps[i] = rawtimestamps[i+1];
        }
    }

    getStats(latencies + NUMIGNORED, NUMLOOPS - NUMIGNORED - 2, &latencyStats);
    
    timeElapsed =  rawtimestamps[NUMLOOPS - NUMIGNORED - 2] - 
            rawtimestamps[NUMIGNORED];
    /* Throughput = time elapsed divided by total #of of hops */
    
    System_printf("======== SYSTEM ATTRIBUTES ======== \n");
    System_printf("Device name:                  %s\n", DEVICENAME);
    System_printf("Processor names:              %s\n", PROCNAMES);
    System_printf("CPU Freq:                     %d MHz\n", 
        cpuFreq.lo / 1000000);
    System_printf("Timer Freq:                   %d MHz\n\n", 
        timerFreq.lo / 1000000);

    System_printf("======== BENCHMARK ATTRIBUTES ======== \n");
    System_printf("Notify setup delegate:        %s\n", NOTIFYSETUP);
    System_printf("Number of processors:         %d\n", numCores);
    System_printf("Number of notifications:      %d\n", latencyStats.numVals);
    System_printf("Build profile:                %s\n\n", BUILDPROFILE);

    System_printf("======== NOTIFY BENCHMARK RESULTS ======== \n");    
    System_printf("Average 1-way latency:        %10d (cycles/msg)           %10d (ns/msg)\n", 
        (UInt32)latencyStats.mean, CYCLES_TO_NS(latencyStats.mean, cpuFreq.lo));
    System_printf("Maximum 1-way latency:        %10d (cycles/msg) (#%5d)  %10d (ns/msg)\n", 
        latencyStats.max, latencyStats.maxIndex, CYCLES_TO_NS(latencyStats.max, cpuFreq.lo));
    System_printf("Minimum 1-way latency:        %10d (cycles/msg) (#%5d)  %10d (ns/msg)\n", 
        latencyStats.min, latencyStats.minIndex, CYCLES_TO_NS(latencyStats.min, cpuFreq.lo)); 
    System_printf("Standard deviation:           %10d (cycles/msg)\n", 
        (UInt32)latencyStats.stddev);
    System_printf("Total time elapsed:           %10d (cycles)     %10d (us)\n",
        timeElapsed, CYCLES_TO_US(timeElapsed, cpuFreq.lo));
}

/*
 *  ======== cbFxn ========
 *  This function was registered with Notify. It is called when any event is
 *  sent to this processor.
 */
Void cbFxn(UInt16 procId, UInt16 lineId,
           UInt32 eventId, UArg arg, UInt32 payload)
{
    Int status;

    if (selfId == 0) {
        rawtimestamps[seq] = Timestamp_get32();
    }
    
    seq++;
    
    status = Notify_sendEvent(dstProc, INTERRUPT_LINE, EVENTID, NULL, TRUE);
    if (status < 0) {
        System_abort("Notify_sendEvent failed\n");
    }
}


/*
 *  ======== idleFxn ========
 *  Exits the image when done
 */
Void idleFxn() 
{
    if (((seq >= NUMLOOPS) && (MultiProc_self() == 0)) || 
        ((seq == (NUMLOOPS - 1)) && (MultiProc_self() != 0))) {
        /* Done sending messages */
        if (MultiProc_self() == 0) {
            printStatistics();
        }

        System_printf("Benchmark complete!\n");
        System_exit(0);
    }
}

/*
 *  ======== tsk0_func ========
 *  This function is executed only on CORE0.
 *  It sends an event to the next processor then pends on a semaphore.
 *  The semaphore is posted by the callback function.
 */
Void tsk0_func(UArg arg0, UArg arg1)
{
    Int status;
    
    /* Send an event to the next processor */
    if (MultiProc_self() == 0) {
        rawtimestamps[seq++] = Timestamp_get32();
        status = Notify_sendEvent(dstProc, INTERRUPT_LINE, EVENTID, NULL, TRUE);
        if (status < 0) {
            System_abort("Notify_sendEvent failed\n");
        }
    }
    
    Task_exit();
}

/*
 *  ======== registerFxn ========
 */
Int registerFxn(Ptr *userObj, UInt16 remoteProcId)
{
    Int status;

    if (remoteProcId != srcProc) {
        return (0);
    }
    status = Notify_registerEventSingle(srcProc, INTERRUPT_LINE, EVENTID,
                                  (Notify_FnNotifyCbck)cbFxn, NULL);
    if (status < 0) {
        System_abort("Notify_registerEvent failed\n");
    }

    return (0);
}


/*
 *  ======== main ========
 *  Create a task.
 *  Synchronize all processors.
 *  Register an event with Notify.
 */
Int main(Int argc, Char* argv[])
{
    selfId = MultiProc_self();
    
    System_printf("main: MultiProc id = %d\n", selfId);
    System_printf("main: MultiProc name = %s\n", 
        MultiProc_getName(selfId));
    
    if (numCores == 0) {
        numCores = MultiProc_getNumProcessors();
    }
    
    /*
     *  Determine which processors Notify will communicate with based on the
     *  local MultiProc id. 
     */

    srcProc = ((selfId - 1 + numCores) % numCores);
    dstProc = ((selfId + 1) % numCores);
    
    attachAll(numCores);

    BIOS_start();

    return (0);
}

