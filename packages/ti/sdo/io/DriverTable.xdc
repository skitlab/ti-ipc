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
 *  ======== DriverTable.xdc ========
 *
 *
 */

import xdc.runtime.Error;
import xdc.runtime.Assert;
import xdc.runtime.IGateProvider;
import ti.sdo.utils.NameServer;

/*! 
 *  DriverTable module
 *
 *  This module maintains a table of {@link IDriver#Handle}. Other modules can
 *  lookup these handles by name and open channels for IO. The {@link Stream}
 *  module will open channels using this table. All names in this table have to
 *  be unique.
 *
 *  This module allows addition of IDriver handles into the table at 
 *  configuration time as well as at runtime. However, the total number of 
 *  runtime entries have to be decided at configuration time. There is no limit
 *  to entries added statically.
 *
 *  This module uses {@link ti.sdo.utils.NameServer} to maintain its table
 */
 
module DriverTable {
    /*! 
     *  Max runtime entries that can be added.
     *
     *  Currently this module requires total number of entries that need
     *  to be added at runtime to be identified at configuration time.
     */
    config UInt maxRuntimeEntries = 0;
    
    /*! 
     *  Gate used to make the table thread safe.
     */
    config IGateProvider.Handle gate = null;
    
    /*! 
     *  Length, in MAUs, of the name field in the table.
     */
    config UInt maxNameLen = 16;

    /*! 
     *  Section name is used to place the IDriver table.
     */
    metaonly config String tableSection = null;
        
    /*!
     *  ======== add ========
     *  Add IDriver handle to the table at runtime.
     *
     *  Will raise an error when name already exists in table.
     *  This API is not thread safe. Set {@link #gate} parameter
     *  to protect table if called from multiple threads.
     *
     *  @param(name)            name of entry
     *  @param(driverHandle)    {@link IDriver#Handle}
     *  @param(eb)              Error Block
     */
    Void add(String name, IDriver.Handle driverHandle, Error.Block *eb);

    /*!
     *  ======== addMeta ========
     *  Add to IDriver handle to the table at configuration time.
     *
     *  @param(name)            name of entry
     *  @param(driverHandle)    {@link IDriver#Handle}
     */
    metaonly Void addMeta(String name, IDriver.Handle driverHandle);

    /*!
     *  ======== remove ========
     *  Remove entry from IDriver table at runtime.
     *
     *  Will raise an error when name not found in table
     *  This API is not thread safe. Set {@link #gate} parameter
     *  to protect table if called from multiple threads.
     *
     *  @param(name)    name of entry
     *  @param(eb)      error block
     */
    Void remove(String name, Error.Block *eb);

    /*!
     *  ======== match ========
     *  @_nodoc
     *  match entry in IDriver table.
     *
     *  This function matches the name with table entries and writes to
     *  the handle if it finds a match. If entry is not found it sets
     *  handle to null. It returns length matched.
     *  This API is not thread safe. Set {@link #gate} parameter
     *  to protect table if called from multiple threads.
     *
     *  @param(name)    name of entry
     *  @param(handle)  pointer to IDriver handle.
     *  @param(eb)      error block
     *  @b(returns)     length matched
     */
    Int match(String name, IDriver.Handle *handle, Error.Block *eb);

internal:

    /*!
     * Structure of entry in metaonly table
     */
    struct Entry {
        String  name;
        Ptr     handle;
    };

    /*! 
     *  Array for all statically configured table entries 
     */
    metaonly config Entry staticEntries[];
        
    struct Module_State {
        NameServer.Handle   drvTable;
    };
}
/*
 *  @(#) ti.sdo.io; 1, 0, 0, 0,; 11-7-2012 13:08:01; /db/vtree/library/trees/ipc/ipc-i09/src/ xlibrary

 */

