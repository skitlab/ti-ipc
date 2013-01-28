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
 *  ======== IConverter.xdc ========
 *
 */

import xdc.runtime.Error;
 
/*!
 *  Interface defining an IConverter
 *
 *  This interfaces allows applications to "stack" functionality on top
 *  of a driver. Modules that implement this interface can manipulate data
 *  coming to and from a driver. Simple scaling, fixed to float or float to
 *  fixed transformations can be done using IConverters without major changes
 *  in the application.
 *
 *  IConverters can only be used along with the {@link Stream} module.
 *  
 *  Stream maintains a name table of {@link IConverter} handles. 
 *  This table is used by Stream to create an IO stack. The name passed to
 *  {@link Stream#create} is usually of the form "/scale/uart". This name may
 *  correspond to the following IO stack.
 *
 *         Stream Instance
 *
 *                 |

 *                 V
 *
 *         IConverter Instance (/scale)
 *
 *                 |
 *
 *                 V
 *
 *         IDriver Instance (/uart)
 *
 *  In this case the Stream requires "/scale" to be in its IConverter table 
 *  and "/uart" to be in {@link DriverTable}. The IConverter table associates
 *  a name with an IConverter Handle. Note that these names have to be of the
 *  form "/name1".
 *
 *  There may be several other IConverters such as a 
 *  {@link ti.sdo.io.converters.Transformer} instance in the stack.
 *
 *  IConverter implementation follows a simple asynchronous issue/reclaim
 *  model. Once an instance of an IConverter is created it accepts IO
 *  packets through the {@link #issue} function. Issue ALWAYS results in a 
 *  callback when IO completes or an error occurs.
 *
 *  The IConverter device above it in the stack or the {@link Stream} 
 *  module will call {@link #reclaim} to get the packet back.
 *
 *  {@link ti.sdo.io.DriverTypes#ControlCmd} are sent to the IConverters or the 
 *  underlying drivers using {@link #control} function.
 *
 *  Only  packets with {@link ti.sdo.io.DriverTypes#READ} and 
 *  {@link ti.sdo.io.DriverTypes#WRITE} are operated on by IConverter. Other 
 *  commands are passed down.
 */

 
interface IConverter
{
    /*!
     *  ======== Q_TERMINATING ========
     *  Terminating quality.
     *
     *  Implementations with this "quality" can be at the bottom of the IO
     *  stack
     */
    const Int Q_TERMINATING = 1;
    
    /*!
     *  Typedef for callback function.
     *
     *  The IConverter instance lower in the stack will invoke this callback 
     *  whenever an I/O operation completes.
     */
    typedef Void (*DoneFxn)(UArg);

instance:
    
    /*! ======== open ========
     *  Opens the IConverter Instance.
     *
     *  This is called at runtime after the IConverter instance has been
     *  created. This function opens the IConverter instance lower in the
     *  stack and gives its callback function and arg.
     *
     *  @param(name)        remaining name
     *  @param(mode)        DriverTypes_INPUT/OUTPUT
     *  @param(chanParams)  channel params for driver at the bottom of stack
     *  @param(cbFxn)       callback function
     *  @param(cbArg)       callback function arg
     *  @param(eb)          error block
     */
    Void open(String name, UInt mode, UArg chanParams, 
        DoneFxn cbFxn, UArg cbArg, Error.Block *eb);

    /*! ======== close ========
     *  Close an IConverter Instance.
     *
     *  @param(eb)       error block
     */
    Void close( Error.Block *eb);
           
    /*! ======== issue ========
     *  Issue a packet for IO.
     *
     *  The IConverter might work on the buffer of data if the mode is
     *  {@link ti.sdo.io.DriverTypes#OUTPUT} and call the issue function for the
     *  IConverter lower in the stack. Some IConverters may be the last in
     *  the IO stack. issue() always results in a callback.
     *
     *  @param(packet)      IO packet
     *  @param(eb)          Error Block
     */
    Void issue(DriverTypes.Packet *packet, Error.Block *eb);

    /*! ======== reclaim ========
     *  Reclaim a previously issued packet.
     *
     *  The IConverter will call the reclaim function for the
     *  IConverter lower in the stack. It may work on the buffer of data 
     *  returned if the mode is {@link ti.sdo.io.DriverTypes#INPUT}.
     *
     *  @param(packetp)   pointer to returned packet
     *  @param(eb)        Error Block
     */
    Void reclaim(DriverTypes.Packet **packetp, Error.Block *eb);

    /*! ======== control ========
     *  Send a control command.
     *
     *  The IConverter will respond to command meant for it and pass down all
     *  others.
     *
     *  @param(cmd)    control cmd
     *  @param(cmdArg) control cmd arg
     *  @param(eb)     error block
     */
    Void control(DriverTypes.ControlCmd cmd, UArg cmdArg, Error.Block *eb);
    
    /*!
     * ======== query ========
     * Query for qualities supported.
     *
     *  @param(qual)    quality to be tested     
     */
    Bool query(Int qual);
}
/*
 *  @(#) ti.sdo.io; 1, 0, 0, 0,; 11-7-2012 13:08:01; /db/vtree/library/trees/ipc/ipc-i09/src/ xlibrary

 */

