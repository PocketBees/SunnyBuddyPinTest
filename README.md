SunnyBuddyPinTest
=================

Uses the Fault, and Charge pins on the Sunny Buddy to monitor battery status.

The Sunny Buddy comes with a couple pins to monitor battery status:
Fault and Charge.

The Charge pin is pulled low when the battery capacity can use
additional charge (1/10 of full capacity).

If the Fault pin senses a "bad battery fault", or a temperature  fault
while the battery is connected, the pin will be pulled low to signify a
"bad battery".

The pin assignments are:

Fault   -- PIN 8

CHRG -- PIN 9

GND   -- ARDUINO GND

The Pin Mapping is arbitrary, you can use whichever pin's you'd like. Just be sure to change the Code in the appropriate areas.
