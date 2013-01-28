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
 *  ======== DriverTypes.xdc ========
 *
 */

import xdc.runtime.Error;
import xdc.runtime.Log;
import xdc.runtime.Diags;
import ti.sdo.utils.List;

/*! 
 *  DriverTypes module
 *
 *  This module defines several types required by modules implementing the
 *  IDriver interface.
 *
 *  This modules defines two Encoded types PacketCmd and ControlCmd.
 *  The @Encoded keyword is used here to allow us to have different
 *  representations for PacketCmd and ControlCmd in the meta
 *  domain and in the target domain. Here these datatypes are Bits32 in
 *  the target domain. In the meta domain they are represented as
 *  structures whose contents decide the value in the target domain.
 *  The purpose is to assign unique values to all PacketCmds in the
 *  application. Similarly all config parameters of type ControlCmds
 *  get assigned unique values at configuration time.
 *  The encoding scheme used is (moduleId << 16) | unique number.
 * 
 *  Modules that implement IDriver can define their own ControlCmds and
 *  PacketCmds as follows
 *
 *      readonly config ControlCmd MYCMD;
 *
 *      readonly config PacketCmd MYPKTCMD;
 *
 *  This module also defines the IO packet used to send buffers to a driver. 
 *  Common cmds and errors useful to all IDriver modules are also defined here.
 */

@CustomHeader

module DriverTypes {

    /*! @_nodoc */
    metaonly struct PacketCmdDesc { Bits32 val; };
    @Encoded typedef PacketCmdDesc PacketCmd;       /*! Packet command type */

    /*! @_nodoc */
    metaonly struct ControlCmdDesc { Bits32 val; };
    @Encoded typedef ControlCmdDesc ControlCmd;     /*! Control command type */


    /*!
     * IO packet 
     *
     * Packets are the basis for all I/O operations. Packets are sent
     * to the driver using {@link IDriver#submit} function.
     *
     * @field(link)     field can be used by driver to queue up IO packets.
     *
     * @field(addr)     field points to buffer of data. 
     *                  The driver preserves this field.
     *
     * @field(origSize) is the size of data buffer. 
     *                  The driver preserves this field.
     *
     * @field(size)     is actual size of data written or read. 
     *                  Driver updates this field.
     *
     * @field(arg)      is used by end application. The driver preserves 
     *                  this field.
     *
     * @field(cmd)      is the Packet command. Driver preserves this field.
     *
     * @field(error)    is filled in by the mini-driver and contains status 
     *                  of IO. 
     *
     * @field(misc)     is used by {@link Stream}. The driver preserves 
     *                  this field.
     *
     * @field(status)   is reserved for use by iom adapters.
     *
     * @field(drvArg)   is reserved for use by drivers. Only drivers can use
     *                  this field.
     *
     */
    struct Packet {     
        List.Elem       link;       /*! queue link */
        Ptr             addr;       /*! buffer address */
        SizeT           origSize;   /*! size requested */
        SizeT           size;       /*! processed size */
        UArg            arg;        /*! arg to be used by end app */
        PacketCmd       cmd;        /*! command for mini-driver */
        Error.Id        error;      /*! error id */
        UArg            misc;       /*! reserved */
        Int             status;     /*! reserved for legacy IOM support */    
        UArg            drvArg;     /*! reserved for use by driver */
    };

    /*!
     *  Typedef for driver's callback function.
     *
     *  The driver will call a function of this type whenever an I/O
     *  operation completes after an async submit() call.
     *
     *  The UArg is the callback function arg specified during 
     *  {@link IDriver#open}.
     *  The Packet* points to packet used during {@link IDriver#submit} call.
     */
    typedef Void (*DoneFxn)(UArg, Packet *);
 
    const UInt COMPLETED = 0x0;    /*! completed status {@link IDriver#submit}*/
    const UInt PENDING   = 0x1;    /*! async callback {@link IDriver#submit}*/
    const UInt ERROR     = 0x2;    /*! error status {@link IDriver#submit}*/
      
    enum IOMode {
        INPUT,          /*! open channel for input */
        OUTPUT,         /*! open channel for output */
        INOUT           /*! simultaneous input/output */
    };

    /*
     *  Common Command and Packet commands.
     */

    readonly config PacketCmd READ;     /*! READ IO operation */
    readonly config PacketCmd WRITE;    /*! WRITE IO operation */

     /*! 
      *  Abort channel 
      *
      *  This is a control command that all drivers must attempt
      *  to support. This control command will abort ALL the packets
      *  queued up in the driver and return the packets by calling the
      *  {@link #DoneFxn} for each packet. Aborted packets are marked
      *  with {@link #E_Aborted}. This control command arg is an (UInt *).
      *  The driver returns number of packets aborted in the cmdArg.
      */
     readonly config ControlCmd CHAN_ABORT;

     readonly config ControlCmd CHAN_RESET;     /*! Reset channel */
     readonly config ControlCmd DEVICE_RESET;   /*! Reset device */ 

     /*
      *  Note that the errors below are very generic and it is preferable to
      *  avoid using these errors. The drivers should define their own errors.
      */
     config Error.Id EBADIO = {msg: "Generic Failure"};
     config Error.Id EBADMODE = {msg: "Illegal Mode"};
     config Error.Id ENOTIMPL = {msg: "Not implemented"};
     config Error.Id EBADARGS = {msg: "Bad args"};
     config Error.Id EINUSE = {msg: "Channel in use"};
     config Error.Id EINVALIDDEV = {msg: "Invalid devNum"};
     
     /*! used in {@link #Packet} when io completes without an error */
     const  UInt NOERROR = 0;          
     /*! 
      *  Error within aborted packet  
      *
      *  This is a special error that all drivers will return in the IO packet
      *  in case {@link #ABORT} control cmd is received.
      */
     config Error.Id EABORTED = {msg: "Aborted Packet"};
     
    /*! Logged just prior to submitting IO packet to driver */
    config Log.Event LM_startIO = {
        mask: Diags.USER1 | Diags.USER2,
        msg: "LM_startIO: buf: 0x%x, size: 0x%x, arg: 0x%x"
    };
    
    /*! Logged when io is completed */
    config Log.Event LM_ioComplete = {
        mask: Diags.USER1 | Diags.USER2,
        msg: "LM_ioComplete: buf: 0x%x, size: 0x%x, arg: 0x%x"
    };
}
/*
 *  @(#) ti.sdo.io; 1, 0, 0, 0,; 11-7-2012 13:08:01; /db/vtree/library/trees/ipc/ipc-i09/src/ xlibrary

 */

