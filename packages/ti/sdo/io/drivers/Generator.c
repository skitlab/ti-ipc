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
/*  ======== Generator.c ========
 */

#include <xdc/std.h>
#include <xdc/runtime/Error.h>
#include <xdc/runtime/Gate.h>
 
#include <ti/sdo/utils/List.h> 
#include <ti/sdo/io/IDriver.h> 
#include <ti/sdo/io/DriverTypes.h> 

#include "package/internal/Generator.xdc.h"

/*
 *************************************************************************
 *                      Module functions
 *************************************************************************
 */

/*
 *  ======== Generator_simulateIsr ========
 */
Void Generator_simulateIsr(UArg arg)
{
    Generator_ChanObj *chan;
    DriverTypes_Packet *packet;
    List_Elem  *elem = NULL;
    List_Handle chanQ;
    
    chanQ = Generator_Module_State_chanList();

    /* loop through all channels and process a packet per channel */
    while ((elem = List_next(chanQ, elem)) != NULL) {
        chan = (Generator_ChanObj *)elem;
        
        if (chan->returnPending) {               
            packet = List_get(chan->pendList);
            //process one packet per isr
            if (packet != NULL) {
                if (chan->userFxn) {
                    chan->userFxn(packet->addr, 
                    packet->origSize, chan->userArg);
                }
                packet->error = NULL;
                packet->size = packet->origSize;
                chan->cbFxn(chan->cbArg, packet);
            }
        }
    }
}


/*
 *  ======== open ========
 */
Ptr Generator_open(Generator_Object *obj, String name, UInt mode, \
    UArg chanParams, DriverTypes_DoneFxn cbFxn, UArg cbArg, Error_Block *eb)
{
    Generator_ChanObj *chan = NULL;
    Generator_ChanParams *prms = (Generator_ChanParams *) chanParams;
    UInt key;
    List_Handle chanQ;
    
    chanQ = Generator_Module_State_chanList();

    if (chanParams == NULL) {
        Error_raise(eb, Generator_E_nullParams, 0, 0); 
    }
    
    key = Gate_enterSystem();
    if (mode == DriverTypes_INPUT) {
        if ( !obj->chans[0].inUse) {
            chan = &(obj->chans[DriverTypes_INPUT]);
            chan->inUse = TRUE;  
    }
    }

    if (mode == DriverTypes_OUTPUT) {
        if (!obj->chans[1].inUse) {
            chan = &(obj->chans[DriverTypes_OUTPUT]);
            chan->inUse = TRUE;  
    }
    }
    Gate_leaveSystem(key);

    if (chan == NULL) {
        Error_raise(eb, DriverTypes_EINUSE, 0, 0);
        return (NULL);
    }

    chan->cbFxn = cbFxn;
    chan->cbArg = cbArg;
    chan->userFxn = prms->userFxn;
    chan->userArg = prms->userArg;
    chan->returnPending = prms->returnPending;

    List_put(chanQ, (List_Elem *)chan);
        
    return (chan);
}

/*
 *  ======== submit ========
 */
UInt Generator_submit(Generator_Object *obj, Ptr chanHandle, 
    DriverTypes_Packet *packet, Error_Block *eb)
{
    Generator_ChanObj *chan = (Generator_ChanObj *)chanHandle;

    if (chan->returnPending) {
        List_put(chan->pendList, (List_Elem *)packet);
        return (DriverTypes_PENDING);
    }
    else {
        /* Call the users defined function to send or receive buffer's data  */
        if (chan->userFxn) {
            chan->userFxn(packet->addr, packet->origSize, chan->userArg);
        }
        return (DriverTypes_COMPLETED);
    }
}

/*
 *  ======== control ========
 */
Void Generator_control(Generator_Object *obj, Ptr chanHandle, 
    DriverTypes_ControlCmd cmd, UArg cmdArg, Error_Block *eb)
{
    UInt i = 0;
    Generator_ChanObj *chan = (Generator_ChanObj *)chanHandle;
    DriverTypes_Packet *packet;
        
    if (cmd == DriverTypes_CHAN_ABORT) {
        while(!List_empty(chan->pendList)) {
            i++;
            packet = List_get(chan->pendList);
            packet->error = DriverTypes_EABORTED;
            packet->size = 0;
            chan->cbFxn(chan->cbArg, packet);
        }
        /* return number of packets aborted */
        if (cmdArg) {
            *(UInt *)cmdArg = i;
        }
    }
    else {
        Error_raise(eb, DriverTypes_ENOTIMPL, 0, 0 );
    }
}

/*
 *  ======== close ========
 */
Void Generator_close(Generator_Object *obj, Ptr chanHandle, Error_Block *eb)
{
    Generator_ChanObj *chan;
    UInt key;
    List_Handle chanQ;
    
    chanQ = Generator_Module_State_chanList();
    
    chan = (Generator_ChanObj *)chanHandle;

    if (!List_empty(chan->pendList)) {
        Error_raise (eb, DriverTypes_EINUSE, 0, 0);
        return;
    }
    if (!chan->inUse) {
        Error_raise (eb, DriverTypes_EBADARGS, 0, 0);
        return;
    }
 
    key = Gate_enterSystem();
    List_remove(chanQ, (List_Elem *)chan);
    chan->inUse = FALSE;
    Gate_leaveSystem(key);
}

/*
 *  ======== DriverAdapter_Instance_init ========
 */
Void Generator_Instance_init(Generator_Object *obj, 
    const Generator_Params *params)
{
    Int i;
    Generator_ChanObj *chan;
    
    for (i = 0; i < Generator_NUMCHANS; i++) {
        chan = &obj->chans[i];
               
        List_elemClear(&chan->elem);
        chan->inUse = FALSE;
        chan->pendList = List_create(NULL, NULL);
    }
}
/*
 *  @(#) ti.sdo.io.drivers; 1, 0, 0, 0,; 11-7-2012 13:08:22; /db/vtree/library/trees/ipc/ipc-i09/src/ xlibrary

 */

