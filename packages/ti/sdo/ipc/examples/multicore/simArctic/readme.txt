Examples Overview
-----------------
notify: The example has the ARP32, DSP processors send notifications 
in a loop.

message: The example has the ARP32, DSP processors send messages 
in a loop.

Building the example with XDC
-----------------------------
If using the default config.bld (packages\etc\config.bld.default), make
sure that the T16 and C674 targets are not commented out and run "xdc" in this
directory (e.g. packages\ti\sdo\ipc\examples\multicore\evmDM8168). 
Build.targets = [
                    C674,
                    T16,
                ];

Refer to the User_install.pdf for details about setting up the config.bld 
and build environment.
                
How to run example
------------------
Build and load all 4 images (ARP32, DSP, HOST) on 2 cores.
Run each of the cores sequentially (in any order) or simultaneously.

Note: Remember to take the processors out of reset before loading.

Expected output
---------------
Refer to the *.k files for the expected output for each application.

