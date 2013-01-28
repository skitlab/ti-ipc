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
 *  ======== Generator.xdc ========
 *
 *
 */

import xdc.rov.ViewInfo;

import xdc.runtime.IHeap;
import xdc.runtime.Error;
import ti.sdo.io.DriverTypes;
import ti.sdo.utils.List;

/*! 
 *  Generator module
 *
 *  Using this module clients can simulate a device with an input channel and
 *  an output channel.
 *  Generator channels are used to generate sequences of constants, sine waves, 
 *  random noise, or other streams of data defined by a user function.
 *
 *  When a channel is opened, the user gets to specify a function to simulate
 *  the input channel and a function to simulate the output channel 
 *  characteristics.
 *
 *  The Generator module can be configured to process the io just like
 *  a real driver, where a {@link #submit} call will return pending and
 *  io will be completed in the context of an isr. This mode is called
 *  returnPending.
 *  However the user has to call {@link #simulateIsrFxn} in an isr, Swi or a 
 *  Task to support this mode.  In simulateIsr, one pending IO Packet for both 
 *  channel for all Generator instances is processed.
 */
module Generator inherits ti.sdo.io.IDriver {  

    /*! typedef for user specified I/O generators
     *
     *  Functions of this type get passed the buffer, buffer size and a 
     *  function specific argument
     */
    typedef Void (*GenFunc)(Ptr, SizeT, UArg);

    /*! Number of channels per generator device. 
     *  
     *  one input and one output channel
     */
    const Int NUMCHANS = 2;

    /*! Channel parameters used along with open  */
    struct ChanParams {
        GenFunc userFxn;        /* user defined function           */
        UArg    userArg;        /* argument for user defined function     */
        Bool    returnPending;  /* TRUE to simulate driver which postpones 
                                   io processing */
    };
    
    metaonly struct BasicView {
        String label;
    };
    
    metaonly struct GeneratorView {
        String                  mode;
        Bool                    inUse;
        Bool                    returnPending;
        String                  callbackFxn[];
        UArg                    callbackArg;
        String                  userFxn[];
        UArg                    userArg;
    }
    
    @Facet
    metaonly config ViewInfo.Instance rovViewInfo = 
        ViewInfo.create({
            viewMap: [
                ['Basic', {type: ViewInfo.INSTANCE,      viewInitFxn: 'viewInitBasic', structName: 'BasicView'}],
                ['Data',  {type: ViewInfo.INSTANCE_DATA, viewInitFxn: 'viewInitData',  structName: 'GeneratorView'}],                   
            ]
        });


    /*!
     *  Error raised when NULL chanParams is specified.
     */
    config Error.Id E_nullParams  = {
        msg: "E_nullParams: chanParams is null."
    };
    
    /*!
     *  This function is used to give energy to the Generator 
     *  driver to process its IO packets.  It simulates real ISR.
     *
     *  The application needs to call this function within a hwi, swi or
     *  task thread if any channels are opened in {@link #returnPending}
     *  mode.
     *
     *  The Generator module will process all channels with returnPending set 
     *  to true within this function. One packet per channel for all
     *  generator instances gets processed during a single call to this 
     *  function.
     */
    Void simulateIsr(UArg arg);

internal:

    struct ChanObj {
        List.Elem               elem;
        Bool                    inUse;         /* is channel is use? */
        Bool                    returnPending; /* pending mode */ 
        List.Handle             pendList;     /* queue io packets */
        DriverTypes.DoneFxn     cbFxn;        /* callback fxn */
        UArg                    cbArg;        /* callback arg */
        GenFunc                 userFxn;      /* user gen fxn */
        UArg                    userArg;      /* user gen arg */
    };

    struct Instance_State{
        ChanObj chans[NUMCHANS];/* two chans per device */
    };
    
    struct Module_State {
        List.Object chanList;
    }
}
/*
 *  @(#) ti.sdo.io.drivers; 1, 0, 0, 0,; 11-7-2012 13:08:22; /db/vtree/library/trees/ipc/ipc-i09/src/ xlibrary

 */

