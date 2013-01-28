Examples Overview
-----------------
notify: The example has CORE0 send an interrupt to the DSP. The DSP
receives the interrupt, unblocks a Task that sends an interrupt back to CORE0. The callback function 
registered to the incoming notification from the DSP re-sends another event--this time to CORE1. 
CORE1 receives the notification and 'replies' in the same manner as the DSP.  Once CORE0 receives 
a reply from CORE1, CORE0 sends another interrupt to the DSP and this cycle repeats NUMLOOP times.
 
message: The example has CORE0 first send a message to CORE1.  CORE1 waits for this message and 
replies back with the message.  CORE0 then sends a message to the DSP and awaits a reply in the 
same manner. This cycle is repeated NUMLOOP times.

Note: the Host is not included in this example because BIOS 
      does not run on it.

Building the example with XDC
-----------------------------
If using the default config.bld (packages\etc\config.bld.default), make
sure that the M3 and C64T targets are not commented out and run "xdc" in this
directory (e.g. packages\ti\sdo\ipc\examples\multicore\omap4430). 
Build.targets = [
                    //C64P,
                    //C67P,
                    //C674,
                    C64T,
                    //Arm9,
                    M3,
                ];

Refer to the User_install.pdf for details about setting up the config.bld 
and build environment.
                
How to run example
------------------
1. Load and run the core0 image on the Cortex M3 (Core 0) first.
   image: ti_sdo_ipc_examples_platforms_omap4430_core0\debug\notify_core0.xm3
   
2. After the core0 image has reached main(), load and run the core1 image 
   on the Cortex M3 (Core 1):
   ti_sdo_ipc_examples_platforms_omap4430_core1\debug\notify_core1.xm3
   
3. Load and run the dsp image on the DSP (C64T).
   image: ti_sdo_ipc_examples_platforms_omap4430_dsp\debug\notify_dsp.x64T

Note: The CORE0 processor must be run first because it initializes the shared
      memory to zero.  It also must be ran because core 0 must reach main()
      before core 1 can be loaded and run.

Expected output
---------------
Refer to the *.k files for the expected output for each application.

* Note: DSP/Host to CORE1 notification is currently not supported since CORE1
  cannot currently access the mailbox.
  CORE0 to CORE1 (inter-M3) notification is supported since the cores have
  their own mechanism for inter-core interrupts and thus bypass the mailbox
  subsystem altogether.

