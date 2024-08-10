#include <SoftwareSerial.h>

// bluetooth command
char cmd;
SoftwareSerial car(0, 1);

void setup() {
 
  car.begin(9600);
  Serial.begin(9600);
  cmd = 0;
    
}

void loop() {
  if(car.available()>0){
    cmd=car.read();
    Serial.println(cmd);
    
      
    }
  }
  

   
   
