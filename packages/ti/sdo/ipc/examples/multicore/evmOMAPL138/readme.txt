Examples Overview
-----------------
notify: The example has arm send an interrupt to the dsp. The dsp
receives the interrupt, unblocks a Task that sends an interrupt back to arm 
and the whole thing starts all over.

message: The example has dsp send a message to the arm. arm receives
the message and sends it back to dsp and the whole thing starts all over.

Building the example with XDC
-----------------------------
If using the default config.bld (packages\etc\config.bld.default), make
sure that the C674 and Arm9 targets are not commented out and run "xdc" in this
directory (e.g. packages\ti\sdo\ipc\examples\multicore\evmOMAPL138). 
Build.targets = [
                    //C28_large,
                    //C64,
                    //C64P,
                    //C67P,
                    C674,
                    Arm9,
                    //M3,
                    //Win32,
                ];

Refer to the User_install.pdf for details about setting up the config.bld 
and build environment.
                
How to run example
------------------
1. Load and run the arm image on arm first.
   image: ti_sdo_ipc_examples_platforms_evmOMAPL138_arm\debug\notify_arm.xe9
   
2. After the arm image has reached main(), load and run the dsp image
   on the dsp:
   image: ti_sdo_ipc_examples_platforms_evmOMAPL138_dsp\debug\notify_dsp.x674
  
3. Communication start to go around in circles (arm -> dsp -> arm -> dsp...)
   Where in the notify example, communication is the notify events. In the 
   message example, it is MessageQ messages.

Note: arm must be run first because it initializes the shared
      memory to zero.  It also must be ran because arm must reach main()
      before dsp can be loaded and run.

Expected output
---------------
Refer to the *.k files for the expected output for each application.
