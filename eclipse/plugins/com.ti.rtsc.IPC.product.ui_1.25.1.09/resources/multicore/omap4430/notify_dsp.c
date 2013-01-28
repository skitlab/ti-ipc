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
 *  ======== notify_dsp.c ========
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
 *  Each processor has a Task that is pending on a semaphore. Once
 *  the event comes in, the cbFxn posts the semaphore, which releases
 *  the pending Task.
 *
 *  See notify_dsp.k file for expected output.
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
UInt16 core0ProcId;

/*
 *  ======== cbFxn ========
 *  This function was registered with Notify. It is called when 
 *  an event is sent to this processor.
 */
Void cbFxn(UInt16 procId, UInt16 lineId,
           UInt32 eventId, UArg arg, UInt32 payload)
{
    /* Quick sanity check. This should never fail in this example */
    if ((arg != 0xC0DE) || 
        (eventId != EVENTID)) {
        System_abort("Wrong values\n");
    }

    /* store in seq to show that payload made it all the way around */
    seq = payload;
    Semaphore_post(semHandle);
}

/*
 *  ======== tsk1_func ========
 *  Wait to be released then send an interrupt to the CORE1 processor
 */
Void tsk1_func(UArg arg0, UArg arg1)
{
    Int status;

    while (seq < NUMLOOPS) {
        /* Wait to be released by callback function */
        Semaphore_pend(semHandle, BIOS_WAIT_FOREVER);

        System_printf("tsk1_func: Received request #%d from core0\n", seq);
        
        status = Notify_sendEvent(core0ProcId, 0, EVENTID, seq, TRUE);
        if (status < 0) {
            System_abort("sendEvent failed\n");
        }

        System_printf("tsk1_func: Sent reply #%d to core0\n", seq);
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

    core0ProcId = MultiProc_getId("CORE0");

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
     *  Register cbFxn with Notify. It will be called when CORE1
     *  sends event number EVENTID to instance.
     *  Passing in 0xC0DE as the arg just for validation.
     */
    status = Notify_registerEvent(core0ProcId, 0, EVENTID, 
                              (Notify_FnNotifyCbck)cbFxn, 0xC0DE);
    if (status < 0) {
        System_abort("Notify_registerEvent failed\n");
    }

    BIOS_start();
    return (0);
}

/*
 */
/*
 *  @(#) ti.sdo.ipc.examples.multicore.omap4430; 1, 0, 0, 0,; 11-7-2012 13:13:36; /db/vtree/library/trees/ipc/ipc-i09/src/ xlibrary

 */

