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
 *  ======== messageq_latency.c ========
 */

#include <xdc/std.h>
#include <string.h>
#include <stdlib.h>

/*  -----------------------------------XDC.RUNTIME module Headers    */
#include <xdc/runtime/System.h>
#include <xdc/runtime/IHeap.h>
#include <xdc/runtime/Timestamp.h>
#include <xdc/runtime/Types.h>

/*  ----------------------------------- IPC module Headers           */
#include <ti/ipc/Ipc.h>
#include <ti/ipc/MessageQ.h>
#include <ti/ipc/MultiProc.h>
#include <ti/ipc/SharedRegion.h>

/*  ----------------------------------- BIOS6 module Headers         */
#include <ti/sysbios/BIOS.h>
#include <ti/sysbios/knl/Task.h>

/*  ----------------------------------- To get globals from .cfg Header */
#include <xdc/cfg/global.h>

#include "bench_common.h"


#define HEAP_ID         0
#define MSGSIZE         64

/* Number of times to run the loop */
#define NUMLOOPS        10000
#define NUMIGNORED      5

/* Convert cycles to microseconds */
#define CYCLES_TO_US(CYCLES, CPUFREQ) \
    ((UInt32)((((Double)CYCLES * 1000000))/(Double)CPUFREQ))
    
/* Convert cycles to nanoseconds */
#define CYCLES_TO_NS(CYCLES, CPUFREQ) \
    ((UInt32)((((Double)CYCLES * 1000000000))/(Double)CPUFREQ))

Char localQueueName[6];
Char nextQueueName[6];
Char prevQueueName[6];

/* Results */
UInt32 rawtimestamps[NUMLOOPS];
UInt32 latencies[NUMLOOPS - 1];

MessageQ_Handle messageQ = NULL;
MessageQ_QueueId nextQueueId, prevQueueId;

UInt numReceived = 0;

/* Benchmark parameters */
UInt numCores = 0;
UInt16 selfId;

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
    System_printf("MessageQ setup delegate:      %s\n", TRANSPORTSETUP);
    System_printf("Number of processors:         %d\n", numCores);
    System_printf("Number of messages received:  %d\n", latencyStats.numVals);
    System_printf("Build profile:                %s\n\n", BUILDPROFILE);

    System_printf("======== MESSAGEQ BENCHMARK RESULTS ======== \n");    
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
 *  ======== tsk0 ========
 */
Void tsk0(UArg arg0, UArg arg1)
{
    Int              status;
    MessageQ_Msg     msg; 
    
    System_printf("tsk0 starting\n");

    /* Register this heap with MessageQ */
    MessageQ_registerHeap((IHeap_Handle)SharedRegion_getHeap(0), HEAP_ID);

    /* Open the 'next' remote message queue. Spin until it is ready. */
    do {
        status = MessageQ_open(nextQueueName, &nextQueueId); 
    }
    while (status < 0);
    
    if (selfId == 0) {
        msg = MessageQ_alloc(HEAP_ID, MSGSIZE);
        if (msg == NULL) {
            System_abort("MessageQ_alloc failed\n");
        }
        
        /* Kick off the loop */
        status = MessageQ_put(nextQueueId, msg);
        if (status < 0) {
            System_abort("MessageQ_put failed\n");
        }
    }
    
    for (numReceived = 0; numReceived < NUMLOOPS; numReceived++) {
        /* Get a message */
        status = MessageQ_get(messageQ, &msg, MessageQ_FOREVER);
        if (status < 0) {
            System_abort("MessageQ_get failed\n");
        }
        
        if (selfId == 0) {
            rawtimestamps[numReceived] = Timestamp_get32();
            
            if (numReceived == NUMLOOPS - 1) {
                printStatistics();
                break;
            }
        }
        
        status = MessageQ_put(nextQueueId, msg);
        if (status < 0) {
            System_abort("MessageQ_put failed\n");
        }
    }
    
    System_exit(0);
    
}

/*
 *  ======== main ========
 */
Int main(Int argc, Char* argv[])
{  
    selfId = MultiProc_self();
    
    System_printf("Core (\"%s\") starting\n", MultiProc_getName(selfId));
    
    if (numCores == 0) {
        numCores = MultiProc_getNumProcessors();
    }
    
    attachAll(numCores);
    
    System_sprintf(localQueueName, "CORE%d", selfId);
    System_sprintf(nextQueueName, "CORE%d", 
        ((selfId + 1) % numCores));
    System_sprintf(prevQueueName, "CORE%d", 
        (selfId - 1 + numCores)
            % numCores);
            
    /* Create a message queue. */
    messageQ = MessageQ_create(localQueueName, NULL);    
    if (messageQ == NULL) {
        System_abort("MessageQ_create failed\n" );
    }
 
    BIOS_start();

    return (0);
}
