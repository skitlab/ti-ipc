There are two examples in the ipc\examples\singlecore directory
that can run on all supported targets. For a full description of 
the examples, refer to the top of the respective source files.

notify_loopback: Shows how to use Notify via the NotifyDriverLoopback driver.
                 See notify_loopback.k file for expected output.
                 
message:         Shows how to use MessageQ between Tasks.
                 See message.k file for expected output.
                 
Caveats: These examples are generic by design. Additionally configuration
might be necessary to run on a specific platform. 
For example to run on core 1 of Ducati, the following lines must be added
to the configuration file:

    var Core = xdc.useModule('ti.sysbios.family.arm.ducati.Core');
    Core.id = 1;