//define us
int trig = 3;
int echo = 2;
float duration , distance;
// define motor
int  LM1 = 5;
int  LM2 = 4;
int  Ldir = 10;
int  RM1 = 6;
int  RM2 = 7;
int  Rdir = 9;
// PID 
double Kp = 1;
double Ki = 0.1;
double Kd = 0.1;
int setdistance = 10; // in cms
double error, lasterror, totalerror , pidvalue ;
       // intaial pid values
    
           
void setup() {
  // put your setup code here, to run once:
  // us parameters
  pinMode(trig, OUTPUT);
  pinMode(echo, INPUT);
  // motor parameters
  pinMode( LM1 ,OUTPUT);
   pinMode(LM2 ,OUTPUT);
    pinMode( RM1 ,OUTPUT);
     pinMode(RM2 ,OUTPUT);
      pinMode(Ldir ,OUTPUT);
       pinMode( Rdir,OUTPUT);
       // set motor spped = 0;
       analogWrite(Ldir , 0);
       analogWrite(Rdir , 0);
       // pid variables 
      
}

void loop() {
  // put your main code here, to run repeatedly:
  // distance input by ultrasonic
  digitalWrite(trig,HIGH);
  delayMicroseconds(10);
  digitalWrite(trig,LOW);
  duration = pulseIn(echo, HIGH);
  distance = duration * 0.017;
  // calculate pid error
   lasterror = 0.0;
       totalerror = 0.0;  
  error = distance - setdistance;
  // calculate pid  value
  pidvalue = Kd*error + Ki * totalerror + Kd * (error - lasterror) ;
  // update pid values 
  lasterror = error;
  totalerror += error;

  // limit pid value 
  pidvalue = constrain(pidvalue , -255 , 255);

  // set motot speed based on pid ; 
  if(pidvalue >0){
    digitalWrite(LM1,HIGH);
     digitalWrite(LM2,LOW);
      digitalWrite(RM1,HIGH);
     digitalWrite(RM2,LOW);
  analogWrite(Ldir , pidvalue);
       analogWrite(Rdir , pidvalue);
  }
  else{
    digitalWrite(LM1,LOW);
     digitalWrite(LM2,HIGH);
      digitalWrite(RM1, LOW);
     digitalWrite(RM2, HIGH);
  analogWrite(Ldir , pidvalue);
       analogWrite(Rdir , pidvalue);
  }
 
}
