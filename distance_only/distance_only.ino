long duration, heightin , heightcm, distin, distcm;

void getDist()
{
  
  digitalWrite(3, LOW);
  delayMicroseconds(2);
  digitalWrite(3, HIGH);
  delayMicroseconds(5);
  digitalWrite(3, LOW);

  duration = pulseIn(4, HIGH);

  distin = microsecondsToInches(duration);
  distcm = microsecondsToCentimeters(duration);
  delay(1000);//for distance to get registered
    
  Serial.print("The dist is ");
  Serial.print(distin);
  Serial.print("in, ");
  Serial.print(distcm);
  Serial.print("cm");
  Serial.println();
}

void setup() {
  pinMode (2, OUTPUT); //attach pin 2 to vcc
  pinMode(3, OUTPUT);// attach pin 3 to Trig
  pinMode (4, INPUT);//attach pin 4 to Echo
  pinMode (5, OUTPUT); //attach pin 5 to GND
  pinMode (13, OUTPUT);//led pin
  // initialize serial communication:
  Serial.begin(9600);
  digitalWrite(2, HIGH);
  getDist();
  delay(5000);//giving time to kids to clear the place
  getDist();
  digitalWrite(13, HIGH);
}

void loop()
{
  digitalWrite(3, LOW);
  delayMicroseconds(2);
  digitalWrite(3, HIGH);
  delayMicroseconds(5);
  digitalWrite(3, LOW);

  duration = pulseIn(4, HIGH);

  heightin = microsecondsToInches(duration);
  heightcm = microsecondsToCentimeters(duration);//b4 subtracting

  heightin = distin - heightin;
  heightcm = distcm - heightcm;


  Serial.print("Your height is ");
  Serial.print(heightin);
  Serial.print("in, ");
  Serial.print(heightcm);
  Serial.print("cm");
  Serial.println();
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


