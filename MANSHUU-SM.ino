int ledPin1 = 13;//red
int ledPin2 = 2;//yellow
int ledPin3 = 13;//green
int ledPin4 = 13;
int ledPin5 = 13;
int ledPin6 = 13;
int ledPin7 = 7;
int ledPin8 = 8;
int ledPin9 = 13;
int ledPin10 = 13;
int ledPin11 = 2;
int ledPin12 = 13;


void setup()
{
  pinMode(ledPin1,OUTPUT);
  pinMode(ledPin2,OUTPUT);
  pinMode(ledPin3,OUTPUT);
  pinMode(ledPin4,OUTPUT);
  pinMode(ledPin5,OUTPUT);
  pinMode(ledPin6,OUTPUT);
  pinMode(ledPin7,OUTPUT);
  pinMode(ledPin8,OUTPUT);
  pinMode(ledPin9,OUTPUT);
  pinMode(ledPin10,OUTPUT);
  pinMode(ledPin11,OUTPUT);
  pinMode(ledPin12,OUTPUT);
  
}

void setS()
{
   digitalWrite(ledPin1,HIGH);
   digitalWrite(ledPin2,HIGH);
   digitalWrite(ledPin3,HIGH);
   digitalWrite(ledPin4,HIGH);
   digitalWrite(ledPin5,HIGH);
   digitalWrite(ledPin6,HIGH);
   digitalWrite(ledPin7,LOW);
   digitalWrite(ledPin8,LOW);
   digitalWrite(ledPin9,HIGH);
   digitalWrite(ledPin10,HIGH);
   digitalWrite(ledPin11,HIGH);
   digitalWrite(ledPin12,HIGH);
  
}

void setM()
{
   digitalWrite(ledPin2,LOW);
   digitalWrite(ledPin7,HIGH);
   digitalWrite(ledPin11,LOW);
}

void loop()
{
  setS();
  delay(1000);
  
  setM();
  delay(1000);
}
