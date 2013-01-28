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
 *  ======== notify_arm.c ========
 *  Notify on a multiprocessor system
 *
 *  This is an example program that uses Notify between the two
 *  processors (arm and dsp) of a DM6446 device.
 * 
 *  The arm processor sends a notify event to dsp. Once the dsp 
 *  receives the notify, it sends a notify event back to arm processor.
 *  The loop is completed NUMLOOPS times.
 *
 *  Each processor has a Task that is pending on a semaphore. Once
 *  the event comes in, the cbFxn posts the semaphore, which releases
 *  the pending Task.
 *
 *  The NotifyDriverShm is used as the notify driver between the 
 *  processors.
 *
 *  See notify_arm.k file for expected output.
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

#define LINE_0 0
#define LINE_1 1

/* Number of times to run the loop */
#define NUMLOOPS        10 

/* Notify event number that the app uses */
#define EVENTID         10

UInt32 seq = 0;
UInt16 dspProcId;


/*
 *  ======== cbFxnLine0 ========
 *  This function was registered with Notify. It is called when 
 *  an event is sent to this processor.
 */
Void cbFxnLine0(UInt16 procId, UInt16 lineId,
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
 *  ======== cbFxnLine1 ========
 *  This function was registered with Notify. It is called when 
 *  an event is sent to this processor.
 */
Void cbFxnLine1(UInt16 procId, UInt16 lineId,
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
 *  ======== tsk0_func ========
 *  Send an interrupt to the DSP processor and wait on semaphore.
 */
Void tsk0_func(UArg arg0, UArg arg1)
{   
    Int   i = 1;
    Int status;    
    Int16 remoteProcId = MultiProc_getId("DSP");
    
    while (i <= NUMLOOPS) {
        /* Send an event to the DSP */
        status = Notify_sendEvent(dspProcId, LINE_0, EVENTID, i, TRUE);
        
        /* Continue until remote side is up */      
        if (status < 0) {
            continue;
        }
        
        System_printf("Sent request #%d to DSP (lineId = 0)\n", i);

        /* Wait to be released by the cbFxn posting the semaphore */
        Semaphore_pend(semHandle, BIOS_WAIT_FOREVER);
        
        System_printf("Received request #%d from DSP (lineId = 1)\n", seq);        
        
        /* Send an event to the DSP */
        status = Notify_sendEvent(dspProcId, LINE_1, EVENTID, i, TRUE);
        
        /* Continue until remote side is up */      
        if (status < 0) {
            continue;
        }

        System_printf("Sent request #%d to DSP (lineId = 1)\n", i);
        
        /* Wait to be released by the cbFxn posting the semaphore */
        Semaphore_pend(semHandle, BIOS_WAIT_FOREVER);
        System_printf("Received request #%d from DSP (lineId = 0)\n", seq);        
        
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
    dspProcId = MultiProc_getId("DSP");

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
     *  Register cbFxn with Notify. It will be called when DSP
     *  sends event number EVENTID to instance.
     *  Passing in 0xBAAD as the arg just for validation.
     */
    status = Notify_registerEvent(dspProcId, LINE_0, EVENTID,
                              (Notify_FnNotifyCbck)cbFxnLine0, 0xBAAD);    
    if (status < 0) {
        System_abort("Notify_registerEvent failed\n");
    }

    status = Notify_registerEvent(dspProcId, LINE_1, EVENTID,
                              (Notify_FnNotifyCbck)cbFxnLine1, 0xC0DE);                                
    if (status < 0) {
        System_abort("Notify_registerEvent failed\n");
    }

    BIOS_start();
    return (0);
}

/*
 */
/*
 *  @(#) ti.sdo.ipc.examples.multicore.evmDM6446; 1, 0, 0, 0,; 11-7-2012 13:13:30; /db/vtree/library/trees/ipc/ipc-i09/src/ xlibrary

 */

