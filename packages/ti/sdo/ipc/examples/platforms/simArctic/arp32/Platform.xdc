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
/*!
 * File generated by platform wizard. 
 *
 */

metaonly module Platform inherits xdc.platform.IPlatform {

    config ti.platforms.generic.Platform.Instance plat =
        ti.platforms.generic.Platform.create("plat", {
            clockRate:      250.0,                                       
            catalogName:    "ti.catalog.arp32",
            deviceName:     "Arctic",
            externalMemoryMap:[
                ["ARP32VECS", {
                    comment: "External memory for ARP32 interrupt vectors",
                    name:  "ARP32VECS",
                    base:  0x80000000,
                    len:   0x00000100,
                    page:  0,
                    space: "code/data"
                }],

                ["ARP32", {
                    comment: "External memory for ARP32 use",
                    name:  "ARP32",
                    base:  0x80000100,
                    len:   0x01ffff00,
                    page:  1,
                    space: "code/data"
                }],
                
                ["DSP", {
                    comment: "External memory for DSP use",
                    name:  "DSP",
                    base:  0x82000000,
                    len:   0x02000000,
                    page:  1,
                    space: "code/data"
                }],

                ["SHARED", {
                    comment: "Shared external memory",
                    name:  "SHARED",
                    base:  0x84000000,
                    len:   0x0C000000,
                    page:  1,
                    space: "code/data"
                }]
            ]
    });
    
instance :
    
    override config string codeMemory = "ARP32";
    override config string dataMemory = "ARP32";
    override config string stackMemory = "ARP32";
    
}
/*
 *  @(#) ti.sdo.ipc.examples.platforms.simArctic.arp32; 1,0,0,; 11-7-2012 13:12:56; /db/vtree/library/trees/ipc/ipc-i09/src/ xlibrary

 */

