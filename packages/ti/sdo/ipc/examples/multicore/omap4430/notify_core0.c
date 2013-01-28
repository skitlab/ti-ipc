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
 *  ======== notify_core0.c ========
 *  Notify on a multiprocessor system
 *
 *  This is an example program that uses Notify between the three
 *  processors (CORE0, CORE1 and DSP) of an OMAP4430 device.
 * 
 *  The core0 processor (core 0 of Dual-M3) sends a notify event to
 *  the DSP. Once the DSP receives the notify, it replies back to
 *  CORE0 which in turn causes a notification to be sent to CORE1. 
 *  CORE1 sends a reply back to CORE0 and CORE0 proceeds to send
 *  another notification to the DSP. This loop is completed NUMLOOPS times.
 *
 *  The DSP and CORE1 each have Task that pends on a semaphore. Once
 *  the event comes in, the cbFxn posts the semaphore, which releases
 *  the pending Task.  CORE0's callback function registered for the DSP
 *  sends an event to CORE1 so events are sent to CORE1 only once
 *  a reply has been received from the DSP.
 *
 *  See notify_core0.k file for expected output.
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
#include <ti/sysbios/BIOS.h>

/*  ----------------------------------- To get globals from .cfg Header */
#include <xdc/cfg/global.h>

/* Number of times to run the loop */
#define NUMLOOPS        10 

/* Notify event number that the app uses */
#define EVENTID         10

UInt32 seq = 0;
UInt16 core1ProcId;
UInt16 dspProcId;

/*
 *  ======== cbFxnCore1 ========
 *  This function was registered with Notify. It is called when 
 *  an event is sent to this processor.
 */
Void cbFxnCore1(UInt16 procId, UInt16 lineId,
                UInt32 eventId, UArg arg, UInt32 payload)
{
    /* Quick sanity check. This should never fail in this example */
    if ((arg != 0xBAAD) || 
        (eventId != EVENTID)) {
        System_abort("Wrong values\n");
    }
    
    /* store in seq to show that payload made it all the way around */
    seq = payload;
    Semaphore_post(semHandle);
}

/*
 *  ======== cbFxnDsp ========
 *  This function was registered with Notify. It is called when 
 *  an event is sent to this processor.
 */
Void cbFxnDsp(UInt16 procId, UInt16 lineId,
              UInt32 eventId, UArg arg, UInt32 payload)
{
    Int status;

    /* Quick sanity check. This should never fail in this example */
    if ((arg != 0xBEEF) || 
        (eventId != EVENTID)) {
        System_abort("Wrong values\n");
    }

    /* Send an event to core1 */
    do {
        status = Notify_sendEvent(core1ProcId, 0, EVENTID, payload, TRUE);
    } while (status < 0);
    
    /* store in seq to show that payload made it all the way around */
    seq = payload;
    Semaphore_post(semHandle);
}

/*
 *  ======== tsk1_func ========
 *  Send an interrupt to the DSP processor and wait on semaphore.
 */
Void tsk1_func(UArg arg0, UArg arg1)
{
    Int i = 1;
    Int status;

    while (i <= NUMLOOPS) {
        /* Send an event to the DSP */
        status = Notify_sendEvent(dspProcId, 0, EVENTID, i, TRUE);

        /* Continue until remote side is up */      
        if (status < 0) {
            continue;
        }

        System_printf("tsk1_func: Sent request #%d to DSP\n", i);

        /* Wait to be released by the cbFxn posting the semaphore */
        Semaphore_pend(semHandle, BIOS_WAIT_FOREVER);

        System_printf("tsk1_func: Received request #%d from DSP\n", seq);        
        
        /* Wait to be released by the cbFxn posting the semaphore */
        Semaphore_pend(semHandle, BIOS_WAIT_FOREVER);

        System_printf("tsk1_func: Received request #%d from CORE1\n", seq);        
        
        /* increment for next iteration */
        i++;
    }

    System_printf("Test completed\n");
    BIOS_exit(0);
}

/*
 *  ======== main ========
 */
Int main(Int argc, Char* argv[])
{
    Int status;

    core1ProcId     = MultiProc_getId("CORE1");
    dspProcId       = MultiProc_getId("DSP");

    System_printf("main: MultiProc id = %d\n", MultiProc_self());

    /*  
     *  Ipc_start() calls Ipc_attach() to synchronize all remote processors
     *  because 'Ipc.procSync' is set to 'Ipc.ProcSync_ALL' in *.cfg
     */
    status = Ipc_start();
    if (status < 0) {
        System_abort("Ipc_start failed\n");
    }

    /*
     *  Register cbFxnCore1 with Notify. It will be called when CORE1
     *  sends event number EVENTID to instance.
     *  Passing in 0xBAAD as the arg just for validation.
     */
    status = Notify_registerEvent(core1ProcId, 0, EVENTID,
                              (Notify_FnNotifyCbck)cbFxnCore1, 0xBAAD);
    if (status < 0) {
        System_abort("Notify_registerEvent (CORE1) failed\n");
    }

    /* 
     *  Register cbFxn with Notify. It will be called when DSP
     *  sends event number EVENTID to instance.
     *  Passing in 0xBAAD as the arg just for validation.
     */
    status = Notify_registerEvent(dspProcId, 0, EVENTID,
                              (Notify_FnNotifyCbck)cbFxnDsp, 0xBEEF);
    if (status < 0) {
        System_abort("Notify_registerEvent (DSP) failed\n");
    }

    BIOS_start();
    return (0);
}

/*
 */
/*
 *  @(#) ti.sdo.ipc.examples.multicore.omap4430; 1, 0, 0, 0,; 11-7-2012 13:13:36; /db/vtree/library/trees/ipc/ipc-i09/src/ xlibrary

 */

