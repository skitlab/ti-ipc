Registering myFxn1 & myArg1 to event #9..
Registering myFxn2 & myArg2 to event #9..
Sending event #9 (myFxn1 and myFxn2 should run)
myFxn1: eventNo: #9, arg: 12345, payload: aaaaa
myFxn2: eventNo: #9, arg: 67890, payload: aaaaa
Unregistering myFxn1 + myArg1
Sending event #9 (myFxn2 should run)
myFxn2: eventNo: 9, arg: 67890, payload: bbbbb
Disabling event #9:
Event #9 is now disabled
Sending event #9 (nothing should happen)
Enabling event #9:
Event #9 is now enabled
Sending event #9 (myFxn2 should run)
myFxn2: eventNo: #9, arg: 67890, payload: bbbbb
Test completed