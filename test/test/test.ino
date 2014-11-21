int highPin = 2;

void setup(){
  pinMode(2,OUTPUT);
  Serial.begin(9600);
}

void loop(){
  int test = digitalRead(highPin);
  if(test == 1) digitalWrite(highPin,LOW);
  else{
  digitalWrite(highPin,HIGH);
  }
  Serial.print(test);
  delay(5000);
}
