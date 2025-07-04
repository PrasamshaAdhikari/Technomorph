//P means pin
const int triggerP = 9;
const int echoP = 10;
const int ledP = 13;

void setup() {
  pinMode(triggerP, OUTPUT);
  pinMode(echoP, INPUT);
  pinMode(ledP, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  long d;
  int dis;

  digitalWrite(triggerP, LOW);
  delayMicroseconds(2);
  digitalWrite(triggerP, HIGH);
  delayMicroseconds(10);
  digitalWrite(triggerP, LOW);

  d = pulseIn(echoP, HIGH);
  dis = d * 0.034 / 2;

  if (dis <= 10)
    digitalWrite(ledP, HIGH);
  else
    digitalWrite(ledP, LOW);

  delay(500);
}
