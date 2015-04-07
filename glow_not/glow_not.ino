int ledPin1 = 13;//red

void setup()
{
  pinMode(ledPin1,OUTPUT);
}

void loop()
{
  digitalWrite(ledPin1,HIGH);
  delay(1000);
  digitalWrite(ledPin1,LOW); 
  delay(1000);
}
