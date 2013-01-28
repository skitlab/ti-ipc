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
 *  ======== Stream.xdc ========
 *
 */

import xdc.rov.ViewInfo;

import xdc.runtime.Error;
import xdc.runtime.Assert;
import xdc.runtime.IHeap;
import xdc.runtime.IGateProvider;
import ti.sdo.utils.List;
import ti.sdo.utils.NameServer;
import xdc.runtime.knl.Sync;
import xdc.runtime.knl.ISync;

/*!
 *  ======== Stream ========
 *
 *  Module to stream data to/from a driver.
 *
 *  This module offers both the issue/reclaim model and the read/write model to 
 *  send and receive data from drivers. 
 *
 *  In the issue/reclaim model, the client calls {@link #issue} when he has
 *  a buffer of data. issue() is non-blocking and returns. The buffer 
 *  has been issued for IO. To get the buffer back the client has to call 
 *  {@link #reclaim}. A call to reclaim() can block. Upon return from reclaim(),
 *  the client can re-use his buffer. 
 *
 *  The client can issue many buffers before reclaiming them.
 *  Buffers are always reclaimed in the order that they were issued.
 *  The client can optionally pass a user argument to issue().
 *
 *  In the read/write model, clients will call {@link #read} or {@link #write}
 *  to send/receive data. Here the client may block until buffer is ready or 
 *  a timeout occurs.
 *
 *  Stream also provides {@link #control} to send down driver specific control 
 *  commands. There is {@link #abort} function to abort the stream.
 *
 *  Stream also maintains a name table of {@link IConverter} handles. 
 *  This table is used by Stream to create an IO stack. The name passed to
 *  {@link #create} is usually of the form "/scale/uart". This name may
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
 *  This module uses {@link ti.sdo.utils.NameServer} to maintain its IConverter
 *  table
 *
 *  Stream uses the {@link xdc.runtime.knl.Sync} module for synchronization.
 *  Stream will call {@link xdc.runtime.knl.Sync#signal} when IO completes and
 *  {@link xdc.runtime.knl.Sync#wait} to wait for IO completion.
 *
 *  Stream will create a Sync.Handle passing NULL for ISync 
 *  handle to {@link #create}. 
 */

@InstanceFinalize
@InstanceInitError
@ModuleStartup

module Stream 
{
    const UInt INPUT = 0;       /*! mode for input */
    const UInt OUTPUT = 1;      /*! mode for output */
    const UInt INOUT = 2;       /*! mode for input & output */
    
    /*! 
     *  Error raised when name not found in IConverter Table and DriverTable.
     */
    config Error.Id E_notFound  = {
        msg: "E_notFound: %s name not found"
    };
    
    /*! 
     *  Error raised when there are no packets for IO
     */
    config Error.Id E_noPackets  = {
        msg: "E_noPackets: No packets available. maxIssues is %d"
    };

    /*! 
     *  Error raised when reclaim called but no outstanding buffers issued
     *
     *  Clients can check for this error while calling {@link #reclaim} to make 
     *  sure they got all their buffers back.
     *  @p(code)
     *  #include <xdc/runtime/Error.h>
     *  #include <ti/sdo/io/Stream.h>
     *
     *  Error_Block eb;
     *  Stream_Handle streamHdl;
     *  SizeT len;
     *  Ptr *bufp;
     *  
     *  Error_init(&eb); 
     *  
     *  do {
     *      len = Stream_reclaim(streamHdl, bufp, NULL, &eb); 
     *  }while (!Error_check(&eb));
     *  
     *  if (Error_getId == Stream_E_noBuffersIssued) {
     *      ....all issues buffers have been reclaimed
     *  }
     *  @p
     *  
     */
    config Error.Id E_noBuffersIssued  = {
        msg: "E_noBuffersIssued: No outstanding buffers"
    };

    /*! 
     *  Error raised when a timeout occurs during reclaim
     */
    config Error.Id E_timeout  = {
        msg: "E_timeout: Timeout"
    };    

    /*! 
     *  Assert when {@link #read} or {@link #write} on wrong channel
     *
     *  Assert when {@link #read} is called and mode = {@link #OUTPUT} or
     *  when {@link #write} is called and mode = {@link #INPUT}
     */
    config Assert.Id A_badMode  = {
        msg: "A_badMode: Bad Mode"
    };

    /*! 
     *  Assert when there are more packets to be reclaimed
     */
    config Assert.Id A_pendingReclaims  = {
        msg: "A_pendingReclaims: Packets issued but not reclaimed"
    };

    /*! 
     *  Assert when ISync is non-blocking but Stream_read/write called
     */
    config Assert.Id A_syncNonBlocking  = {
        msg: "A_syncNonBlocking: ISync should have blocking quality"
    };

    /*! 
     *  Max entries that can be added at runtime
     *
     *  This module requires total number of converters that need
     *  to be added at runtime to be identified at configuration time.
     */
    config UInt maxRuntimeEntries = 0;

    /*! 
     *  For making the table thread safe.
     */
    config IGateProvider.Handle gate = null;
    
    /*! 
     *  Length, in MAUs, of the name field in the table.
     */
    config UInt maxNameLen = 16;

    /*! 
     *  Section name used to place the IConverter table.
     */
    metaonly config String tableSection = null;
    
    metaonly struct BasicView {
        String              label;
        UInt                maxIssues;
        UInt                issued;
        UInt                ready;
        String              mode;
        Bool                userSuppliedSync;
        //List.Object        abortList;      /* reclaimed abort packets */
    }
    
    @Facet
    metaonly config ViewInfo.Instance rovViewInfo = 
        ViewInfo.create({
            viewMap: [
                ['Basic', {type: ViewInfo.INSTANCE, viewInitFxn: 'viewInitBasic', structName: 'BasicView'}],
            ]
        });

    /*!
     *  ======== add ========
     *  Add to IConverter table at runtime.
     *
     *  This API is not thread safe. Set {@link #gate} parameter
     *  to protect table if called from multiple threads.
     *
     *  @param(name)    Name of entry
     *  @param(handle)  IConverter handle
     *  @param(eb)      Error Block
     */
    Void add(String name, IConverter.Handle handle,  Error.Block *eb);

    /*!
     *  ======== addMeta ========
     *  Add to IConverter table at configuration time.
     *
     *  @param(name)            name of entry
     *  @param(handle)          IConverter handle
     */
    metaonly Void addMeta(String name, IConverter.Handle handle);

    /*!
     *  ======== remove ========
     *  Remove entry from IConverter table at runtime.
     *
     *  This API is not thread safe. Set {@link #gate} parameter
     *  to protect table if called from multiple threads.
     *
     *  @param(name)    name of entry
     *  @param(eb)      error block
     */
    Void remove(String name, Error.Block *eb);

    /*! 
     * @_nodoc
     * Match a name to name in IConverter table. return length matched. 
     */
    Int match(String name, IConverter.Handle *handle, Error.Block *eb);    

    /*! 
     *  @_nodoc
     *  io completed log functions called by DriverAdapter 
     */
    Void completedLog(UArg buf, UArg size, UArg arg);
    
instance:

    /*! Max outstanding issues */
    config UInt maxIssues = 2;

    /*!  Heap used to allocate {@link DriverTypes#Packet} in dynamic create */
    config IHeap.Handle packetHeap = null;
    
    /*!
     *  Section name used to place {@link DriverTypes#Packet}
     * 
     *  Default of null results in no explicit section placement.
     */
    metaonly config String packetSection = null;

    /*! ISync handle used to signal IO completion */
    config ISync.Handle sync = null;

    /*! Channel params for driver if present in IO stack */
    config UArg chanParams = null;
    
    /*!
     *  ======== create ========
     *  Create a Stream Instance.
     *
     *  Creates a new Stream instance and sets up the IO stack specified by 
     *  name.
     *  The name is usually of the following form "/scale/uart".
     *  The mode is either {@link #INPUT} or {@link #OUTPUT}.
     *
     *  @param(name)    name that identifies the IO stack
     *  @param(mode)    mode of channel.
     */
    create(String name, UInt mode);

    /*!
     *  ======== issue ========
     *  Issue a buffer to the stream.
     *
     *  This function issues a buffer to the stream for IO. This API is
     *  non-blocking.
     *
     *  Failure of issue() indicates that the stream was not able to accept the
     *  buffer being issued or that there was a error from the underlying
     *  IConverter or IDriver. Note that the error could be driver specific.
     *  If issue() fails because of an underlying driver problem
     *  {@link #abort} should be called before attempting more I/O through the 
     *  stream.
     *
     *  The interpretation of the logical size of a buffer, is 
     *  direction dependent.
     *  For a stream opened in {@link DriverTypes#OUTPUT} mode, the logical size
     *  of the buffer indicates the number of minimum addressable units of of 
     *  data it contains. 
     *
     *  For a stream opened in {@link DriverTypes#INPUT} mode, the logical size 
     *  of a buffer indicates the number of minimum addressable units being 
     *  requested by the client. In either case, the logical size of the buffer 
     *  must be less than or equal to the physical size of the buffer.
     *
     *  issue() is used in conjunction with {@link #reclaim}. The issue() call 
     *  sends a buffer to a stream, and reclaim() retrieves a buffer 
     *  from a stream. In normal operation each issue() call is followed by an 
     *  reclaim() call.
     *
     *  Short bursts of multiple issue() calls can be made without an
     *  intervening reclaim() call followed by short bursts of reclaim() calls, 
     *  but over the life of the stream issue() and reclaim() must be called 
     *  the same number of times. The number of issue() calls can exceed the 
     *  number of reclaim() calls by {@link #maxIssues}.
     *
     *  The client argument is not interpreted by Stream or the underlying 
     *  modules, but is offered as a service to the stream client. All compliant
     *  device drivers preserve the value of arg and maintain its association 
     *  with the data that it was issued with. arg provides a method for a 
     *  client to associate additional information with a particular buffer of 
     *  data. The arg is returned during reclaim().
     *
     *  @param(buf)    buffer pointer
     *  @param(size)    size of buffer
     *  @param(arg)     app arg
     *  @param(eb)      error block
     *  
     */
    Void issue(Ptr buf, SizeT size, UArg arg, Error.Block *eb);

    /*!
     *  ======== reclaim ========
     *  Reclaim a buffer that was previously issued by calling {@link #issue}.
     *
     *  reclaim() is used to request a buffer back from a stream. 
     *
     *  If a stream was created in {@link DriverTypes#OUTPUT} mode, then 
     *  reclaim() returns a processed buffer, and size is zero.
     *  If a stream was opened in {@link DriverTypes#INPUT} mode, reclaim() 
     *  returns a full buffer, and size is the number of minimum addressable 
     *  units of data in the buffer.
     *
     *  reclaim() blocks until a buffer can be returned to the caller, or until 
     *  a timeout occurs.
     *
     *  Failure of reclaim() indicates that no buffer was returned to 
     *  the  client. Therefore, if reclaim() fails, the client should 
     *  not attempt to de-reference pbufp, since it is not guaranteed to contain
     *  a valid buffer pointer.
     *
     *  reclaim() is used in conjunction with {@link #issue} to operate 
     *  a stream. The issue() call sends a buffer to a stream, and 
     *  reclaim() retrieves a  buffer from a stream. In normal operation
     *  each issue call is followed by an reclaim call.
     *
     *  Short bursts of multiple issue() calls can be made without an
     *  intervening reclaim() call followed by short bursts of reclaim() calls, 
     *  but over the life of the stream issue() and reclaim() must be called 
     *  the same number of times. The number of issue() calls can exceed the 
     *  number of reclaim() calls by {@link #maxIssues}.
     *
     *  A reclaim() call should not be made without at least one 
     *  outstanding issue() call. Calling reclaim() with no 
     *  outstanding issue() calls results in an error {@link #E_noBuffersIssued}
     *
     *  reclaim() only returns buffers that were passed in using issue(). It 
     *  also returns the buffers in the same order that they were issued.
     *
     *  reclaim() returns the size transferred in case of success.
     *  It returns zero when an error is caught. In case of timeout, the error 
     *  is {@link #E_timeout}.
     *
     *  @param(pbufp)       returned buffer pointer
     *  @param(timeout)     timeout in microseconds
     *  @param(parg)        pointer to client arg. Can be null.
     *  @param(eb)          error block
     *  @b(returns)         size transferred
     *  
     */
    SizeT reclaim(Ptr *pbufp, UInt timeout, UArg *parg, Error.Block *eb);

    /*!
     *  ======== read ========
     *  Read data from a stream.
     *
     *  Equivalent to an issue/reclaim pair for a instance with 
     *  mode = DriverTypes.INPUT. This call is synchronous and the buffer
     *  has data upon return from this API.
     *
     *  @param(bufp)        buffer pointer
     *  @param(size)        size of buffer
     *  @param(timeout)     timeout in microseconds
     *  @param(eb)          error block
     *  @b(returns)         size transferred
     */
    SizeT read (Ptr bufp, SizeT size, UInt timeout, Error.Block *eb);  

    /*!
     *  ======== write ========
     *  Write data to a stream
     *
     *  Equivalent to an issue/reclaim pair for a instance with 
     *  mode = DriverTypes.OUTPUT.
     *  This call is synchronous and the driver has finished processing the
     *  buffer upon return from this API.
     *
     *  @param(bufp)    buffer pointer
     *  @param(size)    size of buffer
     *  @param(timeout) timeout in microseconds
     *  @param(eb)      error block
     *  @b(returns)     size transferred
     */
    SizeT write (Ptr bufp, SizeT size, UInt timeout, Error.Block *eb);  

    /*!
     *  ======== submit ========
     *  @_nodoc
     *  Convenience API to send driver specific command.
     *
     *  Equivalent to an issue/reclaim pair for a instance with 
     *  driver specific command.
     *
     *  @param(bufp)    buffer pointer
     *  @param(size)    size of buffer
     *  @param(cmd)     driver specific packet command
     *  @param(timeout) timeout in microseconds
     *  @param(eb)      error block
     *  @b(returns)     size transferred
     */
    SizeT submit (Ptr bufp, SizeT size, DriverTypes.PacketCmd cmd, UInt timeout, Error.Block *eb); 
    
    /*!
     *  ======== control ========
     *  Send a control command to the driver.
     *
     *  @param(cmd)     device specific command
     *  @param(cmdArg)  command specific arg
     *  @param(eb)      error block
     */
    Void control(DriverTypes.ControlCmd cmd, UArg cmdArg, Error.Block *eb);
  
    /*!
     *  ======== abort ========
     *  Abort all pending IO.
     *
     *  The underlying device connected to stream is idled as a result of 
     *  calling abort and all buffers are ready for reclaim().
     *
     *  The client still needs to call {@link #reclaim} to get back his
     *  buffers. However the client will NOT block when calling reclaim()
     *  after an abort().
     *
     *  @param(eb)              error block
     *  @b(returns)             number of buffers aborted
     */
    UInt abort(Error.Block *eb);

    /*!
     *  ======== prime ========
     *  Prime an {@link #OUTPUT} stream instance.
     *
     *  This API facilitates buffering of an output channel. Consider a
     *  task that constantly gets data from input channel and sends to an 
     *  output channel. To start with it may want to issue buffers to the 
     *  input channel and output channel to enable double buffering.
     *  For an input channel there is no problem. For an output channel however
     *  the buffer data is sent out through the peripheral and in the case of a
     *  heterogenous system, the data will be sent to the other processor.
     *
     *  In such cases where the driver cannot handle dummy buffers, 
     *  Stream_prime can be used to make buffers available instantly for 
     *  reclaim without actually sending the buffers to the driver. 
     *  This API is non-blocking.
     *
     *  The primary use of prime() is used when applications want to prime
     *  an output channel at startup, without sending data to the driver.
     *  This allows them to reclaim and issue in their task.
     *  
     *  Failure of prime() indicates that the stream was not able to accept the
     *  buffer being issued  due to un-avaibailibity of IO packets.
     *
     *  The client argument is not interpreted by Stream.
     *
     *  @param(buf)     buffer pointer
     *  @param(arg)     app arg
     *  @param(eb)      error block
     */
    Void prime(Ptr buf, UArg arg, Error.Block *eb);

internal:

    /*!
     *  Structure of entry in IConverter Table
     *
     *  @field(name)
     *  Name of table entry.
     *
     *  @field(handle)
     *  {@link IConverter#Handle} instance to be used in the IO stack
     *
     */
    struct Entry {
        String              name;
        IConverter.Handle   handle;
    };
    
    /*! 
     *  Array for all statically configured IConverter table entries 
     */
    metaonly config Entry staticEntries[];
        
    /*! callback for lower layer */
    Void internalCallback(UArg arg);

    /*! instance postInit */
    Int postInit(Object *obj, Error.Block *eb);
   
    /*! extension to pass down driver specific command */
    Void issueX(Object *obj, Ptr bufp, SizeT size, UArg arg, 
        DriverTypes.PacketCmd cmd, Error.Block *eb);
   
    /* -------- Internal Structures -------- */
    struct Instance_State {
        String              name;           /* name used to create inst */
        UArg                chanParams;     /* used to open IConverter */
        Bool                drvAdapHdl;     /* Created DriverAdapter */
        DriverTypes.Packet  packets[];      /* used only in static create */
        UInt                maxIssues;      /* used only in static create */
        UInt                issued;         /* # bufs issued */
        UInt                ready;          /* # bufs ready for reclaim */
        UInt                mode;           /* input or output */
        IHeap.Handle        packetHeap;     /* heap used to alloc packets */
        ISync.Handle        complete;       /* completion sync */
        Bool                userSync;       /* user supplied sync handle*/
        IConverter.Handle   convHandle;     /* handle to IConverter below */
        List.Object         freeList;       /* free packets */
    };

    /* -------- Internal Structures -------- */
    struct Module_State {
        NameServer.Handle   convTable;    /* IConverter table */
    };
}
/*
 *  @(#) ti.sdo.io; 1, 0, 0, 0,; 11-7-2012 13:08:01; /db/vtree/library/trees/ipc/ipc-i09/src/ xlibrary

 */

