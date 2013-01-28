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
 *  ======== message.c ========
 *  This program demostrates MessageQ on a single processor.
 *
 *  This example has a single server Task that receives requests
 *  and responds back. The server Task receives requests via its
 *  MessageQ queue.
 *
 *  There are 3 clients Tasks. Each client creates its own MessageQ queue. 
 *  Each client opens the server's queue and sends a request. In each
 *  message is the reply queue. This allows the server to determine who
 *  to reply to (instead of doing an explicit MessageQ_open).
 *
 *  Each client allocates one message. This message is also used
 *  by the server to send the response. This is possible because 
 *  the content is the same size. Another option is to have the 
 *  server free the message and allocate a new one. Even another 
 *  option would to use MessageQ_staticMsgInit and not have any heaps.
 *  Please refer to the restrictions with MessageQ_staticMsgInit for
 *  more details.
 *
 *  Initially, each client places its arg0 value into the message 
 *  (e.g. clientTask0's arg0 is 0, etc). When the server receives the
 *  request, it simply adds NUMCLIENTS to the message id. This allows
 *  better validation that the message is being returned to the proper
 *  client.
 *
 *  Each client calls Task_sleep(arg0) to add a little variability 
 *  into the example. The example ends after each client sends NUMMSGS
 *  messages.
 *
 *  The server queue was created statically and the clients dynamically 
 *  to show the functionality. The names for the clients queues are not
 *  needed since no one attempts to open them.
 *
 *  See message.k file for expected output.
 */

#include <xdc/std.h>
#include <xdc/runtime/System.h>
#include <xdc/runtime/Error.h>

#include <ti/sysbios/BIOS.h>
#include <ti/sysbios/knl/Task.h>

#include <ti/ipc/Ipc.h>
#include <ti/ipc/MessageQ.h>

#include <xdc/cfg/global.h>

/* Constants for the program */
#define NUMCLIENTS  3
#define SERVERNAME  "server"
#define NUMMSGS     10

UInt numCompleted = 0;

/*
 *  ======== clientTask ========
 */
Void clientTask(UArg arg0, UArg arg1)
{
    MessageQ_Handle  messageQ;
    MessageQ_QueueId serverQueue;
    MessageQ_Msg     msg;
    UInt16           msgId = arg0;
    Int              status;
    Int              i;

    /*
     *  Create client's MessageQ.
     *
     *  Use 'NULL' for name since no since this queueId is passed by
     *  referene and no one opens it by name. 
     *  Use 'NULL' for params to get default parameters.
     */
    messageQ = MessageQ_create(NULL, NULL);
    if (messageQ == NULL) {
        System_abort("Failed to create MessageQ\n");
    }

    /* Open the server's MessageQ */
    do {
        status = MessageQ_open(SERVERNAME, &serverQueue);
        if (status < 0) {
            Task_sleep(1);  /* give server a chance to create queue */ 
        }
    }
    while (status < 0);
    
    msg = MessageQ_alloc(HEAPID, sizeof(MessageQ_MsgHeader));
    if (msg == NULL) {
        System_abort("MessageQ_alloc failed\n" );
    }
    
    /* Have the remote processor reply to this message queue */
    MessageQ_setReplyQueue(messageQ, msg);

    /* Loop requesting information from the server task */
    System_printf("Client #%d is starting to send requests\n", arg0);
    for (i = 0; i < NUMMSGS; i++) {        

        /* Server will increment and send back */
        MessageQ_setMsgId(msg, msgId);
        msgId += NUMCLIENTS;       

        /* Send the message off */
        status = MessageQ_put(serverQueue, msg);
        if (status < 0) {            
            MessageQ_free(msg);
            System_abort("MessageQ_put failed\n");
        }

        /* Wait for the reply... */
        status = MessageQ_get(messageQ, &msg, MessageQ_FOREVER);
        if (status < 0) {
            System_abort("MessageQ_get had an error\n");
        }

        /* Validate the returned message. */
        if (MessageQ_getMsgId(msg) != msgId) {
            System_abort("Unexpected value\n");
        }

        System_printf("Client #%d received response #%d\n", arg0, i + 1);

        /* To make some variation in the execution order */
        Task_sleep(500 * (arg0 + 1));
    }
    
    System_printf("Client #%d is done sending requests\n", arg0);
    
    numCompleted++;
    if (numCompleted == 3) {
        /* All client tasks are done sending requests */
        BIOS_exit(0);
    }



}

/*
 *  ======== serverTask ========
 */
Void serverTask(UArg arg0, UArg arg1)
{
    MessageQ_Handle  serverMessageQ;
    MessageQ_QueueId replyQueue;
    MessageQ_Msg     msg;
    UInt16           msgId;
    Int              status;

    serverMessageQ = MessageQ_create(SERVERNAME, NULL);
    
    /* Loop forever processing requests */
    System_printf("Server is ready to set processing requests\n");
    while (TRUE) {
    
        /* Wait for a request. */
        status = MessageQ_get(serverMessageQ, &msg, MessageQ_FOREVER);
        if (status < 0) {
            System_abort("Stopping test\n");
        }

        /* Get the id and increment it to send back as validation */
        msgId = MessageQ_getMsgId(msg);
        msgId += NUMCLIENTS;
        MessageQ_setMsgId(msg, msgId);
        
        /* Use the embedded reply destination */
        replyQueue = MessageQ_getReplyQueue(msg);

        /* Send the response back */
        status = MessageQ_put(replyQueue, msg);
        if (status < 0) {            
            System_abort("MessageQ_put was not successful\n");
        }
    }
}

/*
 *  ======== main ========
 */
Int main(Int argc, Char* argv[])
{
    BIOS_start();

    return (0);
}

/*
 *  @(#) ti.sdo.ipc.examples.singlecore; 1, 0, 0, 0,; 11-7-2012 13:14:28; /db/vtree/library/trees/ipc/ipc-i09/src/ xlibrary

 */

