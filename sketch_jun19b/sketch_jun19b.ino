// motor a
int pinA1 = 3;
int pinA2 = 4;
int spdA = 5;
// motor b
int pinB1 = 6;
int pinB2 = 7;
int spdB = 8;
// speed 
int spd = A0;
// forward
void forward(){
  digitalWrite(pinA1,1);
  digitalWrite(pinA2,0);
  digitalWrite(pinB1,1);
  digitalWrite(pinB2,0);
}
// backward
void backward(){
  digitalWrite(pinA1,0);
  digitalWrite(pinA2,1);
  digitalWrite(pinB1,0);
  digitalWrite(pinB2,1);
}
// left
void left(){
  digitalWrite(pinA1,1);
  digitalWrite(pinA2,0);
  digitalWrite(pinB1,0);
  digitalWrite(pinB2,1);
}
// right
void right(){
  digitalWrite(pinA1,0);
  digitalWrite(pinA2,1);
  digitalWrite(pinB1,1);
  digitalWrite(pinB2,0);
}
// speed 
void speed(){
  spdA = analogRead(A0);
  spdB = analogRead(A0);

}
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
// PINS
pinMode(3,OUTPUT);
pinMode(4,OUTPUT);
pinMode(5,OUTPUT);
pinMode(6,OUTPUT);
pinMode(7,OUTPUT);
pinMode(8,OUTPUT);

}

void loop() {

speed();
forward();

}
