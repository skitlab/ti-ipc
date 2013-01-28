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
 *  ======== notify_loopback.c ========
 *  This program demonstrates the functionality of the Notify module on a
 *  single processor.
 *
 *  The purpose of this example is to show the usage of Notify APIs. All
 *  events are registered and sent locally.
 *
 *  Initially two functions are registered for an event. This is to
 *  show that multiple functions can be registered. Each function
 *  will be passed its specified "arg".
 *
 *  Functions demonstrated:
 *   - Notify_register
 *   - Notify_unregister
 *   - Notify_disableEvent
 *   - Notify_enableEvent
 *   - Notify_sendEvent
 *
 *  See notify_loopback.k file for expected output.
 */

#include <xdc/std.h>
#include <xdc/runtime/System.h>
#include <ti/ipc/MultiProc.h>
#include <ti/ipc/Notify.h>

#include <xdc/cfg/global.h>

/* Event number to be used in the example */
#define EVENT  5

/*
 *  ======== myFxn1 ========
 */
Void myFxn1(UInt16 procId, UInt16 lineId, UInt32 eventNo, UArg arg, 
            UInt32 payload)
{
    UInt32 *theArg = (UInt32 *)arg;
    System_printf("myFxn1: eventNo: #%d, arg: %d, payload: %x\n",
                  eventNo, *theArg, payload);
}

/*
 *  ======== myFxn2 ========
 */
Void myFxn2(UInt16 procId, UInt16 lineId, UInt32 eventNo, UArg arg, 
            UInt32 payload)
{
    UInt32 *theArg = (UInt32 *)arg;
    System_printf("myFxn2: eventNo: #%d, arg: %d, payload: %x\n",
                  eventNo, *theArg, payload);
}

/*
 *  ======== main ========
 */
Int main(Int argc, Char* argv[])
{
    UInt32 myArg1 = 12345;
    UInt32 myArg2 = 67890;
    UInt16 myProcId = MultiProc_self();
    Int status;
    
    /* Register the functions to be called */
    System_printf("Registering myFxn1 & myArg1 to event #%d..\n", EVENT);
    Notify_registerEvent(myProcId, 0, EVENT,
                         (Notify_FnNotifyCbck)myFxn1, (UArg)&myArg1);

    System_printf("Registering myFxn2 & myArg2 to event #%d..\n", EVENT);
    Notify_registerEvent(myProcId, 0, EVENT,
                         (Notify_FnNotifyCbck)myFxn2, (UArg)&myArg2);

    /* Send an event */
    System_printf("Sending event #%d (myFxn1 and myFxn2 should run)\n", EVENT);
    Notify_sendEvent(myProcId, 0, EVENT, 0xaaaaa, TRUE);

    /* Unregister one of the functions */
    System_printf("Unregistering myFxn1 + myArg1\n");
    status = Notify_unregisterEvent(myProcId, 0, EVENT,
                                    (Notify_FnNotifyCbck)myFxn1, 
                                    (UArg)&myArg1);
    if (status < 0) {
        System_abort("Listener not found! (THIS IS UNEXPECTED)\n");
    }

    /* Send an event */
    System_printf("Sending event #%d (myFxn2 should run)\n", EVENT);
    Notify_sendEvent(myProcId, 0, EVENT, 0xbbbbb, TRUE);

    /* Disable event */
    System_printf("Disabling event #%d:\n", EVENT);
    Notify_disableEvent(myProcId, 0, EVENT);

    /* Send an event (nothing should happen) */
    System_printf("Sending event #%d (nothing should happen)\n", EVENT);
    Notify_sendEvent(myProcId, 0, EVENT, 0xbbbbb, TRUE);

    /* Enable event */
    System_printf("Enabling event #%d:\n", EVENT);
    Notify_enableEvent(myProcId, 0, EVENT);

    /* Send an event */
    System_printf("Sending event #%d (myFxn2 should run)\n", EVENT);
    Notify_sendEvent(myProcId, 0, EVENT, 0xbbbbb, TRUE);
    
    System_printf("Test completed\n");
    return (0);
}

/*
 */
/*
 *  @(#) ti.sdo.ipc.examples.singlecore; 1, 0, 0, 0,; 11-7-2012 13:14:28; /db/vtree/library/trees/ipc/ipc-i09/src/ xlibrary

 */

