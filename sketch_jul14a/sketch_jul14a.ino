int m_a1 = 6;
 int m_a2 = 7;
int m_b1 = 8;
int m_b2 = 9;
char cmd = 's';
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
  // put your main code here, to run repeatedly:
  if(Serial.available()>0){
    cmd = Serial.read();
   Serial.println(cmd);
  }

  if(cmd == 'F' || cmd == 'f'){
   forward();
  }
 if(cmd == 'b' || cmd == 'B'){
    backward();
  }
  if(cmd == 'l' || cmd == 'L'){
    left();
  }
  if(cmd == 'r' || cmd == 'R'){
    right();
  }

}
