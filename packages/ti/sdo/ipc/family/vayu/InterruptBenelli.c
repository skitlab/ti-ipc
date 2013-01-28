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
 *  ======== InterruptBenelli.c ========
 *  Ducati/TI81xx based interupt manager
 */

#include <xdc/std.h>
#include <xdc/runtime/Assert.h>
#include <xdc/runtime/System.h>
#include <xdc/runtime/Startup.h>

#include <ti/sysbios/hal/vayu/IntXbar.h>
#include <ti/sysbios/family/arm/m3/Hwi.h>
#include <ti/sysbios/family/arm/ducati/Core.h>
#include <ti/sdo/ipc/notifyDrivers/IInterrupt.h>
#include <ti/sdo/ipc/_Ipc.h>
#include <ti/sdo/utils/_MultiProc.h>

#include "package/internal/InterruptBenelli.xdc.h"

/* Register access method. */
#define REG16(A)   (*(volatile UInt16 *) (A))
#define REG32(A)   (*(volatile UInt32 *) (A))

#define PROCID(IDX)               (InterruptBenelli_procIdTable[(IDX)])
#define MBX_TABLE_IDX(SRC, DST)   ((PROCID(SRC) * InterruptBenelli_NUM_CORES) + \
                                    PROCID(DST))
#define SUBMBX_IDX(IDX)           (InterruptBenelli_mailboxTable[(IDX)] & 0xFF)
#define MBX_USER_IDX(IDX)         ((InterruptBenelli_mailboxTable[(IDX)] >> 8) \
                                    & 0xFF)
#define MBX_BASEADDR_IDX(IDX)    ((InterruptBenelli_mailboxTable[(IDX)] >> 16) \
                                    & 0xFFFF)

#define MAILBOX_REG_VAL(M)        (0x1 << (2 * M))

#define MAILBOX_MESSAGE(IDX)      (InterruptBenelli_mailboxBaseAddr[  \
                                    MBX_BASEADDR_IDX(IDX)] + 0x40 +   \
                                    (0x4 * SUBMBX_IDX(IDX)))
#define MAILBOX_STATUS(IDX)       (InterruptBenelli_mailboxBaseAddr[  \
                                    MBX_BASEADDR_IDX(IDX)] + 0xC0 +   \
                                    (0x4 * SUBMBX_IDX(IDX)))

#define MAILBOX_IRQSTATUS_CLR(IDX)   (InterruptBenelli_mailboxBaseAddr[  \
                                        MBX_BASEADDR_IDX(IDX)] + (0x10 * \
                                        MBX_USER_IDX(IDX)) + 0x104)
#define MAILBOX_IRQENABLE_SET(IDX)   (InterruptBenelli_mailboxBaseAddr[  \
                                        MBX_BASEADDR_IDX(IDX)] + (0x10 * \
                                        MBX_USER_IDX(IDX)) + 0x108)
#define MAILBOX_IRQENABLE_CLR(IDX)   (InterruptBenelli_mailboxBaseAddr[  \
                                        MBX_BASEADDR_IDX(IDX)] + (0x10 * \
                                        MBX_USER_IDX(IDX)) + 0x10C)
#define MAILBOX_EOI_REG(IDX)         (InterruptBenelli_mailboxBaseAddr[  \
                                        MBX_BASEADDR_IDX(IDX)] + 0x140)

#define PID0_ADDRESS           0xE00FFFE0

/*
 *************************************************************************
 *                      Module functions
 *************************************************************************
 */

/*!  
 *  ======== InterruptBenelli_Module_startup ========
 */ 
Int InterruptBenelli_Module_startup(Int phase)
{
    if (IntXbar_Module_startupDone()) {
        /* connect mailbox interrupts at startup */
        //M4 Core 0
        IntXbar_connect(42, 285);  // eve1 mailbox
        IntXbar_connect(43, 294);  // eve2 mailbox
        IntXbar_connect(44, 303);  // eve3 mailbox
        IntXbar_connect(45, 312);  // eve4 mailbox
        IntXbar_connect(46, 259);  // system mailbox 7
        return (Startup_DONE); 
    }

    return (Startup_NOTDONE);
}

/*!
 *  ======== InterruptBenelli_intEnable ========
 *  Enable remote processor interrupt
 */
Void InterruptBenelli_intEnable(UInt16 remoteProcId, IInterrupt_IntInfo *intInfo)
{
    UInt16 index;

    index = MBX_TABLE_IDX(remoteProcId, MultiProc_self());
    /*  
     *  If the remote processor communicates via mailboxes, we should enable 
     *  the Mailbox IRQ instead of enabling the Hwi because multiple mailboxes
     *  share the same Hwi
     */
    REG32(MAILBOX_IRQENABLE_SET(index)) = MAILBOX_REG_VAL(SUBMBX_IDX(index));
}

/*!
 *  ======== InterruptBenelli_intDisable ========
 *  Disables remote processor interrupt
 */
Void InterruptBenelli_intDisable(UInt16 remoteProcId, 
                                IInterrupt_IntInfo *intInfo)
{
    UInt16 index;

    index = MBX_TABLE_IDX(remoteProcId, MultiProc_self());
    /*  
     *  If the remote processor communicates via mailboxes, we should disable 
     *  the Mailbox IRQ instead of disabling the Hwi because multiple mailboxes
     *  share the same Hwi
     */
    REG32(MAILBOX_IRQENABLE_CLR(index)) = MAILBOX_REG_VAL(SUBMBX_IDX(index));
}

/*!
 *  ======== InterruptBenelli_intRegister ========
 */
Void InterruptBenelli_intRegister(UInt16 remoteProcId,
                                 IInterrupt_IntInfo *intInfo,
                                 Fxn func, UArg arg)
{
    Hwi_Params  hwiAttrs;
    UInt        key;
    UInt        mbxIdx;
    Int         index;
    InterruptBenelli_FxnTable *table;

    Assert_isTrue(remoteProcId < ti_sdo_utils_MultiProc_numProcessors, 
            ti_sdo_ipc_Ipc_A_internal);

    /* Assert that our MultiProc id is set correctly */
    Assert_isTrue((InterruptBenelli_benelliProcId == MultiProc_self()),
                  ti_sdo_ipc_Ipc_A_internal);

    mbxIdx = MBX_BASEADDR_IDX(MBX_TABLE_IDX(remoteProcId, MultiProc_self()));

    index = PROCID(remoteProcId);

    intInfo->localIntId = InterruptBenelli_benelliInterruptTable[index];

    /* Disable global interrupts */
    key = Hwi_disable();

    table = &(InterruptBenelli_module->fxnTable[index]);
    table->func = func;
    table->arg  = arg;

    InterruptBenelli_intClear(remoteProcId, intInfo);

    Hwi_Params_init(&hwiAttrs);
    hwiAttrs.maskSetting = Hwi_MaskingOption_LOWER;

    /* Make sure the interrupt only gets plugged once */
    InterruptBenelli_module->numPlugged[mbxIdx]++;
    if (InterruptBenelli_module->numPlugged[mbxIdx] == 1) {
        Hwi_create(intInfo->localIntId,
                   (Hwi_FuncPtr)InterruptBenelli_intShmMbxStub,
                    &hwiAttrs,
                    NULL);
            
        /* Interrupt_intEnable won't enable the Hwi */
        Hwi_enableInterrupt(intInfo->localIntId);
    }
    
    InterruptBenelli_intEnable(remoteProcId, intInfo);
    
    /* Restore global interrupts */
    Hwi_restore(key);
}

/*!
 *  ======== InterruptBenelli_intUnregister ========
 */
Void InterruptBenelli_intUnregister(UInt16 remoteProcId,
                                   IInterrupt_IntInfo *intInfo)
{
    UInt                       mbxIdx;
    Int                        index;
    InterruptBenelli_FxnTable *table;
    Hwi_Handle                 hwiHandle;

    mbxIdx = MBX_BASEADDR_IDX(MBX_TABLE_IDX(remoteProcId, MultiProc_self()));

    index = PROCID(remoteProcId);

    /* Disable the mailbox interrupt source */
    InterruptBenelli_intDisable(remoteProcId, intInfo);

    /* Disable the interrupt itself */
    InterruptBenelli_module->numPlugged[mbxIdx]--;
    if (InterruptBenelli_module->numPlugged[mbxIdx] == 0) {
        hwiHandle = Hwi_getHandle(intInfo->localIntId);
        Hwi_delete(&hwiHandle);
    }

    /* Clear the FxnTable entry for the remote processor */
    table = &(InterruptBenelli_module->fxnTable[index]);
    table->func = NULL;
    table->arg  = 0;
}


/*!
 *  ======== InterruptBenelli_intSend ========
 *  Send interrupt to the remote processor
 */
Void InterruptBenelli_intSend(UInt16 remoteProcId, IInterrupt_IntInfo *intInfo,
                             UArg arg)
{
    UInt key;
    UInt16 index;

    index = MBX_TABLE_IDX(MultiProc_self(), remoteProcId);
    key = Hwi_disable();
    if (REG32(MAILBOX_STATUS(index)) == 0) {
        REG32(MAILBOX_MESSAGE(index)) = arg;
    }
    Hwi_restore(key);
}


/*!
 *  ======== InterruptBenelli_intPost ========
 *  Simulate an interrupt from a remote processor
 */
Void InterruptBenelli_intPost(UInt16 srcProcId, IInterrupt_IntInfo *intInfo,
                             UArg arg)
{
    UInt key;
    UInt16 index;

    index = MBX_TABLE_IDX(srcProcId, MultiProc_self());
    key = Hwi_disable();
    if (REG32(MAILBOX_STATUS(index)) == 0) {
        REG32(MAILBOX_MESSAGE(index)) = arg;
    }
    Hwi_restore(key);
}


/*!
 *  ======== InterruptBenelli_intClear ========
 *  Clear interrupt
 */
UInt InterruptBenelli_intClear(UInt16 remoteProcId, IInterrupt_IntInfo *intInfo)
{
    UInt arg;
    UInt16 index;

    index = MBX_TABLE_IDX(remoteProcId, MultiProc_self());
    arg = REG32(MAILBOX_MESSAGE(index));
    REG32(MAILBOX_IRQSTATUS_CLR(index)) = MAILBOX_REG_VAL(SUBMBX_IDX(index));

    return (arg);
}

/*
 *************************************************************************
 *                      Internals functions
 *************************************************************************
 */

/*!
 *  ======== InterruptBenelli_intShmMbxStub ========
 */
Void InterruptBenelli_intShmMbxStub(UArg arg)
{
    UInt16 index;
    UInt16 selfIdx;
    UInt16 loopIdx;
    InterruptBenelli_FxnTable *table;

    selfIdx = MultiProc_self();

    for (loopIdx = 0; loopIdx < MultiProc_getNumProcsInCluster(); loopIdx++) {

        if (loopIdx == selfIdx) {
            continue;
        }

        index = MBX_TABLE_IDX(loopIdx, selfIdx);

        if (((REG32(MAILBOX_STATUS(index)) != 0) && 
             (REG32(MAILBOX_IRQENABLE_SET(index)) & 
              MAILBOX_REG_VAL(SUBMBX_IDX(index))))) {
            table = &(InterruptBenelli_module->fxnTable[PROCID(loopIdx)]);
            (table->func)(table->arg);
        }
    }
}

/*
 */
/*
 *  @(#) ti.sdo.ipc.family.vayu; 1, 0, 0, 0,; 11-7-2012 13:10:00; /db/vtree/library/trees/ipc/ipc-i09/src/ xlibrary

 */

