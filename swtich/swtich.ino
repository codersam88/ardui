int ledPin1 = 2;//lsb
int ledPin2 = 4;
int ledPin3 = 8;

void setup()
{
  pinMode(ledPin1,OUTPUT);
  pinMode(ledPin2,OUTPUT);
  pinMode(ledPin3,OUTPUT);
}

void loop()
{
  digitalWrite(ledPin1,LOW);
  digitalWrite(ledPin2,HIGH);
 
  
}
