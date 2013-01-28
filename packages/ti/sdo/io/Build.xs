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
 *  ======== Build.xs ========
 *
 */

var BIOS = null;
var Build = null;

/*
 *  ======== module$use ========
 */
function module$use()
{
    BIOS = xdc.module("ti.sysbios.BIOS");
    Build = this;

    if ("ti.sdo.ipc" in xdc.om) {
        return;
    }

    /* inform getLibs() about location of library */
    switch (BIOS.libType) {
        case BIOS.LibType_Instrumented:
            this.$private.libraryName = "/io.a" + Program.build.target.suffix;
            this.$private.outputDir = this.$package.packageBase + "lib/"
                        + (BIOS.smpEnabled ? "smpio/instrumented/" : "io/instrumented/");
            break;

        case BIOS.LibType_NonInstrumented:
            this.$private.libraryName = "/io.a" + Program.build.target.suffix;
            this.$private.outputDir = this.$package.packageBase + "lib/"
                        + (BIOS.smpEnabled ? "smpio/nonInstrumented/" : "io/nonInstrumented/");
            break;

        case BIOS.LibType_Custom:
            this.$private.libraryName = "/io.a" + Program.build.target.suffix;
            var SourceDir = xdc.useModule("xdc.cfg.SourceDir");
            /* if building a pre-built library */
            if (BIOS.buildingAppLib == false) {
                var appName = Program.name.substring(0, Program.name.lastIndexOf('.'));
                this.$private.libDir = this.$package.packageBase + Build.libDir;
                if (!java.io.File(this.$private.libDir).exists()) {
                    java.io.File(this.$private.libDir).mkdir();
                }
            }
            /*
             * If building an application in CCS or package.bld world
             * and libDir has been specified
             */
            if ((BIOS.buildingAppLib == true) && (Build.libDir !== null)) {
                SourceDir.outputDir = Build.libDir;
                var src = SourceDir.create("io");
                src.libraryName = this.$private.libraryName.substring(1);
                this.$private.outputDir = src.getGenSourceDir();
            }
            else {
                var curPath = java.io.File(".").getCanonicalPath();
                /* If package.bld world AND building an application OR pre-built lib */
                if (java.io.File(curPath).getName() != "configPkg") {
                    var appName = Program.name.substring(0, Program.name.lastIndexOf('.'));
                    appName = appName + "_p" + Program.build.target.suffix + ".src";
                    SourceDir.outputDir = "package/cfg/" + appName;
                    SourceDir.toBuildDir = ".";
                    var src = SourceDir.create("io");
                    src.libraryName = this.$private.libraryName.substring(1);
                    this.$private.outputDir = src.getGenSourceDir();
                }
                /* Here ONLY if building an application in CCS world */
                else {
                    /* request output source directory for generated files */
                    var appName = Program.name.substring(0, Program.name.lastIndexOf('.'));
                    appName = appName + "_" + Program.name.substr(Program.name.lastIndexOf('.')+1);
                    SourceDir.toBuildDir = "..";
                    var src = SourceDir.create("io/");
                    src.libraryName = this.$private.libraryName.substring(1);

                    /* save this directory in our private state (to be read during
                    * generation, see Gen.xdt)
                    */
                    this.$private.outputDir = src.getGenSourceDir();
                }
            }
            break;
    }
}

/*
 * Add pre-built Instrumented and Non-Intrumented release libs
 */

var ioSources    = "io/DriverTable.c " +
                   "io/Stream.c " +
                   "io/drivers/IomAdapter.c " +
                   "io/drivers/Generator.c " +
                   "io/converters/DriverAdapter.c " +
                   "io/converters/Transformer.c " +
                   "io/converters/NullConverter.c ";

var utilsSources = "utils/MultiProc.c " +
                   "utils/List.c " +
                   "utils/NameServerRemoteNull.c " +
                   "utils/NameServer.c ";


var cList = {
    "C28_large"         : ioSources + utilsSources,
    "C28_float"         : ioSources + utilsSources,
    "MSP430"            : ioSources + utilsSources,
    "MSP430X"           : ioSources + utilsSources,
    "MSP430X_small"     : ioSources + utilsSources,
    "C64P"              : ioSources + utilsSources,
    "C64P_big_endian"   : ioSources + utilsSources,
    "C674"              : ioSources + utilsSources,
    "C67P"              : ioSources + utilsSources,
    "C64T"              : ioSources + utilsSources,
    "C66"               : ioSources + utilsSources,
    "C66_big_endian"    : ioSources + utilsSources,
    "ARP32"             : ioSources + utilsSources,
    "ARP32_far"         : ioSources + utilsSources,
    "Arm9"              : ioSources + utilsSources,
    "A8F"               : ioSources + utilsSources,
    "A8Fnv"             : ioSources + utilsSources,
    "M3"                : ioSources + utilsSources,
    "M4"                : ioSources + utilsSources,
    "M4F"               : ioSources + utilsSources,
    "R4t_big_endian"    : ioSources + utilsSources,
    "R4Ft_big_endian"   : ioSources + utilsSources,
};

var ioPackages = [
    "ti.sdo.io",
    "ti.sdo.io.drivers",
    "ti.sdo.io.converters",
    "ti.sdo.utils",
];

var asmListNone = [
];

var asmList = {
    "C28_large"         : asmListNone,
    "C28_float"         : asmListNone,
    "MSP430"            : asmListNone,
    "MSP430X"           : asmListNone,
    "MSP430X_small"     : asmListNone,
    "C64P"              : asmListNone,
    "C64P_big_endian"   : asmListNone,
    "C674"              : asmListNone,
    "C67P"              : asmListNone,
    "C64T"              : asmListNone,
    "C66"               : asmListNone,
    "C66_big_endian"    : asmListNone,
    "ARP32"             : asmListNone,
    "ARP32_far"         : asmListNone,
    "Arm9"              : asmListNone,
    "A8F"               : asmListNone,
    "A8Fnv"             : asmListNone,
    "M3"                : asmListNone,
    "M4"                : asmListNone,
    "M4F"               : asmListNone,
    "R4t_big_endian"    : asmListNone,
    "R4Ft_big_endian"   : asmListNone,
};

var cFiles = {
    "ti.sdo.io.DriverTypes" :
        { cSources: [] },
}

/*
 *  ======== getCFiles ========
 */
function getCFiles(target)
{
    var BIOS = xdc.module("ti.sysbios.BIOS");
    var localSources = "io/IO.c ";

    /*
     * logic to trim the C files down to just what the application needs
     * 3/2/11 disabled for now ...
     */
    if (BIOS.buildingAppLib == true) {
        for each (var mod in Program.targetModules()) {
            var mn = mod.$name;
            var pn = mn.substring(0, mn.lastIndexOf("."));
            var packageMatch = false;

            /* sanity check package path */
            for (var i = 0; i < ioPackages.length; i++) {
                if (pn == ioPackages[i]) {
                    packageMatch = true;
                    break;
                }
            }

            if (packageMatch && !mn.match(/Proxy/)) {
                if (cFiles[mn] === undefined) {
                    var prefix = mn.substr(mn.indexOf("sdo")+4);
                    var mod = mn.substr(mn.lastIndexOf(".")+1);
                    prefix = prefix.substring(0, prefix.lastIndexOf('.')+1);
                    prefix = prefix.replace(/\./g, "/");
                    localSources += prefix + mod + ".c ";
                }
                else {
                    for (i in cFiles[mn].cSources) {
                        var prefix = mn.substr(mn.indexOf("sdo")+8);
                        prefix = prefix.substring(0, prefix.lastIndexOf('.')+1);
                        prefix = prefix.replace(/\./g, "/");
                        localSources += prefix + cFiles[mn].cSources[i] + " ";
                    }
                }
            }
        }
    }
    else {
        localSources += cList[target];
    }

    /* remove trailing " " */
    localSources = localSources.substring(0, localSources.length-1);

    return (localSources);
}

/*
 *  ======== getAsmFiles ========
 */
function getAsmFiles(target)
{
    return (asmList[target]);
}

/*
 *  ======== getDefs ========
 */
function getDefs()
{
    var Defaults = xdc.module('xdc.runtime.Defaults');
    var Diags = xdc.module("xdc.runtime.Diags");
    var BIOS = xdc.module("ti.sysbios.BIOS");

    var defs = "";

    if ((BIOS.assertsEnabled == false) ||
        ((Defaults.common$.diags_ASSERT == Diags.ALWAYS_OFF)
            && (Defaults.common$.diags_INTERNAL == Diags.ALWAYS_OFF))) {
        defs += " -Dxdc_runtime_Assert_DISABLE_ALL";
    }

    if (BIOS.logsEnabled == false) {
        defs += " -Dxdc_runtime_Log_DISABLE_ALL";
    }

    return (defs);
}

/*
 *  ======== getLibs ========
 */
function getLibs(pkg)
{
    var BIOS = xdc.module("ti.sysbios.BIOS");

    if (BIOS.libType != BIOS.LibType_Debug) {
        return null;
    }

    var lib = "";
    var name = pkg.$name + ".a" + prog.build.target.suffix;

    if (BIOS.smpEnabled == true) {
        lib = "lib/smpio/debug/" + name;
    }
    else {
        lib = "lib/io/debug/" + name;
    }

    if (java.io.File(pkg.packageBase + lib).exists()) {
        return lib;
    }

    /* could not find any library, throw exception */
    throw Error("Library not found: " + name);
}


/*
 *  ======== getProfiles ========
 *  Determines which profiles to build for.
 *
 *  Any argument in XDCARGS which does not contain platform= is treated
 *  as a profile. This way multiple build profiles can be specified by
 *  separating them with a space.
 */
function getProfiles(xdcArgs)
{
    /*
     * cmdlProf[1] gets matched to "whole_program,debug" if
     * ["abc", "profile=whole_program,debug"] is passed in as xdcArgs
     */
    var cmdlProf = (" " + xdcArgs.join(" ") + " ").match(/ profile=([^ ]+) /);

    if (cmdlProf == null) {
        /* No profile=XYZ found */
        return [];
    }

    /* Split "whole_program,debug" into ["whole_program", "debug"] */
    var profiles = cmdlProf[1].split(',');

    return profiles;
}

/*
 *  ======== buildLibs ========
 *  This function generates the makefile goals for the libraries
 *  produced by a ti.sysbios package.
 */
function buildLibs(objList, relList, filter, xdcArgs)
{
    for (var i = 0; i < xdc.module('xdc.bld.BuildEnvironment').targets.length; i++) {
        var targ = xdc.module('xdc.bld.BuildEnvironment').targets[i];

        /* skip target if not supported */
        if (!supportsTarget(targ, filter)) {
            continue;
        }

        var profiles = getProfiles(xdcArgs);

        /* If no profiles were assigned, use only the default one. */
        if (profiles.length == 0) {
            profiles[0] = "debug";
        }

        for (var j = 0; j < profiles.length; j++) {
            var ccopts = "";
            var asmopts = "";

            if (profiles[j] == "smp") {
                var libPath = "lib/smpio/debug/";
                ccopts += " -Dti_sysbios_BIOS_smpEnabled__D=TRUE";
                asmopts += " -Dti_sysbios_BIOS_smpEnabled__D=TRUE";
            }
            else {
                var libPath = "lib/io/debug/";
                /* build all package libs using Hwi macros */
                ccopts += " -Dti_sysbios_Build_useHwiMacros";
                ccopts += " -Dti_sysbios_BIOS_smpEnabled__D=FALSE";
                asmopts += " -Dti_sysbios_BIOS_smpEnabled__D=FALSE";
            }

            /* confirm that this target supports this profile */
            if (targ.profiles[profiles[j]] !== undefined) {
                var profile = profiles[j];
                var lib = Pkg.addLibrary(libPath + Pkg.name,
                                targ, {
                                profile: profile,
                                copts: ccopts,
                                aopts: asmopts,
                                releases: relList
                                });
                lib.addObjects(objList);
            }
        }
    }
}


/*
 *  ======== supportsTarget ========
 *  Returns true if target is in the filter object. If filter
 *  is null or empty, that's taken to mean all targets are supported.
 */
function supportsTarget(target, filter)
{
    var list, field;

    if (filter == null) {
        return true;
    }

    /*
     * For backwards compatibility, we support filter as an array of
     * target names.  The preferred approach is to specify filter as
     * an object with 'field' and 'list' elements.
     *
     * Old form:
     *     var trgFilter = [ "Arm9", "Arm9t", "Arm9t_big_endian" ]
     *
     * New (preferred) form:
     *
     *     var trgFilter = {
     *         field: "isa",
     *         list: [ "v5T", "v7R" ]
     *     };
     *
     */
    if (filter instanceof Array) {
        list = filter;
        field = "name";
    }
    else {
        list = filter.list;
        field = filter.field;
    }

    if (list == null || field == null) {
        throw("invalid filter parameter, must specify list and field!");
    }

    if (field == "noIsa") {
        if (String(','+list.toString()+',').match(','+target["isa"]+',')) {
            return (false);
        }
        return (true);
    }

    /*
     * add ',' at front and and tail of list and field strings to allow
     * use of simple match API.  For example, the string is updated to:
     * ',v5T,v7R,' to allow match of ',v5t,'.
     */
    if (String(','+list.toString()+',').match(','+target[field]+',')) {
        return (true);
    }

    return (false);
}
/*
 *  @(#) ti.sdo.io; 1, 0, 0, 0,; 11-7-2012 13:08:01; /db/vtree/library/trees/ipc/ipc-i09/src/ xlibrary

 */

