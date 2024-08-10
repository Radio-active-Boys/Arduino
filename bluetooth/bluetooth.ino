String cmd;

void setup() {
  Serial.begin(9600); 
  pinMode(10,INPUT);
  pinMode(11,INPUT);
}

void loop() {
  
 Serial.print(analogRead(A0));
 Serial.print(",");
 Serial.print(digitalRead(10));
  Serial.print(",");
 Serial.println(digitalRead(11));
  
   
}
