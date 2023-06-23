int Relay = 13; 
int sensor = 8; 
int val; 
void setup() {
  pinMode(13,OUTPUT); //Set pin 13 as OUTPUT pin, to send signal to relay
  pinMode(8,INPUT); //Set pin 8 as input pin, to receive data from Soil moisture sensor.
}

void loop() { 
  val = digitalRead(8); 
  if(val == LOW) 
  {
  digitalWrite(13,LOW); //if soil moisture sensor provides LOW value send LOW value to relay
  }
  else
  {
  digitalWrite(13,HIGH); //if soil moisture sensor provides HIGH value send HIGH value to relay
  }
  delay(400);
}

