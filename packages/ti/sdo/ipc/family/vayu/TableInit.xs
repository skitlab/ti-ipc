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
 *  ======== TableInit.xs ========
 *
 */

/* 
 * When assigning virtual indexes to each core make sure
 * to assign even virtual indexes to DSP/M4 cores with
 * even Core Ids, and assign odd virtual indexes to DSP/M4
 * cores with odd Core Ids.
 *
 * Example:
 *     DSP physical Core Id = 0 -> Virtual Index = 4;
 *     DSP physical Core Id = 1 -> Virtual Index = 5;
 *     
 * Virtual Index Assignment:
 * 
 * | EVE0 -> 0 | EVE1 -> 1 | EVE2 -> 2 | EVE3 -> 3 |
 * | DSP0 -> 4 | DSP1 -> 5 | M4C0 -> 6 | M4C1 -> 7 |
 *
 */
var eve0VirtId    = 0;
var eve1VirtId    = 1;
var eve2VirtId    = 2;
var eve3VirtId    = 3;
var dsp0VirtId    = 4;
var dsp1VirtId    = 5;
var benelliVirtId = 6;

/*
 * Function to initialize coreIds.
 */
function initProcId(InterruptCore)
{
    var MultiProc        = xdc.useModule("ti.sdo.utils.MultiProc");

    for (var loopIdx=0 ;loopIdx<InterruptCore.procIdTable.length ;loopIdx++) {
        InterruptCore.procIdTable[loopIdx] = -1;
    }
 
    InterruptCore.eve0ProcId     = MultiProc.getIdMeta("EVE1");
    InterruptCore.eve1ProcId     = MultiProc.getIdMeta("EVE2");
    InterruptCore.eve2ProcId     = MultiProc.getIdMeta("EVE3");
    InterruptCore.eve3ProcId     = MultiProc.getIdMeta("EVE4");
    InterruptCore.dsp0ProcId     = MultiProc.getIdMeta("DSP1");
    InterruptCore.dsp1ProcId     = MultiProc.getIdMeta("DSP2");
    InterruptCore.benelliProcId  = MultiProc.getIdMeta("BENELLI-M4");

    if (InterruptCore.eve0ProcId != MultiProc.INVALIDID) {
        InterruptCore.procIdTable[InterruptCore.eve0ProcId] = eve0VirtId;
    }
    if (InterruptCore.eve1ProcId != MultiProc.INVALIDID) {
        InterruptCore.procIdTable[InterruptCore.eve1ProcId] = eve1VirtId;
    }
    if (InterruptCore.eve2ProcId != MultiProc.INVALIDID) {
        InterruptCore.procIdTable[InterruptCore.eve2ProcId] = eve2VirtId;
    }
    if (InterruptCore.eve3ProcId != MultiProc.INVALIDID) {
        InterruptCore.procIdTable[InterruptCore.eve3ProcId] = eve3VirtId;
    }
    if (InterruptCore.dsp0ProcId != MultiProc.INVALIDID) {
        InterruptCore.procIdTable[InterruptCore.dsp0ProcId] = dsp0VirtId;
    }
    if (InterruptCore.dsp1ProcId != MultiProc.INVALIDID) {
        InterruptCore.procIdTable[InterruptCore.dsp1ProcId] = dsp1VirtId;
    }
    if (InterruptCore.benelliProcId != MultiProc.INVALIDID) {
        InterruptCore.procIdTable[InterruptCore.benelliProcId] = benelliVirtId;
    }
}

/*
 * Function to generate mailbox table
 */
function generateTable(InterruptCore)
{
    var SYS_MBX7_OFFSET = 0;
    var eveMbx2BaseIdx = 2;

    var subMbxIdx;
    var tableEntry;
    var mbxUserIdx;
    var mbxBaseAddrIdx;
    
    /*
     * Each entry in the mailbox table stores 3 indexes.
     * The breakup of each entry is shown below:
     * Entry format : 0xAAAABBCC
     *         AAAA : Mailbox base address table index
     *           BB : Mailbox User Id
     *           CC : Sub-mailbox index
     *
     * In order to lookup the User Id, Sub-mailbox Index and mailbox base
     * address for a given src and dst core from the mailboxTable, the 
     * procedure shown below is followed:
     *     1. Find the right entry for the given src and dst core.
     *        mailboxTable index is given by:
     *            Index = (src * NumCores) + dst
     *     2. Mbx BaseAddr Index = mailboxTable[Index] >> 16
     *     2. dst Mailbox UserId = (mailboxTable[Index] >> 8) & 0xFF
     *     3. Sub-Mailbox Index  = mailboxTable[Index] & 0xFF
     */

    /*
     * 'i' is src core index, and 
     * 'j' is dst core index 
     */
    for (var i = 0; i < InterruptCore.NUM_CORES; i++) {
        for (var j = 0; j < InterruptCore.NUM_CORES; j++) {
            /* EVE Internal Mailbox 2 */
            if ((i < InterruptCore.NUM_EVES) && (j < InterruptCore.NUM_EVES)) {

                /* Generate 3 masks forming a single table entry */
                mbxBaseAddrIdx = ((j * 3) + eveMbx2BaseIdx) << 16;

                /* 
                 * Determined based on the send remote receive local
                 * methodology being followed for EVE-to-EVE communication.
                 */
                mbxUserIdx = 0 << 8;
                subMbxIdx = i;

                tableEntry = mbxBaseAddrIdx | mbxUserIdx | subMbxIdx;
                InterruptCore.mailboxTable[i*InterruptCore.NUM_CORES + j] = tableEntry;
                continue;
            }

            /* EVE Internal Mailbox 0/1 */
            if ((i < InterruptCore.NUM_EVES) || (j < InterruptCore.NUM_EVES)) {
                if (i < InterruptCore.NUM_EVES) {
                    mbxBaseAddrIdx = ((i * 3) + (j % 2)) << 16;
                    mbxUserIdx = (((j == dsp0VirtId) || (j == dsp1VirtId)) ? 1 : 2) << 8;
                    subMbxIdx = ((j == dsp0VirtId) || (j == dsp1VirtId)) ? 0 : 2;

                    tableEntry = mbxBaseAddrIdx | mbxUserIdx | subMbxIdx;
                    InterruptCore.mailboxTable[i*InterruptCore.NUM_CORES + j] = tableEntry;
                    continue;
                }
                else if (j < InterruptCore.NUM_EVES) {
                    mbxBaseAddrIdx = ((j * 3) + (i % 2)) << 16;
                    mbxUserIdx = 0 << 8;
                    subMbxIdx = ((i == dsp0VirtId) || (i == dsp1VirtId)) ? 1 : 3;

                    tableEntry = mbxBaseAddrIdx | mbxUserIdx | subMbxIdx;
                    InterruptCore.mailboxTable[i*InterruptCore.NUM_CORES + j] = tableEntry;
                    continue;
                }
            }
            
            /* System Mailbox 7 */
            mbxBaseAddrIdx = (InterruptCore.NUM_EVES * 3) + 
                              SYS_MBX7_OFFSET << 16;
            mbxUserIdx = (j - InterruptCore.NUM_EVES) << 8;
            subMbxIdx  = (i - InterruptCore.NUM_EVES) * 4 + 
                         (j - InterruptCore.NUM_EVES);

            tableEntry = mbxBaseAddrIdx | mbxUserIdx | subMbxIdx;
            InterruptCore.mailboxTable[i*InterruptCore.NUM_CORES + j] = tableEntry;
        }
    }
}
/*
 *  @(#) ti.sdo.ipc.family.vayu; 1, 0, 0, 0,; 11-7-2012 13:10:00; /db/vtree/library/trees/ipc/ipc-i09/src/ xlibrary

 */

