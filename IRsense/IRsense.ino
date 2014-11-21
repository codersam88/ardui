int sensorPin = 0; //analog pin 0
int ledPin=8;

void setup(){
  Serial.begin(9600);
  //pinMode(ledPin,OUTPUT);
  
}

void loop(){
  int val = analogRead(sensorPin);
  Serial.println(val);
  //if(val>=2) digitalWrite(ledPin,HIGH);

  //just to slow down the output - remove if trying to catch an object passing by
  delay(200 );
  
  

}
