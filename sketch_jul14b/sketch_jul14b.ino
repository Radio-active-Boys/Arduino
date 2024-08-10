int m_a1 = 6;
 int m_a2 = 7;
int m_b1 = 8;
int m_b2 = 9;
char cmd = 'f';
void forward(){
  digitalWrite(m_a1,1);
  digitalWrite(m_a2,0);
  digitalWrite(m_b1,1);
  digitalWrite(m_b2,0);
}
void backward(){
  digitalWrite(m_a1,0);
  digitalWrite(m_a2,1);
  digitalWrite(m_b1,0);
  digitalWrite(m_b2,1);
}
void left(){
  digitalWrite(m_a1,0);
  digitalWrite(m_a2,1);
  digitalWrite(m_b1,1);
  digitalWrite(m_b2,0);
}
void right(){
  digitalWrite(m_a1,1);
  digitalWrite(m_a2,0);
  digitalWrite(m_b1,0);
  digitalWrite(m_b2,1);
}



void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(m_a1,OUTPUT);
pinMode(m_a2,OUTPUT);
pinMode(m_b1,OUTPUT);
pinMode(m_b2,OUTPUT);

}

void loop() {

  if (cmd == 'f' || cmd == 'F'){
    forward();
  }
}
