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
 *   Generate driver starter files
 *
 *   This command line tool helps driver writers by generating starter
 *   files. The driver writer can then fill in driver specific code
 *   and rebuild.
 *
 *   required arguments are the output directory name "-o" and the module 
 *   name "-m".
 *
 *   The name of the module and the package name is derived from the module 
 *   name. For e.g for -m drivers.io.Uart the module name is Uart and the
 *   package name is drivers.dma. 
 *
 *   The "-o" option must inlcude package path. For the example above
 *   -o "C:\Product\drivers\dma.
 */
metaonly module Main inherits xdc.tools.mkpkg.ICmd {
    /*!
     *  ======== main ========
     *  main() function, invoked from the command line.
     *
     *  Parses command line arguments then calls {@link #mkpkg()}.
     */
    override Int main(String arguments[]);

    config String usage[] = [
        '-m modName -o outputDir',
        '[--help]',
    ];

instance:
    
    /*!
     * Name of the generated module. You need to specify package name within
     * the modName.
     */
    @CommandOption("m")
    config String modName;

}
/*
 *  @(#) ti.sdo.io.driverTemplate; 0, 00, 00,; 11-7-2012 13:08:18; /db/vtree/library/trees/ipc/ipc-i09/src/ xlibrary

 */

