int ledPin = 13;

void setup()
{
  //initializing pins as outputs
  pinMode(ledPin,OUTPUT);
}

void loop()
{
  digitalWrite(ledPin,HIGH);
  delay(500);
  digitalWrite(ledPin,LOW);
  delay(500);
}
