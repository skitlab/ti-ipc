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
 *  ======== IDriver.xdc ========
 *  Device Driver interface 
 *
 */

import xdc.runtime.Error;

/*!
 *  Interface for IO drivers.
 *
 *  An IO Driver manages a peripheral(s) that provide channels for input and
 *  output. All peripherals of the same type are ideally managed by a single 
 *  driver. For example all uarts on a platform are managed by a single uart 
 *  driver.
 *
 *  The user will call the driver specific create function to instantiate a
 *  driver (e.g. a uart instance). The driver specific create function will 
 *  take device specific parameters. The create function will also take a 
 *  device ID to allow the client to specify a particular device.
 *  This allows users to select devices to be managed by the driver. It also
 *  allows the driver to manage resources and mark devices in use.
 *  
 *  The user calls {@link #open} at runtime using the handle returned by create
 *  to open a channel for use. The user passes a name, mode, chanParams,
 *  callback function and callback arg and an {@link xdc.runtime.Error#Block}. 
 *  open() could fail (e.g. channel is in use). When successful, the driver 
 *  returns an opaque channel handle, usually a pointer to the channel object.
 *
 *  The user uses {@link #close} to close the channel. {@link #close} raises an 
 *  error in case of failure. e.g. Trying to close a channel not is use.
 *
 *  The user calls {@link #submit} with the channel handle and an 
 *  {@link ti.sdo.io.DriverTypes#Packet} to initiate IO. 
 *  It may be possible for the driver to complete the IO 
 *  without the use of an asynchronous interrupt. e.g enough room in peripheral
 *  buffer, polling mode used, etc. In such cases the driver will return
 *  {@link ti.sdo.io.DriverTypes#COMPLETED} status and there is no callback.
 * 
 *  {@link ti.sdo.io.DriverTypes#ERROR} is returned by submit() if there is an error.
 *
 *  When the driver requires an asynchronous event like an interrupt to 
 *  complete the IO submit() will return {@link ti.sdo.io.DriverTypes#PENDING} status. 
 *  In such cases the asynchronous event will result in a callback. In the 
 *  callback the user should check for errors in the IO packet. The error in
 *  the packet could be driver specific. In case of success the 
 *  {@link xdc.runtime.Error#Id} in the packet will be null.
 *  The driver needs to update the size field to reflect the actual size of IO. 
 *
 *  In all cases the driver is responsible for raising errors except in the
 *  case when submit returns {@link ti.sdo.io.DriverTypes#PENDING}. In this case the 
 *  driver fills the {@link xdc.runtime.Error#Id} in the IO Packet. 
 *
 *  The driver is expected to queue up IO packets for transfer if necessary and
 *  must not error when given more than one packet.
 *
 *  The driver is non-blocking. e.g cannot call APIs that block as it is 
 *  expected that the higher layer will wait for IO to be completed and take 
 *  action in case of timeout.
 *
 *  The user will use {@link #control} with channel handle, command and argument
 *  to change channel parameters (e.g baud rate of uart). An error status is
 *  returned in case of failure. The control commands are used to specify
 *  channel parameters. Drivers can define their own control commands. See
 *  {@link ti.sdo.io.DriverTypes}
 *
 *  The command and command argument within the IO packet is used to control 
 *  the IO operation. Drivers can also define their own packet commands.
 *  See {@link ti.sdo.io.DriverTypes}.
 *
 *  A control command {@link ti.sdo.io.DriverTypes#CHAN_ABORT} is used to 
 *  abort/discard all packets queued up for a channel. Note that when the driver
 *  receives the abort control cmd, it must abort ALL packets and call the 
 *  callback for very packet. If a packet is currently in progress, the driver
 *  must attempt to shut down dma etc and return the packet. Aborted packets
 *  need to be updated with error filed set to {@link ti.sdo.io.DriverTypes#E_Aborted}.
 * 
 */
interface IDriver
{
    
instance:
    
    /*!
     *  ======== open ========
     *  Open a channel
     *
     *  Use this function to open a channel. The name parameter allows for
     *  driver specific configuration. e.g when a channel id is required. The
     *  name will be null for most drivers. The mode is either 
     *  {@link ti.sdo.io.DriverTypes#INPUT} or {@link ti.sdo.io.DriverTypes#OUTPUT}.
     *  chanParams are driver specific. When chanparams is null driver will use
     *  default params which were statically configured. The callback function
     *  and arg are used to indicate completion of IO after an async 
     *  {@link #submit} call. The driver will raise an error when open fails and
     *  the error block will contain a driver specific error or a generic error
     *  defined by {@link ti.sdo.io.DriverTypes}.
     *  open returns a driver specific opaque channel handle.
     *  Note that open() can be called at Startup time and the driver
     *  has to ensure that open() returns the channel pointer even though the
     *  driver startup has not been called. 
     *
     *  @param(name)            name string
     *  @param(mode)            open mode for channel
     *  @param(chanParams)      driver specific channel parameters
     *  @param(cbFxn)           callback function
     *  @param(cbArg)           callback function arg
     *  @param(eb)              error block
     *  @b(returns)             opaque channel handle
     */
    Ptr open(String name, UInt mode, UArg chanParams, DriverTypes.DoneFxn cbFxn,
         UArg cbArg, Error.Block *eb);
    
    /*!
     *  ======== close ========
     *  Close a channel. Raises an error upon failure. 
     *
     *  For example, trying to close a channel which is NOT in use could raise 
     *  an error. The error could be driver specific or generic errors defined
     *  by {@link ti.sdo.io.DriverTypes}
     *  
     *
     *  @param(chanHandle)      opaque channel handle
     *  @param(eb)              error block
     */
    Void close(Ptr chanHandle, Error.Block *eb);

    /*!
     *  ======== submit ========
     *  Submit io packet to a channel. This may result in a callback.  
     *
     *  The driver may be able to complete the IO immediately and will return
     *  {@link ti.sdo.io.DriverTypes#COMPLETED} status. If the driver requires an async
     *  callback then, it will return {@link ti.sdo.io.DriverTypes#PENDING}. When the
     *  driver raises an error, it will return {@link ti.sdo.io.DriverTypes#ERROR} and the
     *  caller need to check the error block.
     *  In case the return value is {@link ti.sdo.io.DriverTypes#PENDING}, the driver will
     *  call the function specified during {@link #open} with the IO packet.
     *
     *  @param(chanHandle)      opaque channel handle
     *  @param(packet)          io packet
     *  @param(eb)              error block
     *  @b(returns)             status (DriverTypes_COMPLETED/PENDING/ERROR)
     */
    UInt submit(Ptr chanHandle, DriverTypes.Packet *packet, Error.Block *eb);
    
    /*!
     *  ======== control ========
     *  Send driver specific command to channel or associated device.
     *
     *  @param(chanHandle)      opaque channel handle
     *  @param(cmd)             control command
     *  @param(cmdArgs)         command argument
     *  @param(eb)              error block
     */
    Void control(Ptr chanHandle, DriverTypes.ControlCmd cmd, UArg cmdArgs, Error.Block *eb);

}

/*
 *  @(#) ti.sdo.io; 1, 0, 0, 0,; 11-7-2012 13:08:01; /db/vtree/library/trees/ipc/ipc-i09/src/ xlibrary

 */

