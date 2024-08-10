#include<Servo.h>
Servo s1;
byte servo = 0;




void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  
  s1.attach(10);
}

void loop() {
  // put your main code here, to run repeatedly:
servo = s1.read();
 Serial.print(servo);
 Serial.print("\t");
 s1.write(90);
 servo = s1.read();
Serial.println(servo);
}
