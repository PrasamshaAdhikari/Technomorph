int ledPin=9;
int brightness=0;
int fade=6;
int time=15;
void setup()
{
  pinMode(9,OUTPUT);
  digitalWrite(9,HIGH);
}

void loop()
{
  for(brightness=0;brightness<=255;brightness=brightness+fade)
  {
  analogWrite(ledPin, brightness);
  delay(time);
  }
  
  delay(300);
  for(brightness=255;brightness>=0; brightness=brightness-fade)
  {
    
   	analogWrite(ledPin, brightness);
  	delay(time);
  }
  delay(300);
}