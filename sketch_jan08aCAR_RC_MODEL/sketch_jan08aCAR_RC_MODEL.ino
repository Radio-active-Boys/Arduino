int SpeedpinX=5;
int SpeedpinY=6;
int in1=8;
int in2=7;
int in3=12;
int in4=13;
int Xpin = A0;
int Ypin = A1;
int Xvalue ;
int Yvalue ;
int speedX ;
int speedY ;
int spin ;



void setup() {
  // put your setup code here, to run once:
  pinMode(SpeedpinX,OUTPUT);
  pinMode(SpeedpinY,OUTPUT);
  pinMode(in1,OUTPUT);
  pinMode(in2,OUTPUT);
  pinMode(in3,OUTPUT);
  pinMode(in4,OUTPUT);
  pinMode(Xpin,INPUT);
  pinMode(Ypin,INPUT);
  pinMode(spin,INPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  Xvalue = analogRead(Xpin);
  Yvalue = analogRead(Ypin);

  Serial.print("Xvalue");
   Serial.print(Xvalue);
  Serial.print("Yvalue");
   Serial.print(Yvalue);
 if(Xvalue>=512 && Xvalue<=514){
    
    speedX = 0;
     analogWrite(SpeedpinX,speedX);
    Serial.print(" speed is ");
    Serial.print(speedX);}
  if(Xvalue<512){
    digitalWrite(in1,HIGH);
    digitalWrite(in2,LOW);
    speedX = (-254./512.)*Xvalue+254.;
    analogWrite(SpeedpinX,speedX);
    Serial.print(" speed is ");
    Serial.print(speedX);
  }
  
  
  if(Xvalue>514){
    digitalWrite(in1,LOW);
    digitalWrite(in2,HIGH);
    speedX = (254./514.)*Xvalue-254.;
    analogWrite(SpeedpinX,speedX);
    Serial.print("  speed is");
    Serial.print(speedX);
    
  }
  if(Yvalue>=498 && Yvalue<=502){
    
    speedY = 0;
     analogWrite(SpeedpinX,speedX);
    Serial.print(" speed is ");
    Serial.println(speedY);
    }
  if(Yvalue<498){
    digitalWrite(in3,LOW);
    digitalWrite(in4,HIGH);
    speedY = (-254./498.)*Yvalue+254.;
    analogWrite(SpeedpinY,speedY);
    Serial.print(" speed is ");
    Serial.println(speedY);
  }
  
  
  if(Yvalue>502){
    digitalWrite(in3,HIGH);
    digitalWrite(in4,LOW);
    speedY = (254./502.)*Yvalue-254.;
    analogWrite(SpeedpinY,speedY);
    Serial.print("  speed is");
    Serial.println(speedY);
  }
   
  

}
