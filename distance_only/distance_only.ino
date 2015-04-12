long dist=0;

void setup() {
  pinMode (2,OUTPUT);//attach pin 2 to vcc
  pinMode (5,OUTPUT);//attach pin 5 to GND
  // initialize serial communication:
  Serial.begin(9600);
}

void loop()
{
  digitalWrite(2, HIGH);
  
  long duration, inches, cm,distin,distcm;

  pinMode(3, OUTPUT);// attach pin 3 to Trig
  digitalWrite(3, LOW);
  delayMicroseconds(2);
  digitalWrite(3, HIGH);
  delayMicroseconds(5);
  digitalWrite(3, LOW);

  pinMode (4, INPUT);//attach pin 4 to Echo
  duration = pulseIn(4, HIGH);
  
  distin = 0;
  distcm = 0;

  inches = microsecondsToInches(duration);
  cm = microsecondsToCentimeters(duration);
  
  
  inches = distin-inches;
  cm= distcm-cm;
  
  Serial.print("The dist is ");
  Serial.print(distin);
  Serial.print("in, ");
  Serial.print(distcm);
  Serial.print("cm");
  Serial.println();
 
  Serial.print("Your height is ");
  Serial.print(inches);
  Serial.print("in, ");
  Serial.print(cm);
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
