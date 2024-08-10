#include <SoftwareSerial.h>

// front right motor
    //int mf_rs = A0 ;
int mf_rf = 2;
int mf_rb = 3;
// bluetooth command
char cmd;
SoftwareSerial car(0, 1);

// front left motor
    //int mf_ls = A1 ;
int mf_lf = 4;
int mf_lb = 5;

// back right motor
      //int mb_rs = A2 ;
int mb_rf = 6;
int mb_rb = 7;

// back left motor
      //int mb_ls = A3 ;
int mb_lf = 8;
int mb_lb = 9;

// car commands 
void forward(){
  digitalWrite(mf_rf,HIGH );
  digitalWrite(mf_rb,LOW ); 
  
   digitalWrite(mf_lf,HIGH );
   digitalWrite(mf_lb,LOW );
      
    digitalWrite(mb_rf,HIGH );
    digitalWrite(mb_rb,LOW );
   
     digitalWrite(mb_lf,HIGH );
     digitalWrite(mb_lb,LOW);
     
    
     Serial.println("forward");
}
void back(){
  
   digitalWrite(mf_rb,HIGH );
   digitalWrite(mf_rf,LOW );

      digitalWrite(mf_lb,HIGH );
      digitalWrite(mf_lf,LOW );
   
     digitalWrite(mb_rb,HIGH);
     digitalWrite(mb_rf,LOW);
    
     digitalWrite(mb_lb,HIGH );
     digitalWrite(mb_lf,LOW );
     
      Serial.println("back");
}
void left(){
    digitalWrite(mf_rf,HIGH );
    digitalWrite(mf_rb,LOW );
 
   
      digitalWrite(mf_lb,HIGH );
      digitalWrite(mf_lf,LOW );
      
    digitalWrite(mb_rf,HIGH );
    digitalWrite(mb_rb,LOW );
    
    
     digitalWrite(mb_lb,HIGH );
     digitalWrite(mb_lf,LOW);
     
      Serial.println("left");
}
void right(){
 
   digitalWrite(mf_rb,HIGH );
   digitalWrite(mf_lf,HIGH );
    
   
     digitalWrite(mb_rb,HIGH);
     digitalWrite(mb_lf,HIGH);

     
    digitalWrite(mf_rf,0 );
   digitalWrite(mf_lb,0 );
    
   
     digitalWrite(mb_rf,0);
     digitalWrite(mb_lb,0);
    
       Serial.println("right");
}
void STOP(){
   digitalWrite(mf_rf,LOW );
   digitalWrite(mf_rb,LOW );
   digitalWrite(mf_lf,LOW );
      digitalWrite(mf_lb,LOW );
    digitalWrite(mb_rf,LOW );
     digitalWrite(mb_rb,LOW);
     digitalWrite(mb_lf,LOW );
     digitalWrite(mb_lb,LOW );
      Serial.println("stop");
}
void setup() {
 
  car.begin(9600);
  Serial.begin(9600);
  cmd = 0;
 
  pinMode(mf_rf, OUTPUT);
  pinMode(mf_rb, OUTPUT);
  

  pinMode(mf_lf, OUTPUT);
  pinMode(mf_lb, OUTPUT);
  

  pinMode(mb_rf, OUTPUT);
  pinMode(mb_rb, OUTPUT);
 

  pinMode(mb_lf, OUTPUT);
  pinMode(mb_lb, OUTPUT);
    
}

void loop() {
  if(car.available()>0){
    cmd=car.read();
    Serial.println(cmd);
    if(cmd=='F'||cmd=='f'){
      forward();
      
    }
else if(cmd=='B'||cmd=='b'){
  back();
      
    }
    else if(cmd=='L'||cmd=='l'){
      left();
     
    }
    else if(cmd=='R'||cmd=='r'){ 
      right();}
    
    }
    else if(cmd=='S'||cmd=='s'){ STOP();}
  }
  

   
   
