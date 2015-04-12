long doorfar=25;
long alarmfar = 5;
long difference;
void setup() {
  pinMode (2,OUTPUT);//attach pin 2 to vcc
  pinMode (5,OUTPUT);//attach pin 5 to GND
  // initialize serial communication:
  Serial.begin(9600);
  
  
pinMode(9, OUTPUT);
}

void loop()
{
  digitalWrite(2, HIGH);
  
  long duration, distin;

  pinMode(3, OUTPUT);// attach pin 3 to Trig
  digitalWrite(3, LOW);
  delayMicroseconds(2);
  digitalWrite(3, HIGH);
  delayMicroseconds(5);
  digitalWrite(3, LOW);

  pinMode (4, INPUT);//attach pin 4 to Echo
  duration = pulseIn(4, HIGH);
  
 distin = microsecondsToInches(duration);
  difference = doorfar-distin;
  
  
  
  Serial.print("The difference is  ");
  Serial.print(difference);
  Serial.print("in, ");
  Serial.println();
  
  if(abs(difference) > alarmfar)
  {
    
    
  
  beep(2000);
  delay(1000);

  beep(2000);
  delay(1000);

  beep(2000);
  delay(1000);

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

void beep(unsigned char delayms){
  analogWrite(9, 20);      // Almost any value can be used except 0 and 255
                           // experiment to get the best tone
  delay(delayms);          // wait for a delayms ms
  analogWrite(9, 0);       // 0 turns it off
  delay(delayms);          // wait for a delayms ms   
} 
