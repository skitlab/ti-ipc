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
 *  ======== Generator.xs ========
 *
 */
 
var Generator = null;
var List = null;
var IDriver = null;
var DriverTypes = null;

/*
 *  ======== module$use ========
 */
function module$use()
{
    Generator = this;
    List = xdc.useModule("ti.sdo.utils.List");
    IDriver = xdc.module("ti.sdo.io.IDriver");
    DriverTypes = xdc.useModule("ti.sdo.io.DriverTypes");
}

/*
 *  ======== module$static$init ========
 */
function module$static$init(mod, params)
{
    List.construct(mod.chanList);
}

/*
 *  ======== instance$static$init ========
 */
function instance$static$init(obj, params)
{
    for (var j=0; j<Generator.NUMCHANS; j++) {
        var chan = obj.chans[j];

        List.elemClearMeta(chan.elem);
        chan.inUse = false;
        chan.pendList = List.create();
        chan.cbFxn = null;
        chan.cbArg = null;
        chan.userFxn = null;
        chan.userArg = null;
        chan.returnPending = false;
    }
}

/*
 *  ======== viewInitBasic ========
 *  ROV code
 */
function viewInitBasic(view, obj)
{
    view.label = Program.getShortName(obj.$label);
}

function viewInitData(view, obj)
{
    var Program = xdc.useModule('xdc.rov.Program');
    var Generator = xdc.useModule('ti.sdo.io.drivers.Generator');
    
    /* Fetch the array of log entries. */
    print("Fetching chans at 0x"
        + Number(obj.chans.$addr).toString(16));
    try {
        var entries = Program.fetchArray(Generator.ChanObj$fetchDesc,
            obj.chans, Generator.NUMCHANS);
    }
    catch (e) {
        print("Caught exception while fetching Generator chans: "
            + e.toString());
        // TODO: Add error reporting
        throw (e);
    }
    
    view.label = "Channel Objects";
    for (var i = 0; i < Generator.NUMCHANS; i++) {      
        var chan = new Generator.Data_Element_View();
        if (i == 0 ) {
            chan.mode = "INPUT";
        }
        else {
            chan.mode = "OUTPUT";
        }
        chan.inUse = entries[i].inUse;
        chan.returnPending = entries[i].returnPending;
        chan.callbackFxn = Program.lookupAddr(Number(entries[i].cbFxn));
        chan.callbackArg = String(entries[i].cbArg);
        chan.userFxn = Program.lookupAddr(Number(entries[i].userFxn));
        chan.userArg = String(entries[i].userArg);        
        view.elements.$add(chan);
    }
    
    return (view);
}
/*
 *  @(#) ti.sdo.io.drivers; 1, 0, 0, 0,; 11-7-2012 13:08:22; /db/vtree/library/trees/ipc/ipc-i09/src/ xlibrary

 */

