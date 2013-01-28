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
 *  ======== NotifyMbxSetup.xdc ========
 */
 
import ti.sdo.utils.MultiProc;


/*!
 *  ======== NotifyMbxSetup ======== 
 *  Notify setup proxy for NotifyDriverMbx on TI81XX
 *
 *  This module creates and registers all drivers necessary for inter-processor
 *  notifications using {@link ti.sdo.ipc.family.ti81xx.NotifyDriverMbx}
 *
 *  Configure the {@link #dspIntVectId} module config to choose a non-default 
 *  interrupt vector ID on the TI81XX DSP core.
 */

module NotifyMbxSetup inherits ti.sdo.ipc.interfaces.INotifySetup
{
    /*!
     *  Interrupt vector id for the DSP core on TI81XX.
     */
    config UInt dspIntVectId = 5;

internal:

    config UInt videoProcId     = MultiProc.INVALIDID;
    config UInt vpssProcId      = MultiProc.INVALIDID;
    config UInt dspProcId       = MultiProc.INVALIDID;
    config UInt hostProcId      = MultiProc.INVALIDID;
}
/*
 *  @(#) ti.sdo.ipc.family.c6a8149; 1, 0, 0, 0,; 11-7-2012 13:09:21; /db/vtree/library/trees/ipc/ipc-i09/src/ xlibrary

 */

