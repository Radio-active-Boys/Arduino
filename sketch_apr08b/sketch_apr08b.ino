/*
IIT JAMMU 
WORKSHOP ON DESIGN THINKING IN STEM

Traffic Light

*/


long maxTime = 3000;

void setup()
{
  
  //Setting pinMode to OUTPUT
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
  
  
  //initiate Serial for printing
  Serial.begin(9600);

}

int redLight,yellowLight,greenLight;

void loop()
{
  //Read value from potentiometer
  redLight = analogRead(A0);
  yellowLight = analogRead(A1);
  greenLight = analogRead(A2);
  
  long redDelay = map(redLight,0,1023,0,maxTime);
  long yellowDelay = map(yellowLight,0,1023,0,maxTime);
  long greenDelay = map(greenLight,0,1023,0,maxTime);
  
  
  //Printing data to Serial moniter
  Serial.print(redDelay);
  Serial.print("\t");
  Serial.print(yellowDelay);
  Serial.print("\t");
  Serial.print(greenDelay);
  Serial.println("\t");
  
  
  
  
  //RED light
  digitalWrite(9, HIGH);
  delay(redDelay); 
  digitalWrite(9, LOW);
  
  //YELLOW light
  digitalWrite(10, HIGH);
  delay(yellowDelay);
  digitalWrite(10, LOW);
  
  
  //GREEN light
  digitalWrite(11, HIGH);
  delay(greenDelay);
  digitalWrite(11, LOW);
  
   //YELLOW light
  digitalWrite(10, HIGH);
  delay(yellowDelay);
  digitalWrite(10, LOW);
  
}
