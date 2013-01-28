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
 *  ======== DriverAdapter.c ========
 */

#include <string.h>

#include <xdc/std.h>
#include <xdc/runtime/Error.h>
#include <xdc/runtime/Assert.h>
#include <xdc/runtime/Log.h>
#include <xdc/runtime/Startup.h>
#include <xdc/runtime/Text.h>

#include <ti/sdo/utils/List.h>
#include <ti/sdo/io/IDriver.h>
#include <ti/sdo/io/IConverter.h>
#include <ti/sdo/io/Stream.h>
#include <ti/sdo/io/DriverTypes.h>

#include "package/internal/DriverAdapter.xdc.h"

/*
 *************************************************************************
 *                      Module functions
 *************************************************************************
 */

/*
 *  ======== DriverAdapter_callback ========
 *  This function is called by the driver when I/O completes.
 */
Void DriverAdapter_callback(UArg cbArg, DriverTypes_Packet *packet)
{
    DriverAdapter_Object *obj = (DriverAdapter_Object *)cbArg;
    List_Handle fromDriver;

    Stream_completedLog((UArg)packet->addr, (UArg)packet->size,
        (UArg)packet->arg);
    
    fromDriver = DriverAdapter_Instance_State_fromDriver(obj);
        
    /* put packet in fromDriver queue for collection by reclaim */
    List_put(fromDriver, (List_Elem *)packet);

    /* callback into top layer */
    obj->cbFxn(obj->cbArg);
}

/*
 *************************************************************************
 *                       Instance functions
 *************************************************************************
 */

/*
 *  ======== DriverAdapter_Instance_init ========
 */
Void DriverAdapter_Instance_init(DriverAdapter_Object *obj,
    const DriverAdapter_Params *params)
{
    List_Handle fromDriver;

    fromDriver = DriverAdapter_Instance_State_fromDriver(obj);

    List_construct(List_struct(fromDriver), NULL);
     
    obj->driverHandle = params->driverHandle;
}

/*
 *  ======== DriverAdapter_open ========
 */
Void DriverAdapter_open(DriverAdapter_Object *obj, String name, 
    UInt mode, UArg chanParams, IConverter_DoneFxn cbFxn, UArg cbArg, 
    Error_Block *eb)
{
    obj->mode = mode;
    obj->chanParams = chanParams;
    obj->cbFxn = cbFxn;
    obj->cbArg = cbArg;

    if (strlen(name) == 0) {
        obj->name = NULL;
    }
    else {
        obj->name = name;
    }

    obj->chan = IDriver_open(obj->driverHandle, obj->name, obj->mode, 
        obj->chanParams, DriverAdapter_callback, (UArg)obj, eb);

    if ((obj->chan == NULL) && !Error_check(eb)) {
        Error_raise(eb, DriverAdapter_E_openFail, 0, 0);
    }
}

/*
 *  ======== DriverAdapter_close ========
 */
Void DriverAdapter_close(DriverAdapter_Object *obj, Error_Block *eb)
{
    obj->chanParams = NULL;
    obj->cbFxn = NULL;
    obj->cbArg = NULL;
    obj->name = NULL;
    
    IDriver_close(obj->driverHandle, obj->chan, eb);
}

/*
 *  ======== DriverAdapter_control ========
 */
Void DriverAdapter_control(DriverAdapter_Object *obj, 
    DriverTypes_ControlCmd cmd, UArg cmdArgs, Error_Block *eb)
{
    /* call driver control fxn */
    IDriver_control(obj->driverHandle, obj->chan, cmd, cmdArgs, eb);
}

/*
 *  ======== DriverAdapter_issue ========
 */
Void DriverAdapter_issue(DriverAdapter_Object *obj, DriverTypes_Packet *packet, 
    Error_Block *eb)
{
    UInt status;

    /* call down into driver */
    status = IDriver_submit(obj->driverHandle, obj->chan, packet, eb);

    if (status == DriverTypes_COMPLETED) {
        DriverAdapter_callback((UArg)obj, packet);
    }
}

/*
 *  ======== DriverAdapter_reclaim ========
 */
Void DriverAdapter_reclaim(DriverAdapter_Object *obj, 
    DriverTypes_Packet **packet, Error_Block *eb)
{
    List_Handle fromDriver;

    fromDriver = DriverAdapter_Instance_State_fromDriver(obj);

    /* Should never ever get this assert */
    Assert_isTrue(!List_empty(fromDriver), DriverAdapter_A_noReadyPacket);

    *packet = (DriverTypes_Packet *)List_get(fromDriver);
}

/*
 *  ======== DriverAdapter_query ========
 */
Bool DriverAdapter_query(DriverAdapter_Object *obj, Int qual)
{
    /* Is terminating? FALSE */   
    return (FALSE);
}
/*
 *  @(#) ti.sdo.io.converters; 1, 0, 0, 0,; 11-7-2012 13:08:12; /db/vtree/library/trees/ipc/ipc-i09/src/ xlibrary

 */

