 





void setup() {
  // put your setup code here, to run once:
  pinMode(5, INPUT);
  pinMode(13, OUTPUT);
    Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  int d = digitalRead(5);
  Serial.println(d);
  if(d){
    digitalWrite(13,HIGH);
  }
  else{
    digitalWrite(13,LOW);
  }
 
 
}
