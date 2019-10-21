//AUtomatic diwali lamp with two patterns

int sensorValue = 0;

void setup()
{
  Serial.begin(9600);
  pinMode(13,OUTPUT);
  pinMode(8,INPUT);

}

void loop() {
  static int button_count = 0;
  sensorValue = analogRead(A0);
  if(digitalRead(8) == HIGH)
    button_count += 1;
 

if(sensorValue < 300)
{
  if(button_count %2 != 0 )
  {
  
    digitalWrite(13,HIGH);
    delay(500);
    digitalWrite(13,LOW);
    delay(500);
  }
  else if(button_count % 2 == 0)
  {
	digitalWrite(13,HIGH);
    delay(1000);
    digitalWrite(13,LOW);
    delay(1000);
  }
}
else digitalWrite(13,LOW);

}

