int ledPin1 = 13;//lsb

void setup()
{
  pinMode(ledPin1, OUTPUT);

}

void loop()
{
  delay(5000);
  digitalWrite(ledPin1, HIGH);
  delay(5000);
  digitalWrite(ledPin1, LOW);

}
