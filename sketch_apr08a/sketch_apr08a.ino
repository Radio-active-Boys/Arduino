int d = 25 ;

void setup() {
  // put your setup code here, to run once:
  pinMode(3,OUTPUT);
  pinMode(5,OUTPUT);
  pinMode(6,OUTPUT);
  pinMode(9,OUTPUT);
  

  

}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(3,HIGH);
  delay(d);
  digitalWrite(3,LOW);
  delay(d);
  digitalWrite(5,HIGH);
  delay(d);
  digitalWrite(5,LOW);
  delay(d);
  digitalWrite(6,HIGH);
  delay(d);
  digitalWrite(6,LOW);
  delay(d);
  digitalWrite(9,HIGH);
  delay(d);
  digitalWrite(9,LOW);
  delay(d);
  
  
  
}
