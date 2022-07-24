#define SPR 90 //Step per revolution 

#include "Stepper.h" /Include the library for Stepper Motor


Stepper MyStepper(SPR , 8, 10, 9, 11);   //Attach the Stepper & L293D on pins 8,10,9,11

void setup() {    
}

void loop() {
  MyStepper.setSpeed(5);
  MyStepper.step(SPR);
  delay(500);

}
