#include <Adafruit_PWMServoDriver.h>
 
#define MIN_PULSE_WIDTH       650
#define MAX_PULSE_WIDTH       2350
#define FREQUENCY             50
 
Adafruit_PWMServoDriver pwm = Adafruit_PWMServoDriver();
 
// Define Potentiometer Inputs
 
int controlA = A0;
int controlB = A1;
int controlC = A2;
int controlD = A3;
 
// Define Motor Outputs on PCA9685 board
 
byte fl1=0,fl2=1,fl3=2,fr1=3,fr2=4,fr3=5,bl1=6,bl2=7,bl3=8,br1=9,br2=10,br3=11;
 
void setup() 
{
  pwm.begin();
  pwm.setPWMFreq(FREQUENCY);
}
 
 
void moveMotor(int controlIn, byte motorOut)
{
  int pulse_wide, pulse_width, potVal;
  
  // Convert to pulse width
  pulse_wide = map(potVal,0,180, MIN_PULSE_WIDTH, MAX_PULSE_WIDTH);
  pulse_width = int(float(pulse_wide) / 1000000 * FREQUENCY * 4096);
  
  //Control Motor
  pwm.setPWM(motorOut, 0, pulse_width);
  Serial.begin(9600);
 
}
 
void loop() {
 for(int i=0;i<180;i++){
   moveMotor(i,3);
   Serial.println(i);
    delay(100);
 }
 for(int i=180;i>0;i--){
   moveMotor(i,3);
   Serial.println(i);
   delay(100);
 }
 
 
 
}
