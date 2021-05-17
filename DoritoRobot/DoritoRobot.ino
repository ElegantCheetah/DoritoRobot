#include <Servo.h>

//Set the pin numbers here:
#define rightMotor 3 //Right motor contoller pin
#define leftMotor 5 //Left motor contoller pin
#define armMotor 6 //Motor/Servo pin
#define potInputR 7 //Potentiometer for right motor
#define potInputL 8 //Potentiometer for left motor
#define potInputA 9 //Potentiometer for the arm

//Servo Initialization here:
Servo rightMotorCont;
Servo leftMotorCont;
Servo armMotorCont;

//Variable initialization here
int potR;
int potL;
int potA;

void setup() {
  //Setting the pins to be inputs and outputs
  pinMode(armMotor, OUTPUT);
  pinMode(rightMotor, OUTPUT); 
  pinMode(leftMotor, OUTPUT); 
  pinMode(potInputR, INPUT); 
  pinMode(potInputL, INPUT);
  pinMode(potInputA, INPUT);

  //Attaching servo's to the right pin
  rightMotorCont.attach(rightMotor);
  leftMotorCont.attach(leftMotor);
  armMotorCont.attach(armMotor);
}
  
void loop() {
  //Mapping the values from potentiometer from 0-1023 to 0-180
  potR = map(analogRead(potInputR),0,1023,0,180);
  potL = map(analogRead(potInputL),0,1023,0,180);
  potA = map(analogRead(potInputA),0,1023,0,180);

  //Sending pwm signal to motors
  rightMotorCont.write(potR);
  leftMotorCont.write(potL);
  armMotorCont.write(potA);//Disable this if you don't want an extra motor

}
