/*
 *  Copyright 2012 by Texas Instruments Incorporated.
 *
 */

/*
 *  ======== Platform.xdc ========
 */

/*!
 *  ======== Platform ========
 *  Platform support for the evm6657
 */
metaonly module Platform inherits xdc.platform.IPlatform
{
    readonly config xdc.platform.IPlatform.Board BOARD = {
        id:             "0",
        boardName:      "evm6657",
        boardFamily:    "evm6657",
        boardRevision:  null,
    };
        
    readonly config xdc.platform.IExeContext.Cpu CPU = {
        id:             "0",
        clockRate:      1000,
        catalogName:    "ti.catalog.c6000",
        deviceName:     "TMS320C6657",
        revision:       "1.0",
    };
    
instance:

    override readonly config xdc.platform.IPlatform.Memory
        externalMemoryMap[string] = [
            ["DDR3", {name: "DDR3", base: 0x80000000, len: 0x20000000}],
    ];

    override config string codeMemory  = "L2SRAM";
    override config string dataMemory  = "L2SRAM";
    override config string stackMemory = "L2SRAM";

    config String l1DMode = "32k";
    config String l1PMode = "32k";
    config String l2Mode = "256k";
};
/*
 *  @(#) ti.sdo.ipc.examples.platforms.evm6657.core0; 1, 0, 0, 0,; 11-7-2012 13:11:38; /db/vtree/library/trees/ipc/ipc-i09/src/ xlibrary

 */

