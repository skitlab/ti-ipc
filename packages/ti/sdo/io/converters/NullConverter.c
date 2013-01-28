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
 *  ======== NullConverter.c ========
 */

#include <xdc/std.h>

#include <xdc/runtime/Error.h>
#include <ti/sdo/utils/List.h>
#include <ti/sdo/io/IConverter.h>
#include <ti/sdo/io/IDriver.h>
#include <ti/sdo/io/DriverTypes.h>

#include "package/internal/NullConverter.xdc.h"

/*
 *************************************************************************
 *                       Instance functions
 *************************************************************************
 */

/*
 *  ======== NullConverter_Instance_init ========
 */
Void NullConverter_Instance_init(NullConverter_Object *obj, 
    const NullConverter_Params *params)
{
    List_Handle packetList;

    packetList = NullConverter_Instance_State_packetList(obj);

    List_construct(List_struct(packetList), NULL);
}

/*
 *  ======== NullConverter_open ========
 */
Void NullConverter_open(NullConverter_Object *obj, String name, UInt mode, 
    UArg chanParams, IConverter_DoneFxn cbFxn, UArg cbArg, Error_Block *eb)
{
    obj->mode = mode;
    obj->cbFxn = cbFxn;
    obj->cbArg = cbArg;
}
    
/*
 *  ======== NullConverter_close ========
 */
Void NullConverter_close(NullConverter_Object *obj, Error_Block *eb)
{
    obj->cbFxn = NULL;
    obj->cbArg = NULL;
}
    
/*
 *  ======== NullConverter_control ========
 */
Void NullConverter_control(NullConverter_Object *obj, 
    DriverTypes_ControlCmd cmd, UArg cmdArgs, Error_Block *eb)
{
    return;
}

/*
 *  ======== NullConverter_issue ========
 */
Void NullConverter_issue(NullConverter_Object *obj, DriverTypes_Packet *packet, 
    Error_Block *eb)
{
    List_put(NullConverter_Instance_State_packetList(obj), 
                (List_Elem *)packet);
    obj->cbFxn(obj->cbArg);
}

/*
 *  ======== NullConverter_reclaim ========
 */
Void NullConverter_reclaim(NullConverter_Object *obj, 
    DriverTypes_Packet **packet, Error_Block *eb)
{
    *packet = List_get(NullConverter_Instance_State_packetList(obj));
}

/*
 *  ======== NullConverter_query ========
 */
Bool NullConverter_query(NullConverter_Object *obj, Int qual)
{    
    return (TRUE);
}
/*
 *  @(#) ti.sdo.io.converters; 1, 0, 0, 0,; 11-7-2012 13:08:13; /db/vtree/library/trees/ipc/ipc-i09/src/ xlibrary

 */

