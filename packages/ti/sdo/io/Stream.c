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
 *  ======== Stream.c ========
 */

#include <string.h>
#include <stdlib.h>

#include <xdc/std.h>
#include <xdc/runtime/Memory.h>
#include <xdc/runtime/Error.h>
#include <xdc/runtime/Log.h>
#include <xdc/runtime/Assert.h>
#include <xdc/runtime/Startup.h>

#include <ti/ipc/NameServer.h>
#include <ti/sdo/utils/List.h>

#include <xdc/runtime/knl/ISync.h>
#include <xdc/runtime/knl/Sync.h>
#include <xdc/runtime/knl/SyncSemThread.h>

#include <ti/sdo/io/IConverter.h>
#include <ti/sdo/io/IDriver.h>
#include <ti/sdo/io/DriverTypes.h>
#include <ti/sdo/io/DriverTable.h>

#include <ti/sdo/io/converters/DriverAdapter.h>

#include <ti/sysbios/hal/Hwi.h>

#include "package/internal/Stream.xdc.h"


/*
 *************************************************************************
 *                      Module functions
 *************************************************************************
 */

/*
 *  ======== Stream_add ========
 */
Void Stream_add(String name, IConverter_Handle handle, Error_Block *eb)
{
    NameServer_addUInt32((NameServer_Handle)Stream_module->convTable, name,
                         (UInt32)handle); 
}
    
/*
 *  ======== Stream_internalCallback ========
 *  This function is called by the underlying IConverter when IO completes.
 */
Void Stream_internalCallback(UArg cbArg)
{
    Stream_Handle obj = (Stream_Handle)cbArg;
    
    /*
     * Increment of ready not atomic because the callback is in the
     * context of an ISR and reclaim cannot preempt. reclaim can only be called
     * within the context the the same isr or by a single swi or task.
     */

    obj->ready++;

    Sync_signal(obj->complete);
}

/*
 *  ======== Stream_completedLog ========
 */
Void Stream_completedLog(UArg buf, UArg size, UArg arg)
{
    Log_write3(DriverTypes_LM_ioComplete, buf, size, arg);
}
/*
 *  ======== Stream_Module_startup ========
 */
Int Stream_Module_startup( Int phase )
{
    Int i;
    
    for (i = 0; i < Stream_Object_count(); i++) {
        Stream_postInit(Stream_Object_get(NULL, i), NULL);
    }

    return Startup_DONE;
}

/*
 *  ======== Stream_match ========    
 *  This is an internal function, If a match is found in in the Stream 
 *  IConverter table, it returns the rest of name and the entry. If a match 
 *  is not found, it returns the name and a null entry. This allows 
 *  Stream_createStack to look for name in the DriverTable.
 *
 */
Int Stream_match(String name, IConverter_Handle *handle, Error_Block *eb)
{
    return (NameServer_match((NameServer_Handle)Stream_module->convTable, name, 
        (UInt32 *)handle));
}

/*
 *  ======== Stream_remove ========
 */
Void Stream_remove(String name, Error_Block *eb)
{
     NameServer_remove((NameServer_Handle)Stream_module->convTable, name);
}

/*
 *************************************************************************
 *                       Instance functions
 *************************************************************************
 */

/*
 *  ======== Stream_abort ========
 */
UInt Stream_abort(Stream_Object *obj, Error_Block *eb)
{
    UInt cmdArg;
    
    if (!obj->issued) {
        return (0);
    }

    IConverter_control(obj->convHandle, DriverTypes_CHAN_ABORT, 
        (UArg)&cmdArg, eb);
    
    return (cmdArg);
}

/*
 *  ======== Stream_control ========
 */
Void Stream_control(Stream_Object *obj, DriverTypes_ControlCmd cmd, 
    UArg cmdArgs, Error_Block *eb)
{
    IConverter_control(obj->convHandle, cmd, cmdArgs, eb);
}

/*
 *  ======== Stream_Instance_init ========
 */
Int Stream_Instance_init(Stream_Object *obj, String name, UInt mode, 
    const Stream_Params *params, Error_Block *eb)
{
    List_Handle     freeList;
    
    obj->name = name;
    obj->chanParams = params->chanParams;
    obj->maxIssues = params->maxIssues;
    obj->ready = 0;
    obj->issued = 0;
    obj->mode = mode;
    obj->packetHeap = params->packetHeap;

    if (params->sync == NULL) {       
        obj->complete = 
            SyncSemThread_Handle_upCast(SyncSemThread_create(NULL, eb));
        obj->userSync = FALSE;
        if (obj->complete == NULL) {
            return (1);
        }
    }
    else {
        obj->complete = params->sync;
        obj->userSync = TRUE;
    }

    freeList = Stream_Instance_State_freeList(obj);
    List_construct(List_struct(freeList), NULL);
    
    /* allocate packets */
    obj->packets = Memory_alloc(obj->packetHeap, 
        sizeof(DriverTypes_Packet) * (obj->maxIssues), 0, eb);

    if (obj->packets == NULL) {
        return (2);
    }
   
    return (Stream_postInit(obj, eb));
}

/*
 *  ======== Stream_Instance_finalize ========
 */
Void Stream_Instance_finalize(Stream_Object *obj, Int status)
{    
    List_Handle freeList;
    SyncSemThread_Handle tempSyncHdl;

    Assert_isTrue((obj->issued == 0), Stream_A_pendingReclaims);

    /* fall through in switch below is intentional */
    switch (status) {
        /* Stream_delete() */
        case 0:        
            IConverter_close(obj->convHandle, NULL);
                
        /* IConverter_open failed */
        case 5:
           if (obj->drvAdapHdl == TRUE) {
               IConverter_delete(&obj->convHandle);
           }
               
        /* DriverAdapter create failed */
        case 4:
        
        /* name not found */
        case 3:
            Memory_free(obj->packetHeap, obj->packets, 
            sizeof(DriverTypes_Packet) * obj->maxIssues);
        
        /* alloc packets failed */
        case 2:
            
            freeList = Stream_Instance_State_freeList(obj);
            List_destruct(List_struct(freeList));
            
            if (obj->userSync == FALSE) {
                tempSyncHdl = SyncSemThread_Handle_downCast(obj->complete);
                SyncSemThread_delete(&tempSyncHdl);
            }

        /* Sync_create failed */
        case 1:

        default:
            break;
    };

}

/*
 *  ======== Stream_issue ========
 */
Void Stream_issue(Stream_Object *obj, Ptr buf, SizeT nmadus, UArg arg, 
    Error_Block *eb)
{
    if (obj->mode == DriverTypes_INPUT) {
        Stream_issueX(obj, buf, nmadus, arg, DriverTypes_READ, eb);
    }
    else {
        Stream_issueX(obj, buf, nmadus, arg, DriverTypes_WRITE, eb);
    }
    
}


/*
 *  ======== Stream_issueX ========
 */
Void Stream_issueX(Stream_Object *obj, Ptr buf, SizeT nmadus, UArg arg, 
    DriverTypes_PacketCmd cmd, Error_Block *eb)
{
    List_Handle freeList;
    DriverTypes_Packet  *packet;

    freeList = Stream_Instance_State_freeList(obj);

    packet = List_get(freeList);
    if (packet == NULL) {
        Error_raise(eb, Stream_E_noPackets, obj->maxIssues, 0);
        return;
    }

    packet->cmd = cmd;
    
    packet->origSize = nmadus;
    /* Next line will help when drivers don't update size; */
    packet->size = nmadus;
    packet->addr = buf;

    packet->arg = arg;
    
    packet->misc = (UArg)obj;
    
    packet->error = NULL;

    /*
     * Only one task uses a Stream instance. Also only issue and reclaim
     * manipulate obj->issued hence no gate
     */
    obj->issued++;

    Log_write3(DriverTypes_LM_startIO, (UArg)buf, (UArg)nmadus, (UArg)arg);
    
    /* call down into mini-driver */
    IConverter_issue(obj->convHandle, packet, eb);

}

/*
 *  ======== Stream_prime ========
 */
Void Stream_prime(Stream_Object *obj, Ptr buf, UArg arg, Error_Block *eb)
{
    List_Handle freeList;
    DriverTypes_Packet  *packet;

    /* only output mode */
    Assert_isTrue((obj->mode != DriverTypes_INPUT), Stream_A_badMode);

    freeList = Stream_Instance_State_freeList(obj);

    packet = List_get(freeList);
    if (packet == NULL) {
        Error_raise(eb, Stream_E_noPackets, obj->maxIssues, 0);
        return;
    }

    packet->cmd = DriverTypes_WRITE;
    
    packet->origSize = 0;
    /* Next line will help when drivers don't update size; */
    packet->size = 0;
    packet->addr = buf;

    packet->arg = arg;
    
    packet->misc = (UArg)obj;
    
    packet->error = NULL;

    /*
     * Only one task uses a Stream instance. Also only issue and reclaim
     * manipulate obj->issued hence no gate
     */
    obj->issued++;

    Log_write3(DriverTypes_LM_startIO, (UArg)buf, (UArg)0, (UArg)arg);
   
    /* pretend driver called back into DriverAdapter */
    Assert_isTrue(obj->drvAdapHdl, NULL);

    DriverAdapter_callback((UArg)obj->convHandle, packet);
}

/*
 *  ======== Stream_postInit ========
 */
Int Stream_postInit(Stream_Object *obj, Error_Block *eb)
{
    List_Handle             freeList;
    UInt                    i, len;
    IDriver_Handle          drvHandle;
    DriverAdapter_Params    adapPrms;
    
    freeList = Stream_Instance_State_freeList(obj);
    /* 
     * Split the buffer into packets and add to freeList
     */
    for (i = 0; i < obj->maxIssues; i++) {
        List_put(freeList, (List_Elem *)&obj->packets[i]);
    }
    
    len = Stream_match(obj->name, &obj->convHandle, eb);    
        
    if (len == 0) {
        /* Look in DriverTable */
        obj->drvAdapHdl = TRUE;
        
        len = DriverTable_match(obj->name, &drvHandle, eb);
        if (len == 0) {
            /* The name was not found */
            Error_raise(eb, Stream_E_notFound, obj->name, 0);
            return (3);
        }
        else {
            DriverAdapter_Params_init(&adapPrms);
            adapPrms.driverHandle = drvHandle;
            obj->convHandle = DriverAdapter_Handle_upCast(
                DriverAdapter_create(&adapPrms, eb));
            if (obj->convHandle == NULL) {
                return (4);
            }
        }
    }
    else {
        obj->drvAdapHdl = FALSE;
    }
      
    IConverter_open(obj->convHandle, ((obj->name) + len), obj->mode, 
        obj->chanParams, Stream_internalCallback, (UArg)obj, eb); 
    
    if (Error_check(eb)) {
        return (5);
    }
    
    return (0);
}

/*
 *  ======== Stream_reclaim ========
 */
SizeT Stream_reclaim(Stream_Object *obj, Ptr *bufp, UInt timeout, UArg *arg, 
    Error_Block *eb)
{
    DriverTypes_Packet  *packet = NULL;
    List_Handle         freeList;
    UInt                key;
    
    if (obj->issued == 0) {
        Error_raise(eb, Stream_E_noBuffersIssued, 0, 0);
        return (0);
    }

    while (obj->ready == 0) {
        if (!Sync_wait(obj->complete, timeout, eb)) {
            if (timeout != 0) {
                Error_raise(eb, Stream_E_timeout, timeout, 0);
            }
            return (0);
        }
    };
    IConverter_reclaim(obj->convHandle, &packet, eb);

    if (arg != NULL) {
        *arg = packet->arg;
    }

    /* bufp is NULL in Stream_read and Stream_write. */
    if (bufp != NULL) {
        *bufp = packet->addr;
    }

    key = Hwi_disable();
    obj->ready--;
    Hwi_restore(key);

    obj->issued--;

    /* 
     * re-signal if more buffers are ready
     * This is required in the case of ISyncEvent and ISyncSwi to allow 
     * clients to reclaim a single buffer and not force them to bleed the 
     * Stream. In the case of ISyncSem , this re-signal is an overhead
     */

    if (obj->ready > 0) {
        Sync_signal(obj->complete);
    }

    freeList = Stream_Instance_State_freeList(obj);

    /* recycle packet back onto free list */
    List_put(freeList, (List_Elem *)packet);

    if ((packet->error != NULL) &&
        (packet->error != DriverTypes_EABORTED)) {
        Error_raise(eb, packet->error, packet->status, 0);
        return (0);
    }
    else {
        return (packet->size);
    }
}

/*
 *  ======== Stream_read ========
 */
SizeT Stream_read(Stream_Object *obj, Ptr buf, SizeT nmadus, UInt timeout, 
    Error_Block *eb)
{
    Assert_isTrue((obj->mode != DriverTypes_OUTPUT), Stream_A_badMode);

    return (Stream_submit(obj, buf, nmadus, DriverTypes_READ, timeout, eb));
}

/*
 *  ======== Stream_write ========
 */
SizeT Stream_write(Stream_Object *obj, Ptr buf, SizeT nmadus, UInt timeout, 
    Error_Block *eb)
{
    Assert_isTrue((obj->mode != DriverTypes_INPUT), Stream_A_badMode);

    return (Stream_submit(obj, buf, nmadus, DriverTypes_WRITE, timeout, eb));
}

/*
 *  ======== Stream_write ========
 */
SizeT Stream_submit(Stream_Object *obj, Ptr buf, SizeT nmadus, 
    DriverTypes_PacketCmd cmd, UInt timeout, Error_Block *eb)
{
    SizeT size;
    
    Assert_isTrue((obj->issued == 0), Stream_A_pendingReclaims);
    Assert_isTrue(Sync_query(obj->complete, ISync_Q_BLOCKING), 
        Stream_A_syncNonBlocking);

    Stream_issueX(obj, buf, nmadus, NULL, cmd, eb);

    if (Error_check(eb)) {
        return (0);
    }

    size = Stream_reclaim(obj, NULL, timeout, NULL, eb);
    
    if (Error_check(eb)) {
        if (Error_getId(eb) == Stream_E_timeout) {
            Stream_abort(obj, eb);
            size = Stream_reclaim(obj, NULL, timeout, NULL, eb);
        }
    }

    return (size);
}

/*
 */
/*
 *  @(#) ti.sdo.io; 1, 0, 0, 0,; 11-7-2012 13:08:01; /db/vtree/library/trees/ipc/ipc-i09/src/ xlibrary

 */

