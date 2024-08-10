#include"HX711.H";
const int data = A0;
const int clock = D2;
HX711 load;




void setup() {
  // put your setup code here, to run once:
   load.begin(data,clock,128);
   Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
  if(load.is_ready()){
    long reading = scale.read();
    Serial.print("HX711 reading: ");
    Serial.println(reading);
  } 
  else {
    Serial.println("HX711 not found.");
  }
  }

}
