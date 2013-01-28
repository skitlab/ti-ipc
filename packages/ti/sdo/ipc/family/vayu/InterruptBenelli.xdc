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
 *  ======== InterruptBenelli.xdc ========
 *
 */
 
import ti.sdo.utils.MultiProc;

/*!
 *  ======== InterruptBenelli ======== 
 *  TI81xx/Ducati based interrupt manager
 */

@ModuleStartup

module InterruptBenelli inherits ti.sdo.ipc.notifyDrivers.IInterrupt
{
    /* Total number of cores on Vayu SoC */
    const UInt8 NUM_CORES = 7;

    /* Number of Cores in EVE Sub-system */
    const UInt8 NUM_EVES = 4;

    /* Number of Cores in Benelli Sub-system */
    const UInt8 NUM_BENELLI_CORES = 1;

    /* Number of Internal EVE mailboxes */
    const UInt8 NUM_EVE_MBX = 12;

    /* Number of System Mailboxes */
    const UInt8 NUM_SYS_MBX = 1;

    /* Base address for the Mailbox subsystem */
    config UInt32 mailboxBaseAddr[NUM_EVE_MBX + NUM_SYS_MBX];

    /*
     * Mailbox table for storing encoded Base Address, mailbox user Id,
     * and sub-mailbox index.
     */
    config UInt32 mailboxTable[NUM_CORES * NUM_CORES];

    /* Base address for the Ducati CTRL register */
    config UInt32 ducatiCtrlBaseAddr = 0x40001000;

    config UInt32 benelliInterruptTable[NUM_CORES];

    config UInt32 procIdTable[NUM_CORES]; 
internal:

    /*! Statically retrieve procIds to avoid doing this at runtime */    
    config UInt eve0ProcId     = MultiProc.INVALIDID;
    config UInt eve1ProcId     = MultiProc.INVALIDID;
    config UInt eve2ProcId     = MultiProc.INVALIDID;
    config UInt eve3ProcId     = MultiProc.INVALIDID;
    config UInt dsp0ProcId     = MultiProc.INVALIDID;
    config UInt dsp1ProcId     = MultiProc.INVALIDID;
    config UInt benelliProcId  = MultiProc.INVALIDID;

    /*! Function table */
    struct FxnTable {
        Fxn    func;
        UArg   arg;
    }

    /*! Stub to be plugged for intra-ducati interrupts */
    Void intShmMbxStub(UArg arg);
    
    struct Module_State {        
        /* 
         * Create a function table of length 8 (Total number of cores in the
         * System) for each M4 core.
         */
        FxnTable   fxnTable[NUM_CORES];
        UInt       numPlugged[NUM_EVE_MBX + NUM_SYS_MBX]; /* # of times interrupt registered */
    };
} 
/*
 *  @(#) ti.sdo.ipc.family.vayu; 1, 0, 0, 0,; 11-7-2012 13:10:00; /db/vtree/library/trees/ipc/ipc-i09/src/ xlibrary

 */

