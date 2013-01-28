Examples Overview
-----------------
notify: The example has the DSP and HOST processors send notifications in a 
loop.

message: The example has the DSP and HOST processors send messages in a loop.

Building the example with XDC
-----------------------------
If using the default config.bld (packages\etc\config.bld.default), make
sure that the A8F and C64P targets are not commented out and run "xdc" in this
directory (e.g. packages\ti\sdo\ipc\examples\multicore\omap3530). 
Build.targets = [
                    C64P,
                    A8F,
                ];

Refer to the User_install.pdf for details about setting up the config.bld 
and build environment.
                
How to run example
------------------
Build and load both images (DSP, HOST) on their respective cores.
Run each of the cores sequentially (in any order) or simultaneously.

Note: Remember to take the DSP out of reset before loading.

Expected output
---------------
Refer to the *.k files for the expected output for each application.

