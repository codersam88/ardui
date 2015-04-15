int rMotor = 8;

void setup() {
  pinMode(rMotor, OUTPUT);
}

void loop()
{
  digitalWrite(rMotor, HIGH);
  delay(1000);
}

