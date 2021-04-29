#include <Servo.h>

//Set the pin numbers here:
#define rightMotor 3
#define leftMotor 5
#define potInputR 7
#define potInputL 8
#define potInputB 9

//Servo Initialization here:
Servo rightMotorCont;
Servo leftMotorCont;

/*
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
  //Setting the pins to be inputs and outputs
  pinMode(rightMotor, OUTPUT); 
  pinMode(leftMotor, OUTPUT); 
  pinMode(potInputR, INPUT); 
  pinMode(potInputL, INPUT);
  pinMode(potInputB, INPUT);

  //Attaching servo's to the right pin
  rightMotorCont.attach(rightMotor);
  leftMotorCont.attach(leftMotor);
}

void loop() {
  //Mapping the values from potentiometer from 0-1023 to 0-180
  int potR;
  int potL;
  potR = map(analogRead(potInputR),0,1023,0,180);
  potL = map(analogRead(potInputL),0,1023,0,180);

  //Sending pwm signal to both motors
  rightMotorCont.write(potR);
  leftMotorCont.write(potL);

}
