
int pin = A0;
void setup() {
  // put your setup code here, to run once:
  pinMode(pin , INPUT);
 Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
float x = analogRead(pin);
Serial.println(x);
delay(500);


}
