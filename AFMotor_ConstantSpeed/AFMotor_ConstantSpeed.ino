
#include <AccelStepper.h>

AccelStepper stepper1(8,9,10,11); // Defaults to 4 pins on 2, 3, 4, 5

void setup()
{  
   stepper1.setMaxSpeed(200.0);
    stepper1.setAcceleration(100.0);
    stepper1.moveTo(24);  
}

void loop()
{  
   stepper1.runSpeed();
}
