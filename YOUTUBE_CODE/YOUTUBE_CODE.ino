

#define joystick     A0

#define pwm1          5

#define pwm2         6

 

int motor_control;

 

void setup() {

  pinMode(pwm1,   OUTPUT);

  pinMode(pwm2,   OUTPUT);
  pinMode(pwm3,   OUTPUT);

  pinMode(pwm4,   OUTPUT);

}

 

void loop() {

  motor_control = analogRead(joystick);

  motor_control >>= 1;

  if(motor_control > 255)

{

    digitalWrite(pwm2, 0);
    analogWrite(pwm1,(motor_control - 256));}

  else

    if(motor_control < 255)

{

      digitalWrite(pwm1, 0);

      analogWrite(pwm2, (255 - motor_control));

    }

    else{

      digitalWrite(pwm1, 0);

      digitalWrite(pwm2, 0);

    }

}
