/* --COPYRIGHT--,BSD
 * Copyright (c) $(CPYYEAR), Texas Instruments Incorporated
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
 * --/COPYRIGHT--*/

#include <xdc/std.h>
#include <xdc/runtime/System.h>

#include <ti/ipc/SharedRegion.h>
#include <ti/ipc/Notify.h>
#include <ti/ipc/Ipc.h>
#include <ti/ipc/MultiProc.h>
#include <math.h>
 
#include "bench_common.h"

/*
 *  ======== getStats ========
 */
Void getStats(UInt32 *values, UInt numVals, Statistics *stats ) 
{
    UInt i;
    Double sum = 0;
    stats->numVals = numVals;
    stats->min = values[0];
    stats->minIndex = 0;
    stats->max = values[0];
    stats->maxIndex = 0;
    for (i = 0; i < numVals; i++) {
        sum += (Double)values[i];
        if (values[i] < stats->min) {
            stats->min = values[i];
            stats->minIndex = i;
        }
        else if (values[i] > stats->max) {
            stats->max = values[i];
            stats->maxIndex = i;
        }
    }
    stats->mean = sum / (Double)numVals;
    sum = 0;
    for (i = 0; i < numVals; i++) {
        sum += pow((Double)values[i] - stats->mean, 2);
    }
    stats->stddev = sqrt(sum / (Double)numVals);
}


/*
 *  ======== attachAll ========
 */
Void attachAll(UInt numCores) 
{
    SharedRegion_Entry entry;
    Int status;
    UInt i;
    
    /* Call Ipc_start() */
    status = Ipc_start();
    if (status < 0) {
        System_abort("Ipc_start failed!\n");
    }
    
    /* get region 0 information */
    SharedRegion_getEntry(0, &entry);

    /* if entry is not valid then return */
    if (entry.isValid == FALSE) {
        return;
    }
    
    /* Must attach to owner first to get default GateMP and HeapMemMP */
    if (MultiProc_self() != entry.ownerProcId) {
        do {
            status = Ipc_attach(entry.ownerProcId);
        } while (status < 0);
    }

    /* Loop to attach to all other processors */
    for (i = 0; i < numCores; i++) {
        if ((i == MultiProc_self()) || (i == entry.ownerProcId)) {
            continue;
        }

        if (Notify_numIntLines(i) == 0) {
            continue;
        }

        /* call Ipc_attach for every remote processor */
        do {
            status = Ipc_attach(i);
        } while (status < 0);
    }
}
