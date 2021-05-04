#include <Servo.h>

//Set the pin numbers here:
#define rightMotor 3
#define leftMotor 5
#define armMotor 6
#define potInputR 7
#define potInputL 8
#define potInputA 9 //Not needed for now

//Servo Initialization here:
Servo rightMotorCont;
Servo leftMotorCont;
Servo armMotorCont;

/*
 * TODO: Add in a potientiomenter input to control a third motor for the arm
 */

void setup() {
  //Setting the pins to be inputs and outputs
  pinMode(rightMotor, OUTPUT); 
  pinMode(leftMotor, OUTPUT); 
  pinMode(potInputR, INPUT); 
  pinMode(potInputL, INPUT);
  pinMode(potInputA, INPUT);

  //Attaching servo's to the right pin
  rightMotorCont.attach(rightMotor);
  leftMotorCont.attach(leftMotor);
  armMotorCont.attach(armMotor);

  //Variable initialization here
  int potR;
  int potL;
  int potA;
}

void loop() {
  //Mapping the values from potentiometer from 0-1023 to 0-180
  potR = map(analogRead(potInputR),0,1023,0,180);
  potL = map(analogRead(potInputL),0,1023,0,180);
  potA = map(analogRead(potInputA),0,1023,0,180);

  //Sending pwm signal to both motors
  rightMotorCont.write(potR);
  leftMotorCont.write(potL);
  armMotorCont.write(potA);//Disable this if you don't want an extra motor

}
