#include <SoftwareSerial.h>
SoftwareSerial car(0,1);
// right motor 
int mrb = 10;
int mrf = 11;


// left motor 
int mlb = 9;
int mlf = 8;

// command
char cmd;

//car motion
void forward(){
  digitalWrite(mrf,HIGH );
  digitalWrite(mrb,LOW );
  digitalWrite(mlf,HIGH );
  digitalWrite(mlb,LOW );
}
void backward(){
  digitalWrite(mrf,LOW );
  digitalWrite(mrb,HIGH );
  digitalWrite(mlf,LOW );
  digitalWrite(mlb,HIGH );
}
void left(){
  digitalWrite(mrf,HIGH );
  digitalWrite(mrb,LOW );
  digitalWrite(mlf,LOW );
  digitalWrite(mlb,HIGH );
}
void right(){
  digitalWrite(mrf,LOW );
  digitalWrite(mrb,HIGH );
  digitalWrite(mlf,HIGH );
  digitalWrite(mlb,LOW );
}
void STOP(){
  digitalWrite(mrf,LOW );
  digitalWrite(mrb,LOW );
  digitalWrite(mlf,LOW );
  digitalWrite(mlb,LOW );
}
void setup() {
  car.begin(9600);
  Serial.begin(9600);
  // put your setup code here, to run once:
  pinMode(mrf, OUTPUT);
   pinMode(mrb, OUTPUT);
    pinMode(mlf, OUTPUT);
     pinMode(mlb, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  if(car.available()>0){
    cmd = car.read();
    Serial.println(cmd);
  }
 if(cmd=='F'||cmd=='f'){
      forward();
      
    }
else if(cmd=='B'||cmd=='b'){
  backward();
      
    }
    else if(cmd=='L'||cmd=='l'){
      left();
     
    }
    else if(cmd=='R'||cmd=='r'){ 
      right();}
    
    
    else if(cmd=='S'||cmd=='s'){ STOP();}
  
}