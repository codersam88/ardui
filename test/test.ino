int testPin = 8;

void setup()
{
  Serial.begin(9600);
  pinMode(testPin,INPUT);
}

void loop()
{
  int val = digitalRead(testPin);
  Serial.println(val);
    delay(1000);
  
}
