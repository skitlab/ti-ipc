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
% var Mod = this.modName;
% if (Mod.match(".")) {
%    Mod = Mod.substring(Mod.lastIndexOf(".") + 1);
% }
% var inclName = this.modName.replace(/\./g, "/") + ".h";
/*
 *  ======== test.c ========
 *  This program uses Stream_issue/Stream_reclaim
 */
 
#include <xdc/std.h>
#include <xdc/runtime/System.h>

#include <ti/sysbios/BIOS.h>
#include <ti/sysbios/knl/Task.h>

#include <ti/sdo/io/Stream.h>
#include <`inclName`>

#include <xdc/cfg/global.h>

#define BUFSIZE 16
#define NBUFS   5

Int buf[BUFSIZE];
Ptr pbuf = &buf;

Stream_Handle handleIn, handleOut;
Int count = 1;

/*
 *  ======== main ========
 */
Int main(Int argc, Char* argv[])
{
    System_printf("Creating streams in main\n", count);

    handleIn = Stream_create("/driver", Stream_INPUT, NULL, NULL);

    handleOut = Stream_create("/driver", Stream_OUTPUT, NULL, NULL);

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
        /* empty buf issued to empty channel */
        Stream_issue(handleIn, pbuf, BUFSIZE, NULL, NULL);
        Stream_reclaim(handleIn, &pbuf, BIOS_WAIT_FOREVER, NULL, NULL);

        /* process data from INPUT channel */
        System_printf("Processing data %dth time\n", count);

        /* filled buf is sent to OUTPUT channel */
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
 *  @(#) ti.sdo.io.driverTemplate; 0, 00, 00,; 11-7-2012 13:08:18; /db/vtree/library/trees/ipc/ipc-i09/src/ xlibrary

 */

