 //YouTube|Tech at Home

double ch1=2;
int a=4; int b=5;
 
double ch2=3;
int c=6; int d=7;




void setup()
{
  Serial.begin(115200);
  
  pinMode(2,INPUT);
  pinMode(4,OUTPUT); pinMode(5,OUTPUT);
  
  pinMode(3,INPUT);
  pinMode(6,OUTPUT); pinMode(7,OUTPUT);
  pinMode(8,OUTPUT); pinMode(9,OUTPUT);
}
void loop()
{
ch1 = pulseIn(2,HIGH);
ch2 = pulseIn(3,HIGH);
digitalWrite(8,1);
digitalWrite(9,1);

if((ch1>=1300&&ch1<=1600)&&(ch2>=1300&&ch2<=1600))
{    
   
 digitalWrite(a,LOW); digitalWrite(b,LOW);
 digitalWrite(c,LOW);digitalWrite(d,LOW);\
 delay(5);
}

else if(ch2>1000&&ch2<1300)
{     
digitalWrite(a,HIGH); digitalWrite(b,LOW);
 digitalWrite(c,LOW);digitalWrite(d,HIGH);
 delay(5);    
}

else if(ch1>=1600&&ch1<=2000)
{ 
 
   digitalWrite(a,LOW); digitalWrite(b,HIGH);
 digitalWrite(c,LOW);digitalWrite(d,HIGH); 
 delay(5);  

}

else if(ch1<1300&&ch1>1000)
{     
  digitalWrite(a,HIGH); digitalWrite(b,LOW);
 digitalWrite(c,HIGH);digitalWrite(d,LOW);
 delay(5); 
}

else if(ch2<2000&&ch2>1600)
{  digitalWrite(a,LOW); digitalWrite(b,HIGH);
 digitalWrite(c,HIGH);digitalWrite(d,LOW);
 delay(5);
}

else
{     
 digitalWrite(a,LOW); digitalWrite(b,LOW);
 digitalWrite(c,LOW);digitalWrite(d,LOW);
 delay(5);
}

}
