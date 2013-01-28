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
 *  ======== IomAdapterAdapter.c ========
 */

#include <xdc/std.h>
#include <xdc/runtime/Error.h>
#include <xdc/runtime/Memory.h>
#include <xdc/runtime/Startup.h>
#include <xdc/runtime/Assert.h>

#include <ti/sdo/utils/List.h> 
#include <ti/sdo/io/DriverTypes.h> 

#ifndef xdc__ARG__
typedef xdc_UArg        Arg;    /* iom.h uses 'Arg' type from old std.h */
#endif

#include <ti/bios/include/iom.h>

#include "package/internal/IomAdapter.xdc.h"

/*
 *************************************************************************
 *                      Module functions
 *************************************************************************
 */
/*
 *  ======== IomAdapter_Module_startup ========
 */
Int IomAdapter_Module_startup( Int phase )
{
    Int i;

    for (i = 0; i < IomAdapter_Object_count(); i++) {
        IomAdapter_postInit(IomAdapter_Object_get(NULL, i));
    }

    return (Startup_DONE);
}

/*
 *  ======== driverCallback ========
 */
Void IomAdapter_driverCallback(Ptr cbArg, DriverTypes_Packet *packet)
{
    IomAdapter_ChanObj *chan = (IomAdapter_ChanObj *)cbArg;

    if (packet->status < 0) {
        packet->error = IomAdapter_mapStatus(packet->status);
    }
    else {
        packet->error = NULL;
    }
    
    chan->cbFxn(chan->cbArg, packet);
}

/*
 *************************************************************************
 *                      Instance functions
 *************************************************************************
 */

/*
 *  ======== IomAdapter_Instance_init ========
 */
Void IomAdapter_Instance_init(IomAdapter_Object *obj, 
    const IomAdapter_Params *params)
{    
    obj->deviceId = params->deviceId;     
    obj->deviceParams = params->deviceParams;    
    obj->iomFxns = params->iomFxns; 
    obj->initFxn = params->initFxn; 

    IomAdapter_postInit(obj);
}

/*
 *  ======== IomAdapter_postInit ========
 */
Void IomAdapter_postInit(IomAdapter_Object *obj)
{
    if (obj->initFxn) {
        (obj->initFxn()); 
    }

    if (((IOM_Fxns *)(obj->iomFxns))->mdBindDev) {
        ((IOM_Fxns *)(obj->iomFxns))->mdBindDev(&obj->deviceHandle, 
        obj->deviceId, 
        obj->deviceParams);
    }
}

/*
 *  ======== IomAdapter_Instance_finalize ========
 */
Void IomAdapter_Instance_finalize(IomAdapter_Object *obj)
{
    if (((IOM_Fxns *)(obj->iomFxns))->mdUnBindDev) {
        ((IOM_Fxns *)(obj->iomFxns))->mdUnBindDev(&obj->deviceHandle);
    }
}

/*
 *  ======== control ========
 */
Void IomAdapter_control(IomAdapter_Object *obj, Ptr chanHandle, 
    DriverTypes_ControlCmd cmd, UArg args, Error_Block *eb)
{
    IomAdapter_ChanObj *chan = (IomAdapter_ChanObj *)chanHandle;
    Int status = 0;
    Error_Id id = NULL;

    if (cmd == DriverTypes_CHAN_ABORT) {
        chan->abortPkt.cmd = IOM_ABORT;
        chan->abortPkt.addr = 0;
        chan->abortPkt.origSize = 0;
        
        if (((IOM_Fxns *)(obj->iomFxns))->mdSubmitChan) {
            status = ((IOM_Fxns *)(obj->iomFxns))->mdSubmitChan(
                chan->iomChanHdl, (IOM_Packet *)&chan->abortPkt);
        }

        Assert_isTrue(status != IOM_PENDING, NULL);
    }
    else {
        if (((IOM_Fxns *)(obj->iomFxns))->mdControlChan) {
            status = ((IOM_Fxns *)(obj->iomFxns))->mdControlChan(
                chan->iomChanHdl, cmd, (Ptr)args);
        }
    }
            
    if (status < 0) {
        id = IomAdapter_mapStatus(status);
        Error_raise(eb, id, 0, 0);
    }    
}

/*
 *  ======== open ========
 */
Ptr IomAdapter_open(IomAdapter_Object *obj, String name, UInt mode, 
    UArg chanParams, DriverTypes_DoneFxn cbFxn, UArg cbArg, Error_Block *eb)
{
    IomAdapter_ChanObj *chan;
    Int status = 0;
    Error_Id id = NULL;
    
    chan = Memory_alloc(IomAdapter_Object_heap(), sizeof(IomAdapter_ChanObj), 
        0, eb);

    if (chan == NULL) {
        return (NULL);
    }

    chan->cbFxn = cbFxn;
    chan->cbArg = cbArg;

    /* IOM_INPUT = 1 vs DriverTypes_INPUT = 0 */
    if (((IOM_Fxns *)(obj->iomFxns))->mdCreateChan) {
        status = ((IOM_Fxns *)(obj->iomFxns))->mdCreateChan(&chan->iomChanHdl, 
            obj->deviceHandle, name, (mode + 1), (Ptr)chanParams, 
            (IOM_TiomCallback)IomAdapter_driverCallback, chan); 
    }


    if (status < 0) {
        id = IomAdapter_mapStatus(status);
        Error_raise (eb, id, 0, 0);
        
        return (NULL);
    }
    else {
        return (chan);
    }
}

/*
 *  ======== close ========
 */
Void IomAdapter_close(IomAdapter_Object *obj, Ptr chanHandle, Error_Block *eb)
{
    IomAdapter_ChanObj *chan = (IomAdapter_ChanObj *)chanHandle;
    Int status = 0;
    Error_Id id = NULL;
    
    if (((IOM_Fxns *)(obj->iomFxns))->mdDeleteChan) {
        status = ((IOM_Fxns *)(obj->iomFxns))->mdDeleteChan(chan->iomChanHdl);
    }
   
    if (status < 0) {
        id = IomAdapter_mapStatus(status);
        Error_raise(eb, id, 0, 0);
    }
    else {
        Memory_free(NULL, chan, sizeof(IomAdapter_ChanObj));
    }
    
}

/*
 *  ======== submit ========
 */
UInt IomAdapter_submit(IomAdapter_Object *obj, Ptr chanHandle, 
    DriverTypes_Packet *packet, Error_Block *eb)
{
    IomAdapter_ChanObj *chan = (IomAdapter_ChanObj *)chanHandle;
    Int status = 0;
    Error_Id id = NULL;

    if (packet->cmd == DriverTypes_READ) {
        packet->cmd = IOM_READ;
    }
    else if (packet->cmd == DriverTypes_WRITE) {
        packet->cmd = IOM_WRITE;
    }
        
    if (((IOM_Fxns *)(obj->iomFxns))->mdSubmitChan) {
        Assert_isTrue((sizeof(IOM_Packet) == sizeof(DriverTypes_Packet)), NULL);

        status = ((IOM_Fxns *)(obj->iomFxns))->mdSubmitChan(chan->iomChanHdl, 
            (IOM_Packet *)packet);
    }

    if (status == IOM_PENDING) {
        return (DriverTypes_PENDING);
    }

    if (status == IOM_COMPLETED) {
        return (DriverTypes_COMPLETED);
    }
    if (status < 0) {
        id = IomAdapter_mapStatus(packet->status);
        Error_raise(eb, id, 0, 0);
        return (DriverTypes_ERROR);
    }
    else {
        return (DriverTypes_COMPLETED);
    }
}
    
/*
 *  ======== IomAdapter_mapStatus ========
 */
Error_Id IomAdapter_mapStatus(Int status)
{ 
    switch (status) {
        case IOM_EBADIO:
            return (DriverTypes_EBADIO);
        case IOM_ETIMEOUT:
            return (DriverTypes_EBADIO);
        case IOM_ENOPACKETS:
            return (DriverTypes_EBADIO);
        case IOM_EFREE:
            return (DriverTypes_EBADIO);
        case IOM_EALLOC:
            return (DriverTypes_EBADIO);
        case IOM_EABORT:
            return (DriverTypes_EBADIO);
        case IOM_EBADMODE:
            return (DriverTypes_EBADMODE);
        case IOM_EOF:
            return (DriverTypes_EBADIO);
        case IOM_ENOTIMPL:
            return (DriverTypes_ENOTIMPL);
        case IOM_EBADARGS:
            return (DriverTypes_EBADARGS);
        case IOM_ETIMEOUTUNREC:
            return (DriverTypes_EBADIO);
        case IOM_EINUSE:
            return (DriverTypes_EINUSE);
        default:
            return (DriverTypes_EBADIO);
    }
}

/*
 */
/*
 *  @(#) ti.sdo.io.drivers; 1, 0, 0, 0,; 11-7-2012 13:08:22; /db/vtree/library/trees/ipc/ipc-i09/src/ xlibrary

 */

