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
 *  ======== stream.c ========
 */
 
#include <xdc/std.h>
#include <xdc/runtime/System.h>

#include <ti/sysbios/BIOS.h>
#include <ti/sysbios/knl/Task.h>

#include <ti/sdo/io/Stream.h>
#include <ti/sdo/io/drivers/Generator.h>

#include <xdc/cfg/global.h>

#define BUFSIZE 16
#define NBUFS   5

Void genSine(Ptr bufp, size_t nmaus, UArg arg);
Void myPrintf(Ptr bufp, size_t nmaus, UArg arg);

Int buf[BUFSIZE];
Ptr pbuf = &buf;

Stream_Handle handleIn, handleOut;
Int count = 1;

Generator_ChanParams genParamsIn = { genSine, NULL, FALSE };
Generator_ChanParams genParamsOut = { myPrintf, NULL, FALSE };

/* 
 * ======== genSine ========
 * Function used to simulate input channel
 * This function generates a sine wave.
 */
Void genSine(Ptr bufp, size_t nmaus, UArg arg)
{
    Int i; 
    Int *dst = (Int *)bufp;
    static Int data[16] = {
        0,  11793,  22594,  29956,  32767,  29956,  22594,  11793,
        0, -11793, -22594, -29956, -32767, -29956, -22594, -11793
    };

    for (i = 0; i < nmaus / sizeof(Int); i++) {
        dst[i] = data[i & 0xf];
    }
}

/* 
 * ======== myPrintf ========
 * Function used to simulate output channel
 * This function prints the buffer.
 */
Void myPrintf(Ptr bufp, size_t nmaus, UArg arg)
{
    Int i;
    Int *src = (Int *)bufp;

    for (i = 0; i < (nmaus / sizeof(Int)); i++) {
        System_printf("%d\n", src[i]);  
    }
}

/*
 *  ======== main ========
 */
Int main(Int argc, Char* argv[])
{
    Stream_Params streamParams;

    Stream_Params_init(&streamParams);

    System_printf("Creating streams in main\n", count);

    streamParams.chanParams = (UArg)&genParamsIn;
    handleIn = Stream_create("/genDevice", Stream_INPUT, &streamParams, NULL);

    streamParams.chanParams = (UArg)&genParamsOut;
    handleOut = Stream_create("/genDevice", Stream_OUTPUT, &streamParams, NULL);

    BIOS_start();

    return(0);
}

/*
 *  ======== tsk0Fxn ========
 *  Task that owns input channel
 */
Void task0Fxn (UArg arg1, UArg arg2)
{
    for (;;) {
        /* buf gets filled with sine data */
        Stream_issue(handleIn, pbuf, BUFSIZE, NULL, NULL);
        Stream_reclaim(handleIn, &pbuf, BIOS_WAIT_FOREVER, NULL, NULL);

        System_printf("Printing sine data %dth time\n", count);

        /* buf filled with sine data is printed out */
        Stream_issue(handleOut, pbuf, BUFSIZE, NULL, NULL);    
        Stream_reclaim(handleOut, &pbuf, BIOS_WAIT_FOREVER, NULL, NULL);        
        
        count++;

        if (count > NBUFS) {
            System_printf("End of stream example\n");
            System_exit(0);
        }
    }
}

/*
 *  @(#) ti.sdo.ipc.examples; 1,0,0,; 11-7-2012 13:14:34; /db/vtree/library/trees/ipc/ipc-i09/src/ xlibrary

 */

