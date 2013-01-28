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
 *  ======== IpcProductView.xdc ========
 */

metaonly module IpcProductView inherits xdc.tools.product.IProductView {
        
    config ProductElemDesc ti_sdo_io_Stream;
    config ProductElemDesc ti_sdo_io_DriverTable;
    config ProductElemDesc ti_sdo_io_converters_Transformer;

    config ProductElemDesc ti_sdo_io_drivers_Generator;
    config ProductElemDesc ti_sdo_io_drivers_IomAdapter;
    
    config ProductElemDesc ti_sdo_ipc_heaps_HeapMemMP;
    config ProductElemDesc ti_sdo_ipc_heaps_HeapBufMP;
    config ProductElemDesc ti_sdo_ipc_heaps_HeapMultiBufMP;

    config ProductElemDesc ti_sdo_ipc_Ipc;
    config ProductElemDesc ti_sdo_ipc_ListMP;
    config ProductElemDesc ti_sdo_ipc_GateMP;
    config ProductElemDesc ti_sdo_ipc_MessageQ;
    config ProductElemDesc ti_sdo_ipc_Notify;
    config ProductElemDesc ti_sdo_ipc_SharedRegion;

    config ProductElemDesc ti_sdo_utils_List;
    config ProductElemDesc ti_sdo_utils_NameServer;
    config ProductElemDesc ti_sdo_utils_MultiProc;

/* groups */

    config ProductElemDesc multicoreGroup;
    config ProductElemDesc ioGroup;
    config ProductElemDesc utilsGroup;

/* sub groups */

    config ProductElemDesc heapsGroup;

/* product */

    config ProductElemDesc ipcProduct;
};
/*
 *  @(#) ti.sdo.ipc.productview; 1,0,0,; 11-7-2012 13:10:36; /db/vtree/library/trees/ipc/ipc-i09/src/ xlibrary

 */

