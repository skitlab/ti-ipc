/*
 *  Copyright 2012 by Texas Instruments Incorporated.
 *
 */

/*!
 * File generated by platform wizard. DO NOT MODIFY
 *
 */

metaonly module Platform inherits xdc.platform.IPlatform {

    config ti.platforms.generic.Platform.Instance CPU =
        ti.platforms.generic.Platform.create("CPU", {
            clockRate:      600,                                       
            catalogName:    "ti.catalog.arm.cortexa8",
            deviceName:     "TMS320TI811X",
            externalMemoryMap:
           [
                ["VECTORS",
                     {
                        base: 0x00000000,                    
                        space: "code/data",
                        name: "VECTORS",
                        len: 0x00010000,
                        access: "RWX",
                     }
                ],
                ["DDR_HOST",
                     {
                        base: 0x80000000,
                        space: "code/data",
                        name: "DDR_HOST",
                        len: 0x0B000000,
                        access: "RWX",
                     }
                ],
                ["DDR_SR0",
                     {
                        base: 0x8E000000,
                        space: "code/data",
                        name: "DDR_SR0",
                        len: 0x01000000,
                        access: "RWX",
                     }
                ],
           ],

    });

instance :

    override config string codeMemory  = "DDR_HOST";
    override config string dataMemory  = "DDR_HOST";
    override config string stackMemory = "DDR_HOST";

}
/*
 *  @(#) ti.sdo.ipc.examples.platforms.evmTI811X.host; 1,0,0,; 11-7-2012 13:12:19; /db/vtree/library/trees/ipc/ipc-i09/src/ xlibrary

 */

