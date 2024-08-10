int trig = 3;
int echo = 2;
float dis , dur;

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
  pinMode(trig, OUTPUT);
  pinMode(echo, INPUT);
  
}

void loop() {
  // put your main code here, to run repeatedly:
   
  digitalWrite(trig, HIGH);
  delayMicroseconds(10);
  digitalWrite(trig, LOW);
 dur = pulseIn(echo, HIGH);
 //distance in cms
 dis = dur * (0.017);
 Serial.print("DISTANCE IN CMS   ");
  Serial.println(dis);
  delay(100);
 
}
