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
 *  ======== Examples.xdc ========
 */
import xdc.tools.product.IProductTemplate;

/*
 *  ======== Examples ========
 *  NOTE: deviceId filtering is necessary to eliminate Generic and Custom
 *  device which are not currently supported for C2000 devices.
 *
 *  To find all "abstract" deviceId's in a CCS product you can use the
 *  following:
 *      cd <CCS_install_directory>/eclipse
 *      find . -name "*.xml" -exec grep com.ti.ccstudio.deviceModel {} \;
 *
 *  The output will look something like:
 *              id="com.ti.ccstudio.deviceModel.C2000.CustomC2000Device"
 *              id="com.ti.ccstudio.deviceModel.C2000.GenericC28xxDevice"
 *              id="com.ti.ccstudio.deviceModel.C2000.GenericC27xxDevice"
 *              id="com.ti.ccstudio.deviceModel.C5400.CustomC5400Device"
 *                  :
 */
metaonly module Examples inherits IProductTemplate 
{
    config IProductTemplate.TemplateGroup root = {
        id          : "ti.sdo.ipc.examples.root",
        name        : "IPC and I/O Examples",
        description : "IPC and I/O Examples"
    };

    config IProductTemplate.TemplateGroup generic = {
        id          : "ti.sdo.ipc.examples.root.generic",
        name        : "Generic IPC and I/O Examples",
        description : "Generic IPC and I/O Examples",
        groups      : ["ti.sdo.ipc.examples.root"]
    };

    override config IProductTemplate.TemplateGroup templateGroupArr [] =
        [root, generic];

    config IProductTemplate.TemplateInfo stream = {
        title: "I/O Stream",
        fileList: [
            { path: "./io/stream.c" },
            { path: "./io/stream.cfg" },
        ],
        description: "This example shows the use of ti.sdo.io.Stream module to demonstrate IO streaming using a driver. In this example we use the ti.sdo.io.Generator driver module. This example uses the Stream_ISSUE_RECLAIM model. A single task gets data from an input channel and sends the data out to an output channel.",
        buildProfile: "release",
        isHybrid: true,
        filterArr: [
            /* exclude MSP430 devices */
            {deviceFamily:"C2000", toolChain:"TI"},
            {deviceFamily:"C6000", toolChain:"TI"},
            {deviceFamily:"ARP32", toolChain:"TI"},
            {deviceFamily:"ARM", toolChain:"TI"},
        ],
        requiredProducts: [ "com.ti.rtsc.SYSBIOS", "com.ti.rtsc.IPC" ],
        groups : ["ti.sdo.ipc.examples.root"],
        linkerCommandFile: ""
    };

    override config IProductTemplate.TemplateInfo templateArr[] = [
        stream,
    ];
}
/*
 *  @(#) ti.sdo.ipc.examples; 1,0,0,; 11-7-2012 13:14:34; /db/vtree/library/trees/ipc/ipc-i09/src/ xlibrary

 */

