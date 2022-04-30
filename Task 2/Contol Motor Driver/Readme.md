# Control Motor Driver
![alt text](./_Control%20motor%20driver%20using%20Arduino%20UNO.png)
The following circuit was implemented in TinkerCad.
### The Materials needed are:
- Arduino UNO
- H-Bridge Motor Driver(L293D)
- 9V Battery
- Breadboard
- DC Motor(2)


## What is a Motor Control Driver?

Motor Control Drivers are devices that regulate motor speed, torque, and position outputs. The drive modifies the power input to the motor to achieve the desired output.
Drivers make sure motors use electricity efficiently.
Here in this task we are using an Arduino UNO and an L293D to implement a Contol Motor Driver.


## How to setup connection?

Start by connecting power supply to the motors. In this experiment we are using 2 DC Motors that are usually found in two-wheel-drive robots. They are rated for 3 to 9V. So, we will connect external 9V power supply to the Vcc2 pin.

Next, we need to supply 5 Volts for the L293D’s logic circuitry. Connect Vcc1 pin to 5V output on Arduino. Connect all the grounds in the circuit.

The input and enable pins(ENA, IN1, IN2, IN3, IN4 and ENB) of the L293D IC are connected to six Arduino digital output pins(9, 8, 7, 5, 4 and 3).Arduino output pins 9 and 3 are both PWM-enabled.

Lastly, connect one motor to across OUT1 & OUT2 and the other motor across OUT3 & OUT4. You can interchange your motor’s connections in which ever way you want.


## Arduino Code


~~~
// C++ code
//
// Motor A connections
int enA = 9;
int in1 = 8;
int in2 = 7;
// Motor B connections
int enB = 3;
int in3 = 5;
int in4 = 4;

void setup() {
	// Set all the motor control pins to outputs
	pinMode(enA, OUTPUT);
	pinMode(enB, OUTPUT);
	pinMode(in1, OUTPUT);
	pinMode(in2, OUTPUT);
	pinMode(in3, OUTPUT);
	pinMode(in4, OUTPUT);
	
	// Turn off motors - Initial state
	digitalWrite(in1, LOW);
	digitalWrite(in2, LOW);
	digitalWrite(in3, LOW);
	digitalWrite(in4, LOW);
}

void loop() {
	directionControl();
	delay(1000);
	speedControl();
	delay(1000);
}

// This function lets you control spinning direction of motors
void directionControl() {
	// Set motors to maximum speed
	// For PWM maximum possible values are 0 to 255
	analogWrite(enA, 255);
	analogWrite(enB, 255);

	// Turn on motor A & B
	digitalWrite(in1, HIGH);
	digitalWrite(in2, LOW);
	digitalWrite(in3, HIGH);
	digitalWrite(in4, LOW);
	delay(2000);
	
	// Now change motor directions
	digitalWrite(in1, LOW);
	digitalWrite(in2, HIGH);
	digitalWrite(in3, LOW);
	digitalWrite(in4, HIGH);
	delay(2000);
	
	// Turn off motors
	digitalWrite(in1, LOW);
	digitalWrite(in2, LOW);
	digitalWrite(in3, LOW);
	digitalWrite(in4, LOW);
}

// This function lets you control speed of the motors
void speedControl() 
{
	// Turn on motors
	digitalWrite(in1, LOW);
	digitalWrite(in2, HIGH);
	digitalWrite(in3, LOW);
	digitalWrite(in4, HIGH);
	
	// Accelerate from zero to maximum speed
	for (int i = 0; i < 256; i++) {
		analogWrite(enA, i);
		analogWrite(enB, i);
		delay(20);
	}
	
	// Decelerate from maximum speed to zero
	for (int i = 255; i >= 0; --i) {
		analogWrite(enA, i);
		analogWrite(enB, i);
		delay(20);
	}
	
	// Now turn off motors
	digitalWrite(in1, LOW);
	digitalWrite(in2, LOW);
	digitalWrite(in3, LOW);
	digitalWrite(in4, LOW);
}
~~~


### Link to TinkerCAD implementation 

[ControlMotorDriver](https://www.tinkercad.com/things/gVzCvAAqwtV-control-motor-driver-using-arduino-uno/editel)