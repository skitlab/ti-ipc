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
 *  ======== Transformer.xdc ========
 */
 
import xdc.rov.ViewInfo;

import xdc.runtime.Error;
import ti.sdo.io.IConverter;

/*! 
 *  Transformer module
 *
 *  This module allows the user to create instances which modify a data stream 
 *  by applying a function to each point produced or consumed by an underlying 
 *  driver. The number of transformer instances in the system is limited only 
 *  by the availability of memory; 
 *  
 *  This module implements {@link ti.sdo.io.IConverter} interface and as such is
 *  only usable with {@link ti.sdo.io.Stream}. IConverter instances are added to
 *  a table within Stream and they can be linked together to form an IO 
 *  stack/chain.
 *
 *  For example, is "/scale" is a Transformer instance in the stream table
 *  and "/adc" is a driver in {@link ti.sdo.io.DriverTable} then the name
 *  "/scale/adc" can be used to create a Stream instance.
 *
 *  For every Transformer instance the user can supply a tranfer function.
 *  Transformer provides three of these functions - {@link #multiply},
 *  {@link #fix2flt} and {@link #flt2fix}.
 */

module Transformer inherits IConverter
{
    /*! typedefs for transformer function
     *
     *  Functions of this type get passed the buffer, buffer size and a 
     *  function specific argument. The function should NOT act on the buffer 
     *  if buffer is NULL or buffer size is zero.
     */
    typedef Void (*TransFunc)(Ptr, SizeT, UArg);    
   
    metaonly struct BasicView {
        String              label;
        Ptr                 lowerConverter;
        String              mode;   
        String              callbackFxn[];
        UArg                callbackArg;
        String              transformFxn[];
        UArg                transformArg;
    }
    
    @Facet
    metaonly config ViewInfo.Instance rovViewInfo = 
        ViewInfo.create({
            viewMap: [
                ['Basic', {type: ViewInfo.INSTANCE, viewInitFxn: 'viewInitBasic', structName: 'BasicView'}],
            ]
        });
    
    /*! 
     *  ======== multiply ========
     *  multiply function mutiples each data point with a scale value 
     * 
     *  This function casts the scaleFactor to a UInt before using it.
     *  If arg is NULL a scaleFactor of 1 is used.
     */
    Void multiply(Ptr addr, SizeT size, UArg scaleFactor);
    
    /*! 
     *  ======== fix2flt ========
     *  fix2flt converts each data point from fixed point to floating point 
     *
     *  This function ignores the scaleFactor.
     */
    Void fix2flt(Ptr addr, SizeT size, UArg scaleFactor);

    /*! 
     *  ======== flt2fix ========
     *  flt2fix converts each data point from floating point to fixed point 
     *
     *  This function ignores the scaleFactor.
     */
    Void flt2fix(Ptr addr, SizeT size, UArg scalePtr);
   
instance:
    /*! 
     *  Function can be {@link #multiply}, {@link #fix2flt}
     *  or {@link #flt2fix} or a user specific function.
     */
    config TransFunc fxn = null;

    /*! 
     * Arg to be used with transform functions. 
     */
    config UArg arg = null;

internal:
    
    /*!
     *  ======== callback ========
     *  @_nodoc
     *  callback function for lower IConverter instance.
     *
     *  @param(cbArg)   callback argument 
     */
    Void callback(UArg cbArg);
     
    // -------- Internal Structures --------
    struct Instance_State {
        IConverter.Handle   convHandle;     /* handle for IConverter */
        Bool                drvAdapHdl;     /* created DriverAdapter */
        UInt                mode;   
        IConverter.DoneFxn  cbFxn;
        UArg                cbArg;
        TransFunc           fxn;            /* transform function */
        UArg                arg;            /* transform func arg */
    };
}
/*
 *  @(#) ti.sdo.io.converters; 1, 0, 0, 0,; 11-7-2012 13:08:13; /db/vtree/library/trees/ipc/ipc-i09/src/ xlibrary

 */

