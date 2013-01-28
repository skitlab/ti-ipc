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
 *  ======== DriverTypes.xs ========
 *
 */
 
var DriverTypes = null;

/*
 * ======== module$use ========
 */
function module$use( obj, params )
{
    DriverTypes = this;
}

/*
 * ======== module$static$init ========
 */
function module$static$init( mod, params )
{
    /* for every module in the system ... */
    for (var i = 0; i < xdc.om.$modules.length; i++) {
        var curMod = xdc.om.$modules[i];
        var j = 0;
    
        if (curMod.$used) {
            for each (var prop in curMod) {
                if (prop instanceof this.ControlCmd) {
                    prop.val = curMod.Module__id << 16 | j++;
                }
            }

            //continue incrementing var j
            for each (var prop in curMod) {
                if (prop instanceof this.PacketCmd) {
                    prop.val = curMod.Module__id << 16 | j++;
                }
            }
        }
    }
}

/* 
 * The following functions are required to help xdc query a module to
 * find size and alignment of encoded types and to help initialize encode types
 * in the generated C file. These fucntions will also be used at ROV time.
 */
 
/*
 * ======== ControlCmd$sizeof ========
 */
function ControlCmd$sizeof()
{
    return Program.build.target.stdTypes.t_Int32.size;
}

/*
 * ======== ControlCmd$alignof ========
 */
function ControlCmd$alignof()
{
    return Program.build.target.stdTypes.t_Int32.align;
}

/*
 * ======== ControlCmd$encode ========
 */
function ControlCmd$encode( desc )
{
    return !desc ? "0" 
    : ("((ti_sdo_io_DriverTypes_ControlCmd)" + desc.val + ")");
}

/*
 * ======== PacketCmd$sizeof ========
 */
function PacketCmd$sizeof()
{
    return Program.build.target.stdTypes.t_Int32.size;
}

/*
 * ======== PacketCmd$alignof ========
 */
function PacketCmd$alignof()
{
    return Program.build.target.stdTypes.t_Int32.align;
}

/*
 * ======== PacketCmd$encode ========
 */
function PacketCmd$encode( desc )
{
    return !desc ? "0" 
    : ("((ti_sdo_io_DriverTypes_PacketCmd)" + desc.val + ")");
}


/*
 *  @(#) ti.sdo.io; 1, 0, 0, 0,; 11-7-2012 13:08:01; /db/vtree/library/trees/ipc/ipc-i09/src/ xlibrary

 */

