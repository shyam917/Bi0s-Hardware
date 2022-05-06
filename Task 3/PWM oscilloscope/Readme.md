# PWM(Pulse Width Modulation)
The basic principle of pulse width modulation (PWM) is to control the switching of the switching device of the inverter circuit, so that the output terminal obtains a series of pulses with equal amplitude, and these pulses are used to replace the sine wave or the desired waveform. That is, a plurality of pulses are generated in a half cycle of the output waveform, and the equivalent voltage of each pulse is a sinusoidal waveform, and the obtained output is smooth and less low-order harmonics. Modulating the width of each pulse according to certain rules can not only change the output voltage of the inverter circuit, but also change the output frequency.

# How it works?
The LEDs are current-controlled display devices. They are similar to signal diodes. This means the current flows through the LED when it is forward biased by an application of the appropriate voltage. 

In a forward-biased condition, the LED starts glowing. When the forward voltage is removed from the LED, the current stops flowing through it and the light stops glowing. The intensity of the light emitted by an LED depends on the current drawn by it. An LED typically requires 12 mA to 30 mA current for maximum illumination. Most LEDs draw 5 mA for normal illumination. 

The voltage-current characteristics of an LED are similar to signal diodes. In a forward-biased condition, the current through an LED increases based on the applied forward voltage. 

Arduino UNO has 6 PWM channels at pins 3, 5, 6, 9, 10, and 11 of the board. These channels can be used to output the PWM signal, which is an approximation of the analog voltage. The PWM signal can be generated on one of these pins using the analogWrite() function, bit-banging, or using the timer/counter. 

# Circuit Connection
Connect the digital I/O pin 9 from Arduino UNO with the anode of the LED. Then, connect the cathode of the LED with a series resistor of 1000 Ohms and ground the other terminal from the resistor. The DC supply voltage and ground can be given to the circuit from the 5V power pin and one of the ground pins of the Arduino UNO.


## TinkerCAD Implementation
![alttext](./Components%20PWM.png)
![alttext](./PWM%20Oscilloscope.png)
![alttext](./PWM%20Layout.png)

[TinkerCAD](https://www.tinkercad.com/things/a7jhw1z6jiA-pwm-oscilloscope/editel)

