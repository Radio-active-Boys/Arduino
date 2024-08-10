// Constants for the ultrasonic sensor pins and the car motor pins
const int trigPin = 2;
const int echoPin = 3;
const int motorPin1 = 4;
const int motorPin2 = 5;
const int motorEnablePin = 6;

// Constants for the PID controller
const double Kp = 1;
const double Ki = 0.1;
const double Kd = 0.1;
const int desiredDistance = 10; // in cm

// Variables for the ultrasonic sensor
long duration;
int distance;

// Variables for the PID controller
double error, lastError, totalError, pidOutput;

void setup() {
  // Initialize the ultrasonic sensor pins
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);

  // Initialize the car motor pins
  pinMode(motorPin1, OUTPUT);
  pinMode(motorPin2, OUTPUT);
  pinMode(motorEnablePin, OUTPUT);

  // Set the motor speed to 0
  analogWrite(motorEnablePin, 0);

  // Initialize the PID variables
  lastError = 0;
  totalError = 0;
}

void loop() {
  // Get the distance from the ultrasonic sensor
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
  duration = pulseIn(echoPin, HIGH);
  distance = duration * 0.034 / 2;

  // Calculate the error for the PID controller
  error = desiredDistance - distance;

  // Calculate the PID output
  pidOutput = Kp * error + Ki * totalError + Kd * (error - lastError);

  // Update the PID variables
  lastError = error;
  totalError += error;

  // Limit the PID output to the range [-255, 255]
  pidOutput = constrain(pidOutput, -255, 255);

  // Set the motor speed based on the PID output
  if (pidOutput > 0) {
    digitalWrite(motorPin1, HIGH);
    digitalWrite(motorPin2, LOW);
  } else {
    digitalWrite(motorPin1, LOW);
    digitalWrite(motorPin2, HIGH);
  }
  analogWrite(motorEnablePin, abs(pidOutput));
}
