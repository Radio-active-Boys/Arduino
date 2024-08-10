int transmitter = 9;


void setup() {
  Serial.begin(9600);
  // put your setup code here, to run once:
  pinMode(transmitter, INPUT);
   pinMode(10, INPUT);
}

void loop() {

Serial.println(pulseIn(transmitter,HIGH));
int cmd = map(pulseIn(transmitter,HIGH),994,1988,0,255);
analogWrite(10,cmd);
}
