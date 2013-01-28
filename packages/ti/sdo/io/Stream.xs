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
 * ======== Stream.xs ========
 *
 */

var List = null;
var DriverTypes = null;
var DriverAdapter = null;
var DriverTable = null;
var Memory = null;
var SyncNull = null;
var Stream = null;
var NameServer = null;
var Sync = null;
var SyncSemThread = null;

/*
 * ======== module$use ========
 */
function module$use()
{
    Stream = this;
    Memory = xdc.useModule('xdc.runtime.Memory');
    List = xdc.useModule('ti.sdo.utils.List');
    DriverTypes = xdc.useModule('ti.sdo.io.DriverTypes');
    DriverTable = xdc.useModule('ti.sdo.io.DriverTable');
    DriverAdapter = xdc.useModule('ti.sdo.io.converters.DriverAdapter');
    NameServer = xdc.useModule("ti.sdo.utils.NameServer");
    SyncSemThread = xdc.useModule("xdc.runtime.knl.SyncSemThread");
    Sync = xdc.useModule("xdc.runtime.knl.Sync");
}

/*
 * ======== module$static$init ========
 */
function module$static$init(mod, params)
{
    var nameSrvPrms = new NameServer.Params();
    nameSrvPrms.maxRuntimeEntries = params.maxRuntimeEntries;
    nameSrvPrms.tableSection = params.tableSection;
    
    mod.convTable = NameServer.create("Stream:ConverterTable", nameSrvPrms);
    
    for (var i=0; i < this.staticEntries.length; i++)
    {
       var entry = this.staticEntries[i];
       mod.convTable.addUInt32Meta(entry.name, entry.handle);
    }
}

/*
 *  ======== addMeta ========
 */
function addMeta(name, handle)
{
    Stream = this;
    
    var entry = new Stream.Entry();
    entry.name = name;
    entry.handle = handle;
    this.staticEntries.$add(entry);
}

/*
 * ======== instance$static$init ========
 */
function instance$static$init(obj, name, mode, params)
{
    obj.name = name;
    obj.chanParams = params.chanParams;
    obj.drvAdapHdl = false;
    obj.maxIssues = params.maxIssues;
    obj.issued = 0;
    obj.ready = 0;
    obj.mode = mode;
    obj.packetHeap = params.packetHeap;

    if (!params.sync) {
        obj.complete = SyncSemThread.create();
        obj.userSync = false; 
    }
    else {
        obj.complete = params.sync;
        obj.userSync = true;
    }

    obj.convHandle = null;
    
    List.construct(obj.freeList);
    
    obj.packets.length = params.maxIssues;

    Memory.staticPlace(obj.packets, 0, params.packetSection);
}

/*
 *  ======== viewInitBasic ========
 *  Initialize the 'Basic' Stream instance view.
 */
function viewInitBasic(view, obj)
{    
    var DriverTypes = xdc.useModule('ti.sdo.io.DriverTypes');
    var Stream = xdc.useModule('ti.sdo.io.Stream');
    var Program = xdc.useModule('xdc.rov.Program');
       
    view.label = Program.getShortName(obj.$label);
    view.maxIssues = obj.maxIssues;
    view.issued = obj.issued;
    view.ready = obj.ready;

    if (obj.mode == DriverTypes.INPUT) {
        view.mode = "INPUT";
    }
    else {
        view.mode = "OUTPUT";
    }

    view.userSuppliedSync = obj.userSync;
}

/*
 *  @(#) ti.sdo.io; 1, 0, 0, 0,; 11-7-2012 13:08:01; /db/vtree/library/trees/ipc/ipc-i09/src/ xlibrary

 */

