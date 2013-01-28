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
/* ======== DriverAdapter.xs ========
 */

var List = null;
var DriverTypes = null;

/* ======== module$use ========
 */
function module$use()
{
    List = xdc.useModule("ti.sdo.utils.List");
    DriverTypes = xdc.useModule('ti.sdo.io.DriverTypes');
}


/* ======== instance$static$init ========
 */
function instance$static$init (obj, name, mode, chanParams, cbFxn, cbArg, params)
{
    List.construct(obj.fromDriver);
   
    obj.name = name;
    obj.driverHandle = params.driverHandle;
    obj.chan = null;
    obj.chanParams = chanParams;
    obj.mode = mode;
    obj.cbFxn = cbFxn;
    obj.cbArg = cbArg;
}
 
/*
 *  ======== viewInitBasic ========
 *  Initialize the 'Basic' DriverAdapter instance view.
 */
function viewInitBasic(view, obj)
{    
    var DriverAdapter = xdc.useModule('ti.sdo.io.converters.DriverAdapter');
    var DriverTypes = xdc.useModule('ti.sdo.io.DriverTypes');
    var Program = xdc.useModule('xdc.rov.Program');
       
    view.label = Program.getShortName(obj.$label);

    if (obj.name != 0x0) {
        try {
            view.driverName = Program.fetchString(obj.name);
        }
        catch (e) {
            view.$status["driverName"] = "Error: Problem getting driverName " +
                e.toString();
            return;
        }
    }

    view.driverHandle = obj.driverHandle;
    view.channelHandle = obj.chan;
    view.channelParams = Program.lookupDataSymbol(Number(obj.chanParams));
    //view.channelParams = "0x" + obj.chanParams.toString(16);
    
    if (obj.mode == DriverTypes.INPUT) {
        view.mode = "INPUT";
    }
    else {
        view.mode = "OUTPUT";
    }

    view.callbackFxn = Program.lookupFuncName(Number(obj.cbFxn));
    view.callbackArg = obj.cbArg;

    try {
        var readyQView = Program.scanObjectView('ti.sdo.utils.List', 
            obj.fromDriver, 'Basic');
    }
    catch (e) {
        view.$status["readyForReclaim"] = "Error: Problem scanning queue: " + 
            e.toString();
        return;
    }
    
    readyQView.label = (view.label + ".readyForReclaimQ");
    
    print("ready to fetch packets");
    
    for (var i=0; i<readyQView.elems.length; i++) {

        /* Get the element address from the List view. */
        var elemAddr = readyQView.elems[i];
        

        /* Enable after fix for encoded types */
        try {
            var packet = Program.fetchStruct(DriverTypes.Packet$fetchDesc, 
                elemAddr);
        }
        catch (e) {
            view.$status["readyForReclaim"] = "Error: fetching packet 0x" + 
                Number(elemAddr).toString(16) + ": " + e.toString();
            return;
        }
        
        print("ready to decode error");
        print("cmd " + packet.cmd);
        print("error " + packet.error);
        
        var packetStr = "Buffer:" + String(packet.addr);

        var cmd = Program.lookupDataSymbol(packet.cmd);

        if (cmd.length) {
            packetStr += " cmd:" + cmd[0];
        }
        //else {
            //view.$status["readyForReclaim"] = "Error: decoding PacketCmd " + 
            //  "0x" + Number(packet.cmd).toString(16);
            //return;
        //}        
                
        if (packet.error != 0) {
            var error = Program.lookupDataSymbol(packet.error);
            if (error.length) {
                packetStr += " error:" + error[0]; 
            }
            //else {
            //   view.$status["readyForReclaim"] = "Error: decoding Error.Id " + 
            //      Number(packet.error).toString(16);
            //    return;
            //}
        }
             
        view.readyForReclaim.$add(packetStr);
    }

}
/*
 *  @(#) ti.sdo.io.converters; 1, 0, 0, 0,; 11-7-2012 13:08:13; /db/vtree/library/trees/ipc/ipc-i09/src/ xlibrary

 */

