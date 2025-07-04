// Motor A pins
const int ENA = 9;
const int IN1 = 2;
const int IN2 = 3;

// Motor B pins
const int ENB = 10;
const int IN3 = 4;
const int IN4 = 5;

void setup() {
  // Set all the motor control pins as outputs
  pinMode(ENA, OUTPUT);
  pinMode(IN1, OUTPUT);
  pinMode(IN2, OUTPUT);
  pinMode(ENB, OUTPUT);
  pinMode(IN3, OUTPUT);
  pinMode(IN4, OUTPUT);
}

void loop() {
  // Move both motors forward
  digitalWrite(IN1, HIGH);
  digitalWrite(IN2, LOW);
  digitalWrite(IN3, HIGH);
  digitalWrite(IN4, LOW);
  analogWrite(ENA, 200); // PWM speed control (0-255)
  analogWrite(ENB, 200);
  delay(2000);

  // Move both motors backward
  digitalWrite(IN1, LOW);
  digitalWrite(IN2, HIGH);
  digitalWrite(IN3, LOW);
  digitalWrite(IN4, HIGH);
  delay(2000);

  // Stop both motors
  analogWrite(ENA, 0);
  analogWrite(ENB, 0);
  delay(1000);
}