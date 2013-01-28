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
 *  ======== message_core0.c ========
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
 *  A local message queue is created and two remote message queues are opened.
 *  Messages are sent to the remote message queues and retrieved from the
 *  local message queue.
 */
Void tsk1_func(UArg arg0, UArg arg1)
{
    MessageQ_Msg     msg;    
    MessageQ_Handle  messageQ;
    MessageQ_QueueId core1QueueId, dspQueueId;    
    Int              status;
    UInt16           msgId = 0;

    /* Create a message queue */
    messageQ = MessageQ_create(CORE0_MESSAGEQNAME, NULL); 
    if (messageQ == NULL) {
        System_abort("MessageQ_create failed\n" );
    }    
    
    /* Open the DSP message queue. Spin until it is ready. */
    do {
        status = MessageQ_open(DSP_MESSAGEQNAME, &dspQueueId);
        /* 
         *  Sleep for 1 clock tick to avoid inundating remote processor
         *  with interrupts if open failed
         */
        if (status < 0) {
            Task_sleep(1);
        }
    } while (status < 0);
    
    /* Open the CORE1 message queue. Spin until it is ready. */
    do {
        status = MessageQ_open(CORE1_MESSAGEQNAME, &core1QueueId);
        /* 
         *  Sleep for 1 clock tick to avoid inundating remote processor
         *  with interrupts if open failed
         */
        if (status < 0) {
            Task_sleep(1);
        }
    } while (status < 0);
    
    /* Allocate a message to be ping-ponged around the processors */
    msg = MessageQ_alloc(HEAPID, HEAP_MSGSIZE);
    if (msg == NULL) {
       System_abort("MessageQ_alloc failed\n" );
    }
    
    /* Send the message to the DSP and wait for a response */
    System_printf("Start the main loop\n");
    while (msgId < NUMLOOPS) {     
        /* Increment...the remote side will check this */
        msgId++;
        MessageQ_setMsgId(msg, msgId);
        
        System_printf("Sending a message #%d to CORE1\n", msgId);
        
        /* send the message to the remote processor */
        status = MessageQ_put(core1QueueId, msg);
        if (status < 0) {
            System_abort("MessageQ_put had an error\n");           
        }        
        
        /* Get a message */
        status = MessageQ_get(messageQ, &msg, MessageQ_FOREVER);
        if (status < 0) {
           System_abort("This should not happen since timeout is forever\n");           
        }
        
        System_printf("Sending a message #%d to DSP\n", msgId);

        status = MessageQ_put(dspQueueId, msg);
        if (status < 0) {
            System_abort("MessageQ_put had an error\n");    
        }   

        /* Get another message */
        status = MessageQ_get(messageQ, &msg, MessageQ_FOREVER);
        if (status < 0) {
           System_abort("This should not happen since timeout is forever\n");
        }
    }

    System_printf("The test is complete\n");
    BIOS_exit(0);
}

/*
 *  ======== main ========
 *  Synchronizes all processors.
 *  Creates a HeapBufMP and registers it with MessageQ.
 */
Int main(Int argc, Char* argv[])
{
    Int status;
    HeapBufMP_Handle              heapHandle;
    HeapBufMP_Params              heapBufParams;

    /*  
     *  Ipc_start() calls Ipc_attach() to synchronize all remote processors
     *  because 'Ipc.procSync' is set to 'Ipc.ProcSync_ALL' in *.cfg
     */
    status = Ipc_start();
    if (status < 0) {
        System_abort("Ipc_start failed\n");
    }

    /* 
     *  Create the heap that will be used to allocate messages.
     */     
    HeapBufMP_Params_init(&heapBufParams);
    heapBufParams.regionId       = 0;
    heapBufParams.name           = HEAP_NAME;
    heapBufParams.align          = HEAP_ALIGN;
    heapBufParams.numBlocks      = HEAP_NUMMSGS;
    heapBufParams.blockSize      = HEAP_MSGSIZE;
    heapHandle = HeapBufMP_create(&heapBufParams);
    if (heapHandle == NULL) {
        System_abort("HeapBufMP_create failed\n" );
    }
    
    /* Register this heap with MessageQ */
    MessageQ_registerHeap((IHeap_Handle)heapHandle, HEAPID);
 
    BIOS_start();
    return (0);
}
/*
 *  @(#) ti.sdo.ipc.examples.multicore.omap4430; 1, 0, 0, 0,; 11-7-2012 13:13:36; /db/vtree/library/trees/ipc/ipc-i09/src/ xlibrary

 */

