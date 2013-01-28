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
 *  ======== IomAdapter.xdc ========
 *
 *
 *  Open Issues:
 *  1. static policy not supported.
 *  2. Need to map errors, commands.
 *  3. Uarg vs Ptr
 */

import xdc.runtime.Error;
import ti.sdo.io.DriverTypes;

/*!
 * Module through which legacy iom drivers can plug into BIOS 6.x
 *
 * The IomAdapter module maps iom.h to IDriver.xdc. A legacy iom
 * driver has to hook into BIOS 6.x using this module. This module
 * handles ALL legacy drivers in the system. This single module
 * takes care of several legacy driver modules. 
 * 
 * As part of its create the IomAdapter module will call mbBindDev for
 * each of the legacy drivers. {@link #open} will call mdCreateChan. 
 * {@link #close} will call mdDeleteChan. {@link #submit} will call
 * mdSubmitChan. {@link #control} will call mdControlChan. A delete call will
 * call mdUnbindDev.
 *
 */
@ModuleStartup
@InstanceFinalize

module IomAdapter inherits ti.sdo.io.IDriver {      

    /*! Iom init function type definition. */
    typedef Void (*InitFunc)();

instance:

    /*! Pointer to legacy iom function table */
    config Ptr iomFxns = null;

    /*! Legacy iom init function */
    config InitFunc initFxn = null;

    /*! Legacy deviceParams */
    config Ptr deviceParams = null;
    
    /*! deviceId for iom driver */
    config UInt deviceId = 0;
    
    /*!
     *  ======== create ========
     *  Create an IomAdapter instance
     */
    create();
    
internal:

    Void driverCallback(Ptr cbArg, DriverTypes.Packet *packet);

    Void postInit(Object *obj);
    
    Error.Id mapStatus(Int status);

    struct ChanObj {
        Ptr                    iomChanHdl;
        DriverTypes.DoneFxn    cbFxn;
        UArg                   cbArg;
        DriverTypes.Packet     abortPkt;
    };

    struct Instance_State {
        Int            deviceId;
        Ptr            deviceParams;
        Ptr            deviceHandle;
        Ptr            iomFxns;
        InitFunc       initFxn;
    };
}
/*
 *  @(#) ti.sdo.io.drivers; 1, 0, 0, 0,; 11-7-2012 13:08:22; /db/vtree/library/trees/ipc/ipc-i09/src/ xlibrary

 */

