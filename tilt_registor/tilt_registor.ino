#define led A0
#define swith D0
int state =0;
int bright = 255;
void setup() {
  // put your setup code here, to run once:
  pinMode(led, OUTPUT);
  pinMode(swith, INPUT);
  Serial.begin(9600);
  
}

void loop() {
  // put your main code here, to run repeatedly:
int d = digitalRead(swith) ;
if(d== HIGH){
  if(bright<255){
    bright++;
  }
  
}
else{
  if(bright>0){
    bright--;
  }
}
analogWrite(led,bright);

Serial.print(d);
Serial.print("\t");

}
