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
            clockRate:      200.0,                                       
            catalogName:    "ti.catalog.c6000",
            deviceName:     "OMAP3530",
            externalMemoryMap: 
           [          
                ["DDR", 
                     {
                        base: 0x80800000,                    
                        space: "code/data",
                        name: "DDR",
                        len: 0x800000,                    
                        access: "RWX",
                     }
                ],
                ["SHARED", 
                     {
                        base: 0x81000000,                    
                        space: "code/data",
                        name: "SHARED",
                        len: 0x800000,                    
                        access: "RWX",
                     }
                ],
           ],
          l2Mode:"64k",
          l1PMode:"32k",
          l1DMode:"32k",

    });
    
instance :
    
    override config string codeMemory  = "DDR";   
    override config string dataMemory  = "DDR";                                
    override config string stackMemory = "DDR";
    
}
/*
 *  @(#) ti.sdo.ipc.examples.platforms.omap3530.dsp; 1,0,0,; 11-7-2012 13:12:48; /db/vtree/library/trees/ipc/ipc-i09/src/ xlibrary

 */

