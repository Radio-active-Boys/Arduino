
int T =9;
int mi =2000;
int ma = 0;
void setup() {
  // put your setup code here, to run once:
 pinMode(T,INPUT); 
 Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  int d = pulseIn(T,HIGH);
  if(d>ma){
    ma=d;
  }
  if(d<mi){
    mi = d;
  }
  int c = map(d,1055, 1900, 0, 255 ); 
    Serial.print( c );
  Serial.print( "\t" );
  Serial.print( mi );
  Serial.print( "\t" );
  Serial.print( ma );
  Serial.print( "\t" );
  Serial.println(d);
  
}
