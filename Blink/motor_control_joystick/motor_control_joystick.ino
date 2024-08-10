int Speedpinx = 10;
int Speedpiny = 3;
int in1 = 7;
int in2 = 8;
int in3 = 13;
int in4 = 12;
int mspeedx;
int mspeedy;
int Xpin = A0;
int Xvalue;
int Ypin = A1;
int Yvalue;
int spin = 2;

void setup() {
  // put your setup code here, to run once:
 pinMode(Speedpinx,OUTPUT);
 pinMode(in1,OUTPUT);
 pinMode(in2,OUTPUT);
 pinMode(Xpin,INPUT);
  pinMode(Speedpiny,OUTPUT);
 pinMode(in3,OUTPUT);
 pinMode(in3,OUTPUT);
 pinMode(Ypin,INPUT);
 pinMode(spin,INPUT);
 
 Serial.begin(9600);
 
}

void loop() {
  // put your main code here, to run repeatedly:
 
  Xvalue = analogRead(Xpin);
  Yvalue = analogRead(Ypin);
 
  Serial.print(" Xvalue ");
  Serial.print(Xvalue); 
  Serial.print(" Yvalue ");
  Serial.print(Yvalue);
  if(Xvalue>=512 && Xvalue<=514){
    
    mspeedx = 0;
    Serial.print(" speed is ");
    Serial.print(mspeedx);}
  if(Xvalue<513){
    digitalWrite(in1,HIGH);
    digitalWrite(in2,LOW);
    mspeedx = (-254./513.)*Xvalue+254.;
    analogWrite(Speedpinx,mspeedx);
    Serial.print(" speed is ");
    Serial.print(mspeedx);
  }
  
  
  if(Xvalue>513){
    digitalWrite(in1,LOW);
    digitalWrite(in2,HIGH);
    mspeedx = (254./513.)*Xvalue-254.;
    analogWrite(Speedpinx,mspeedx);
    Serial.print("  speed is");
    Serial.print(mspeedx);
    
  }
  if(Yvalue==500){
    digitalWrite(spin,LOW);
    mspeedy = 0;
    Serial.print(" speed is ");
    Serial.println(mspeedy);
    }
  if(Yvalue<500){
    digitalWrite(in3,LOW);
    digitalWrite(in4,HIGH);
    mspeedy = (-254./500.)*Yvalue+254.;
    analogWrite(Speedpiny,mspeedy);
    Serial.print(" speed is ");
    Serial.println(mspeedy);
  }
  
  
  if(Yvalue>500){
    digitalWrite(in3,HIGH);
    digitalWrite(in4,LOW);
    mspeedy = (254./500.)*Yvalue-254.;
    analogWrite(Speedpiny,mspeedy);
    Serial.print("  speed is");
    Serial.println(mspeedy);
    
  }
}
