int ledPin1 = 2;//lsb
int ledPin2 = 4;

void setup()
{
  pinMode(ledPin1,OUTPUT);
  pinMode(ledPin2,OUTPUT);

}

void loop()
{
  digitalWrite(ledPin1,HIGH);
  digitalWrite(ledPin2,LOW);
   
}
