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
 *  ======== message_core1.c ========
 */

#include <xdc/std.h>
#include <string.h>

/*  -----------------------------------XDC.RUNTIME module Headers    */
#include <xdc/runtime/System.h>
#include <xdc/runtime/IHeap.h>

/*  ----------------------------------- IPC module Headers           */
#include <ti/ipc/Ipc.h>
#include <ti/ipc/MessageQ.h>
#include <ti/ipc/HeapBufMP.h>
#include <ti/ipc/MultiProc.h>

/*  ----------------------------------- BIOS6 module Headers         */
#include <ti/sysbios/BIOS.h>
#include <ti/sysbios/knl/Task.h>

/*  ----------------------------------- To get globals from .cfg Header */
#include <xdc/cfg/global.h>

#define CORE0_MESSAGEQNAME      "myTransportShmCore0"
#define CORE1_MESSAGEQNAME      "myTransportShmCore1"
#define DSP_MESSAGEQNAME        "myTransportShmDsp"
#define HEAP_NAME               "myHeapBuf"
#define HEAP_ALIGN              128
#define HEAP_MSGSIZE            128
#define HEAP_NUMMSGS            4
#define HEAPID                  0 
#define NUMLOOPS                10

/*
 *  ======== tsk1_func ========
 *  Send and receive messages
 */
Void tsk1_func(UArg arg0, UArg arg1)
{
    MessageQ_Msg     msg;    
    MessageQ_Handle  messageQ;
    MessageQ_QueueId remoteQueueId;
    HeapBufMP_Handle heapHandle;
    Int              status;
    UInt16           msgId;

    /* 
     *  Open the heap that is created on the other processor. Loop until opened.
     *  Not using the name since the interrupts are not enabled yet!
     */
    do {
        status = HeapBufMP_open(HEAP_NAME, &heapHandle);
        /* 
         *  Sleep for 1 clock tick to avoid inundating remote processor
         *  with interrupts if open failed
         */
        if (status < 0) {
            Task_sleep(1);
        }
    } while (status < 0);

    /* Register this heap with MessageQ */
    MessageQ_registerHeap((IHeap_Handle)heapHandle, HEAPID);

    /* Create a local message queue */
    messageQ = MessageQ_create(CORE1_MESSAGEQNAME, NULL);
    if (messageQ == NULL) {
        System_abort("MessageQ_create failed\n" );
    }    
    
    /* Open the core0 message queue. Spin until it is ready. */
    do {
        status = MessageQ_open(CORE0_MESSAGEQNAME, &remoteQueueId);
        /* 
         *  Sleep for 1 clock tick to avoid inundating remote processor
         *  with interrupts if open failed
         */
        if (status < 0) {
            Task_sleep(1);
        }
    } while (status < 0);

    /* Wait for a message and send it to core0 */
    System_printf("Start the main loop\n");
    while (TRUE) {
        /* Get a message */
        status = MessageQ_get(messageQ, &msg, MessageQ_FOREVER);
        if (status < 0) {
           System_abort("This should not happen since timeout is forever\n");
        }

        System_printf("Sending a message #%d to CORE0\n", MessageQ_getMsgId(msg));

        /* Get the message id */
        msgId = MessageQ_getMsgId(msg);

        /* send the message to the remote processor */
        status = MessageQ_put(remoteQueueId, msg);
        if (status < 0) {
           System_abort("MessageQ_put had a failure/error\n");
        }
        
        /* test done */
        if (msgId == NUMLOOPS) {
            System_printf("Test complete!\n");
            BIOS_exit(0);
        }
    }
}

/*
 *  ======== main ========
 *  Synchronizes all processors.
 */
Int main(Int argc, Char* argv[])
{
    Int status;

    /*  
     *  Ipc_start() calls Ipc_attach() to synchronize all remote processors
     *  because 'Ipc.procSync' is set to 'Ipc.ProcSync_ALL' in *.cfg
     */
    status = Ipc_start();
    if (status < 0) {
        System_abort("Ipc_start failed\n");
    }

    BIOS_start();

    return (0);
}
/*
 *  @(#) ti.sdo.ipc.examples.multicore.omap4430; 1, 0, 0, 0,; 11-7-2012 13:13:36; /db/vtree/library/trees/ipc/ipc-i09/src/ xlibrary

 */

