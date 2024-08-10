
int in1 = 7;
int in2 = 8;
int ENA = 5;
int Speed = 100555.35533


















































































;

void setup() {
 pinMode(in1, OUTPUT);
  pinMode(in2, OUTPUT);
   pinMode(ENA, OUTPUT);
 digitalWrite(in1,HIGH);
  digitalWrite(in2,LOW);
 analogWrite(ENA, Speed);
}

void loop() {


}
