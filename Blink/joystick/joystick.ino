int Xpin = A0;
int Ypin = A1;
int Spin = 2;
int Xvalue;
int Yvalue;
int Svalue;
int dt = 200;

void setup() {

  pinMode(Xpin,INPUT);
  pinMode(Ypin,INPUT);
  pinMode(Spin,INPUT);
  digitalWrite(Spin,HIGH);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  Xvalue = analogRead(Xpin);
  Yvalue = analogRead(Ypin);
  Svalue = digitalRead(Spin);
  delay(dt);
  Serial.print("Xvalue is ");
    Serial.print(Xvalue);
    Serial.print(" Yvalue is ");
    Serial.print(Yvalue);
      Serial.print(" Svalue is ");
      Serial.println(Svalue);
}
