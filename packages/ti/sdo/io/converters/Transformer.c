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
 *  ======== Transformer.c ========
 */

#include <xdc/std.h>
#include <xdc/runtime/Error.h>

#include <ti/sdo/io/IConverter.h>
#include <ti/sdo/io/IDriver.h>
#include <ti/sdo/io/DriverTypes.h>
#include <ti/sdo/io/DriverTable.h>
#include <ti/sdo/io/Stream.h>
#include <ti/sdo/io/converters/DriverAdapter.h>

#include "package/internal/Transformer.xdc.h"

/*
 *************************************************************************
 *                      Module functions
 *************************************************************************
 */

/*
 *  ======== Transformer_callback ========
 */
Void Transformer_callback(UArg cbArg)
{
    Transformer_Object *obj = (Transformer_Object *)cbArg;

    /* callback into top layer */
    obj->cbFxn(obj->cbArg);
}

/*
 *************************************************************************
 *                       Instance functions
 *************************************************************************
 */

/*
 *  ======== Transformer_Instance_init ========
 */
Void Transformer_Instance_init(Transformer_Object *obj, 
    const Transformer_Params *params)
{ 
    obj->fxn = params->fxn;
    obj->arg = params->arg;
}

/*
 *  ======== Transformer_open ========
 */
Void Transformer_open(Transformer_Object *obj, String name, UInt mode, 
    UArg chanParams, IConverter_DoneFxn cbFxn, UArg cbArg, Error_Block *eb)
{
    Int                     len;
    IDriver_Handle          drvHandle;
    DriverAdapter_Params    adapPrms;
    Error_Block             localeb;
        
    obj->mode = mode;
    obj->cbFxn = cbFxn;
    obj->cbArg = cbArg;

    Error_init(&localeb);
    len = Stream_match(name, &obj->convHandle, &localeb);
    
    if (obj->convHandle == NULL) {
        /* Look in DriverTable */
        len = DriverTable_match(name, &drvHandle, eb);
        if (len == 0) {
            /* The name was not found */
            Error_raise(eb, Stream_E_notFound, name, 0);
            return;
        }
        else {
            DriverAdapter_Params_init(&adapPrms);
            adapPrms.driverHandle = drvHandle;
            obj->convHandle = DriverAdapter_Handle_upCast(
                                DriverAdapter_create(&adapPrms, eb));
            if (obj->convHandle == NULL) {
                return;
            }
            obj->drvAdapHdl = TRUE;
        }
    }
    else {
        obj->drvAdapHdl = FALSE;
    }
    
    // depending on mode Transformer hooks in its own callback or bypasses */
    if ((cbFxn) && (obj->mode == DriverTypes_INPUT)) {
        IConverter_open(obj->convHandle, (name + len), mode, chanParams, 
            Transformer_callback, (UArg) obj, eb);
    }
    else {
        IConverter_open(obj->convHandle, (name + len), mode, chanParams, 
            cbFxn, cbArg, eb);
    }

    return;
}
    
/*
 *  ======== Transformer_close ========
 */
Void Transformer_close(Transformer_Object *obj, Error_Block *eb)
{
    IConverter_close(obj->convHandle, eb);
    
    if (obj->drvAdapHdl) {
        IConverter_delete(&obj->convHandle);
    }
}

/*
 *  ======== Transformer_control ========
 */
Void Transformer_control(Transformer_Object *obj, DriverTypes_ControlCmd cmd, 
    UArg cmdArgs, Error_Block *eb)
{
    IConverter_control(obj->convHandle, cmd, cmdArgs, eb);
}

/*
 *  ======== Transformer_issue ========
 */
Void Transformer_issue(Transformer_Object *obj, DriverTypes_Packet *packet, 
    Error_Block *eb)
{
    if (obj->mode == DriverTypes_OUTPUT) {
        obj->fxn(packet->addr, packet->origSize, obj->arg);
    }
    
    IConverter_issue(obj->convHandle, packet, eb);
}

/*
 *  ======== Transformer_reclaim ========
 */
Void Transformer_reclaim(Transformer_Object *obj, DriverTypes_Packet **packet, 
    Error_Block *eb)
{
    IConverter_reclaim(obj->convHandle, packet, eb);
    
    if (*(packet) == NULL) {
        return;
    }
    
    if (obj->mode == DriverTypes_INPUT && 
        (*(packet))->error == NULL) {
        obj->fxn ((*(packet))->addr, (*(packet))->origSize, obj->arg);
    }
}

/*
 *  ======== Transformer_multiply ========
 *
 *  This transformation simply scales the data by an amount
 *  specified when the device was opened.
 *
 *  *addr = *addr * scale
 */
Void Transformer_multiply( Ptr addr, SizeT size, UArg arg)
{
    SizeT i;
    UInt  scale;
    UInt *data = (UInt *)addr;

    if (arg) {
        scale = (UInt)arg;
    }
    else {
        scale = 1;
    }

    for (i = (size / sizeof(UInt)); i > 0; i--, data++) {
        *data = *data * scale;
    }
}

/*
 *  ======== Transformer_fix2flt ========
 *
 *  This transformation converts integer data to floating point data.
 *
 *  *addr = (Float)(*addr
 */
Void Transformer_fix2flt(Ptr addr, SizeT size, UArg arg)
{
    SizeT       i;              
    Int        *iptr;
    Float      *fptr;
    
    fptr = (Float *)addr;
    iptr = (Int *)addr;

    for (i = (size / sizeof(Float)); i > 0; i--) {
        *fptr++ = ((Float)*iptr++);
    }
}


/*
 *  ======== Transformer_flt2fix ========
 *
 *  This transformation converts floating point data to integer data.
 *
 *  *addr = (Int)(*addr
 */
Void Transformer_flt2fix(Ptr addr, SizeT size, UArg arg)
{
    SizeT     i;
    Int        *iptr;
    Float      *fptr;

    fptr = (Float *)addr;
    iptr = (Int *)addr;

    for (i = (size / sizeof(Float)); i > 0; i--) {
        *iptr++ = (Int)(*fptr++);
    }
}

/*
 *  ======== Transformer_query ========
 */
Bool Transformer_query(Transformer_Object *obj, Int qual)
{    
    return (FALSE);
}
/*
 *  @(#) ti.sdo.io.converters; 1, 0, 0, 0,; 11-7-2012 13:08:13; /db/vtree/library/trees/ipc/ipc-i09/src/ xlibrary

 */

