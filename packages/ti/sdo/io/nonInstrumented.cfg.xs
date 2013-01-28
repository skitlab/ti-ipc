/*
 *  Copyright 2012 by Texas Instruments Incorporated.
 *
 */

var BIOS = xdc.module('ti.sysbios.BIOS');

BIOS.libType = BIOS.LibType_Custom;
BIOS.buildingAppLib = false;
BIOS.assertsEnabled = false;
BIOS.logsEnabled = false;

var SourceDir = xdc.module("xdc.cfg.SourceDir");
SourceDir.verbose = 1;

/* suppress un-placed sections warning from m3 Hwi.meta$init() */
if (Program.sectMap[".vecs"] !== undefined) {
    Program.sectMap[".vecs"].type = "DSECT";
}
if (Program.sectMap[".resetVecs"] !== undefined) {
    Program.sectMap[".resetVecs"].type= "DSECT";
}

/*
 *  @(#) ti.sdo.io; 1, 0, 0, 0,; 11-7-2012 13:08:02; /db/vtree/library/trees/ipc/ipc-i09/src/ xlibrary

 */

