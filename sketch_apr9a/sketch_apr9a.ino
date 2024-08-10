void setup(){
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(A0, INPUT);
}
void loop(){
  int spd;
  spd = analogRead(A0);

  // change pin 4 to PWM pin 5    as analog is only read through PWM pins
  analogWrite(5,spd);
  digitalWrite(3,LOW);
}