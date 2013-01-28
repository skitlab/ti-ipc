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
 *  ======== DriverAdapter.xdc ========
 *
 */

import xdc.rov.ViewInfo;

import xdc.runtime.Error;
import xdc.runtime.Assert;
import ti.sdo.io.IConverter;
import ti.sdo.io.DriverTypes;
import ti.sdo.utils.List;

/*!
 *  ======== DriverAdapter ========
 *  @_nodoc
 *  Maps IDriver to IConverter. Stream uses this module if the IO stack
 *  has a terminating IDriver. A instance of this module handles an IDriver
 *  channel.
 */

module DriverAdapter inherits IConverter
{
    /*! 
     *  Error raised when IDriver_open failed
     */
    config Error.Id E_openFail  = {
        msg: "E_openFail: Driver failed to open channel"
    };

    /*!
     *  Assert when DriverAdapter.reclaim() called but no packet is ready
     */
    config Assert.Id A_noReadyPacket  = {
        msg: "A_noReadyPacket:  No packet ready for reclaim"
    };
    
    metaonly struct BasicView {
        String              label;
        String              driverName;
        Ptr                 driverHandle;
        Ptr                 channelHandle;
        String              channelParams;
        String              mode;
        String              callbackFxn[];
        UArg                callbackArg;
        String              readyForReclaim[];
    }
    
    @Facet
    metaonly config ViewInfo.Instance rovViewInfo = 
        ViewInfo.create({
            viewMap: [
                ['Basic', {type: ViewInfo.INSTANCE, viewInitFxn: 'viewInitBasic',
                   structName: 'BasicView'}],
            ]
        });
    
    /*!
     *  ======== callback ========
     *  @_nodoc
     *  driver callback function 
     *
     *  @param(cbArg)       callback argument 
     *  @param(*packet)     Pointer to the returned packet    
     */
    Void callback(UArg cbArg, DriverTypes.Packet *packet);
     
instance:
    
    /*! driver Handle got by calling {@link IDriver#create} */
    config Ptr driverHandle = 0;
    
internal:

    Int postInit(Object *obj, String name, Error.Block *eb);
    
    // -------- Internal Structures --------
    struct Instance_State {
        List.Object        fromDriver;    /* queue to collect pkts */
        String              name;
        Ptr                 driverHandle;  /* device handle */
        Ptr                 chan;          /* chan handle */
        UArg                chanParams;    /* chan params used for open */
        UInt                mode;          /* input or output */
        IConverter.DoneFxn  cbFxn;         /* callback into upper layer */
        UArg                cbArg;         /* callback arg */
    };
}
/*
 *  @(#) ti.sdo.io.converters; 1, 0, 0, 0,; 11-7-2012 13:08:12; /db/vtree/library/trees/ipc/ipc-i09/src/ xlibrary

 */

