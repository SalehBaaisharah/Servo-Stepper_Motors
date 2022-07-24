
#include <Servo.h> //Include the library for Servo

Servo MyServo; //The corresponding servo is connected to the entire code via this variable..

void setup() {
   MyServo.attach(A0); //Attach the servo on pin A0
}

void loop() {

  for(int i=0; i<=180; i=i+5) // goes from 0 degrees to 180 degrees in steps of 5 degrees
  {
   MyServo.write(i);
   delay(50);
  }
  delay(1000);
  for(int i=180; i>=0; i=i-5) // goes from 180 degrees to 0 degrees in steps of 5 degrees
  {
   MyServo.write(i);
   delay(50);
  }
 }
 
