/* --COPYRIGHT--,TI
 * Copyright (c) $(CPYYEAR)
 * Texas Instruments
 *
 *  All rights reserved.  Property of Texas Instruments
 *  Restricted rights to use, duplicate or disclose this code are
 *  granted through contract.
 * 
 * --/COPYRIGHT--

Benchmarks Overview: 
--------------

IPC ships with benchmark applications that can be used to measure MessageQ
and Notify latency between sets of homogenous processors.  Latency shall be
defined as the number of CPU cycles it takes for the message or notification
to travel from one processor to another. 

The notify_latency application sends notifications in a loop comprised of 2
or more homogenous cores. The amount of time required for a notification to
complete a loop is recorded.  Latency is computed (after benchmarking is
complete) by dividing the round-trip cycle count by the number of processors
in the notification loop.

The following operations are performed to benchmark notifications assuming
two cores, CORE0 and CORE1 in the loop:
    
    [Begin loop]
    1) Record timestamp (0)
    2) Notify_sendEvent on CORE0 to CORE1
    3) Enter notify callback ISR on CORE1
    4) Notify_sendEvent on CORE1 back to CORE0, pend waiting for a reply
    5) Enter notify callback ISR on CORE0
    6) Record timestamp (1)
    [Loop by repeating 2-6]

The message_latency application is very similar to the notify_latency
application, except communication in the loop is in the form of MessageQ 
messages.  The following operations are performed to benchmark notifications 
assuming two cores, CORE0 and CORE1 in the loop:
    
    [Begin loop]
    1) Record timestamp (0)
    2) MessageQ_put from CORE0 to CORE1. Wait for a new message in MessageQ_get
    3) MessageQ_get returns on CORE1.
    4) MessageQ_put a message back to CORE0
    5) MessageQ_get returns on CORE0
    6) Record timestamp (1)
    [Loop by repeating 2-6]

Running the benchmarks:
--------------
For homogenous systems (C6472, C6474, etc) create a single benchmark project 
using the benchmark example in the CCSv4 project wizard.  Load the single 
image on every core on the homogenous device.  On non-homogenous devices, 
create a project for every processor participating in the benchmark. Build and
load each image on their respective cores.

Once loaded, the cores can be run in any sequence or simultaneously.

General Tricks:
--------------
The following was done to improve performance

Enable cache (L1P, L1D)

Build options (big ones):
  whole_program_debug
  little endian
Configuration:
  Task.initStackFlag = false;  // prevents the addition Task hooks
  Diags = xdc.useModule("xdc.runtime.Diags");
  var Defaults = xdc.useModule('xdc.runtime.Defaults');
  Defaults.common$.diags_ASSERT = Diags.ALWAYS_OFF  // disable assert checking
  Defaults.common$.logger = null;  // reduce footprint
  var Semaphore     = xdc.useModule('ti.sysbios.ipc.Semaphore');
  Semaphore.supportsEvents = false;  // simplify Semaphore logic a little

  SharedRegion.translate = false //Disable pointer translation

