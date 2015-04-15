int rMotor = 8;

void setup() {
  pinMode (2, OUTPUT); //attach pin 2 to vcc
  pinMode (5, OUTPUT); //attach pin 5 to GND
  pinMode (12, OUTPUT);
  pinMode (13, OUTPUT);
  // initialize serial communication:
  Serial.begin(9600);
}

void loop()
{
  digitalWrite(2, HIGH);
  long duration, inches, cm;

  pinMode(3, OUTPUT);// attach pin 3 to Trig
  digitalWrite(3, LOW);
  delayMicroseconds(2);
  digitalWrite(3, HIGH);
  delayMicroseconds(5);
  digitalWrite(3, LOW);


  pinMode (4, INPUT);//attach pin 4 to Echo
  duration = pulseIn(4, HIGH);


  inches = microsecondsToInches(duration);
  cm = microsecondsToCentimeters(duration);

  Serial.print(inches);
  Serial.print("in, ");
  Serial.print(cm);
  Serial.print("cm");
  Serial.println();
  Serial.println("12 ");
  Serial.println("13 ");
  Serial.println(digitalRead(rMotor));
  if (cm >= 40)
  {
    digitalWrite(rMotor, HIGH);
  }
  else if (cm <= 30)
  {
    digitalWrite(rMotor, LOW);
  }

  delay(1000);
}

long microsecondsToInches(long microseconds)
{
  return microseconds / 74 / 2;
}

long microsecondsToCentimeters(long microseconds)
{
  return microseconds / 29 / 2;
}
