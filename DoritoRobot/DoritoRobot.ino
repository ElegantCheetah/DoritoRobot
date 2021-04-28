#include <servo.h>

//Set the pin numbers here:
#define rightMotor 3
#define leftMotor 5
#define potInputR 7
#define potInputL 8
#define potInputB 9
/*
TODO: Write code for the movement of robot
TODO: Learn how to communicate with REV spark MAX
TODO: Take potentiometer input and make it pwm signal
 


Refresher:

Motor contollers expect pulses every 20 ms and a pulse width of 1.5
Pulse width of 1.0 is full reverse
Pulse width of 2.0 is full forward

Use servo commands 
Map 0-1023 to 0-180 for motor controllers
*/
void setup() {
  pinMode(rightMotor, OUTPUT); //Right motor is setup to be an output
  pinMode(leftMotor, OUTPUT); //Left motor is setup to be an output
  pinMode(potInputR, INPUT); //Potentiometers are set as inputs
  pinMode(potInputL, INPUT);
  pinMode(potInputB, INPUT);
}

void loop() {
  //Stuff here

}
