long fwdTime = 0;
long turnTime = 0;

int rMotor = 8;

void setup() {

}

void loop()
{
  digitalWrite(rMotor, HIGH);
  delay(fwdTime);
  digitalWrite(rMotor, LOW);
  delay(turnTime);
}
