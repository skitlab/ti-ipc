/* 
 * Copyright (c) 2012, Texas Instruments Incorporated
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
 * */
/*
 *  ======== notify_multicore.c ========
 *  Single-image version of Notify example
 *
 *  See notify_[CORENAME].k file for expected output.
 *
 *  Refer to the readme.txt on how to load and run the example.
 */

#include <xdc/std.h>

/*  -----------------------------------XDC.RUNTIME module Headers    */
#include <xdc/runtime/System.h>

/*  ----------------------------------- IPC module Headers           */
#include <ti/ipc/MultiProc.h>
#include <ti/ipc/Notify.h>
#include <ti/ipc/Ipc.h>
/*  ----------------------------------- BIOS6 module Headers         */
#include <ti/sysbios/knl/Semaphore.h>
#include <ti/sysbios/knl/Task.h>
#include <ti/sysbios/BIOS.h>

/*  ----------------------------------- To get globals from .cfg Header */
#include <xdc/cfg/global.h>

#define INTERRUPT_LINE  0

/* Notify event number that the app uses */
#define EVENTID         10

/* Number of times to run the loop */
#define NUMLOOPS        10 

UInt32 seq = 0;
UInt16 recvProcId;

UInt16 srcProc, dstProc;

/*
 *  ======== cbFxn ========
 *  This function was registered with Notify. It is called when any event is
 *  sent to this processor.
 */
Void cbFxn(UInt16 procId, UInt16 lineId,
           UInt32 eventId, UArg arg, UInt32 payload)
{
    /* The payload is a sequence number. */
    recvProcId = procId;
    seq = payload;
    Semaphore_post(semHandle);
}

/*
 *  ======== tsk0_func ========
 *  Sends an event to the next processor then pends on a semaphore.
 *  The semaphore is posted by the callback function.
 */
Void tsk0_func(UArg arg0, UArg arg1)
{
    Int i = 1;
    Int status;
    
    if (MultiProc_self() == 0) {
        while (i <= NUMLOOPS) {
            /* Send an event to the next processor */
            status = Notify_sendEvent(dstProc, INTERRUPT_LINE, EVENTID, i, 
                    TRUE);

            /* Continue until remote side is up */
            if (status < 0) {
                continue;
            }

            System_printf("tsk1_func: Sent request #%d to %s\n", seq,
                MultiProc_getName(dstProc));

            /* Wait to be released by the cbFxn posting the semaphore */
            Semaphore_pend(semHandle, BIOS_WAIT_FOREVER);

            System_printf("tsk1_func: Received request #%d from %s\n", seq,
                MultiProc_getName(recvProcId));

            /* increment for next iteration */
            i++;
        }
    }
    else {
        while (seq < NUMLOOPS) {
            /* wait forever on a semaphore, semaphore is posted in callback */
            Semaphore_pend(semHandle, BIOS_WAIT_FOREVER);

            System_printf("tsk1_func: Received request #%d from %s\n", seq,
                MultiProc_getName(recvProcId));

            /* Send an event to the next processor */
            status = Notify_sendEvent(dstProc, INTERRUPT_LINE, EVENTID, seq, 
                    TRUE);
            if (status < 0) {
                System_abort("sendEvent failed\n");
            }

            System_printf("tsk1_func: Sent request #%d to %s\n", seq,
                MultiProc_getName(dstProc));
        }
    }

    System_printf("Test completed\n");
    BIOS_exit(0);
}

/*
 *  ======== main ========
 *  Synchronizes all processors (in Ipc_start), calls BIOS_start, and registers 
 *  for an incoming event
 */
Int main(Int argc, Char* argv[])
{
    Int status;
    UInt numProcs = MultiProc_getNumProcessors();

    /*
     *  Determine which processors Notify will communicate with based on the
     *  local MultiProc id.  Also, create a processor-specific Task.
     */
    srcProc = ((MultiProc_self() - 1 + numProcs) % numProcs);
    dstProc = ((MultiProc_self() + 1) % numProcs);

    System_printf("main: MultiProc id = %d\n", MultiProc_self());
    System_printf("main: MultiProc name = %s\n", 
        MultiProc_getName(MultiProc_self()));
    
    /*  
     *  Ipc_start() calls Ipc_attach() to synchronize all remote processors
     *  because 'Ipc.procSync' is set to 'Ipc.ProcSync_ALL' in *.cfg
     */
    status = Ipc_start();
    if (status < 0) {
        System_abort("Ipc_start failed\n");
    }

    /*
     *  Register call back with Notify. It will be called when the processor
     *  with id = srcProc sends event number EVENTID to this processor.
     */
    status = Notify_registerEvent(srcProc, INTERRUPT_LINE, EVENTID,
                                  (Notify_FnNotifyCbck)cbFxn, NULL);
    if (status < 0) {
        System_abort("Notify_registerEvent failed\n");
    }

    BIOS_start();
    
    return (0);
}

/*
 */
/*
 *  @(#) ti.sdo.ipc.examples.multicore.evmTI81XX; 1, 0, 0, 0,; 11-7-2012 13:13:34; /db/vtree/library/trees/ipc/ipc-i09/src/ xlibrary

 */

