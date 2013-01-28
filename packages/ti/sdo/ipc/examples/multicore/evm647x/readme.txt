Examples Overview
-----------------

notify_multicore: This is a single image 'Notify' example that sets the MultiProc
id during the BIOS boot sequence. The example demonstrates using Notify in a  
very basic way.  Each processor generally blocks in a Task until a notification 
is received.  This notifcation causes the registered callback function to
execute. This, in turn, unblocks the Task that sends a notification to the next
processor in the notification chain.

message_multicore: This is a single image 'MessageQ' example that sets the 
MultiProc id during the BIOS boot sequence.  CORE0 creates a heap that is shared
by all the other cores and is registered with each core's MessageQ instance.   
Each processor generally blocks in MessageQ_get until a message from the 
previous core in the sequence is received.  The message is then forwarded to the
next core in the sequence.  The message is passed along in a loop NUMLOOP times
before the application terminates.

Building the example with XDC
-----------------------------
If using the default config.bld (packages\etc\config.bld.default), make
sure that the C64P target is not commented out and run "xdc" in this
directory (e.g. packages\ti\sdo\ipc\examples\multicore\[DEVICENAME]). 
Build.targets = [
                    //C28_large,
                    //C64,
                    C64P,
                    //C67P,
                    //C674,
                    //Arm9,
                    //M3,
                    //Win32,
                ];

Refer to the User_install.pdf for details about setting up the config.bld 
and build environment.
                
How to run example
------------------
1. Load and run the same image on all the cores. I.e. load the image: 
   ti_sdo_ipc_examples_platforms_[DEVICENAME]_core0\debug\notify_multicore.x64P
   on CORE0, CORE1 ... COREN

2. Communication starts to go around in a loop 
   Where running the notify example, communication adopts the form of notify 
   events. In the message example, communication is a MessageQ message that is
   put on and retreived from a queue.

Expected output
---------------
Refer to the *.k files for the expected output for each application.
