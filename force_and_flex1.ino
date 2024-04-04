#define FORCE_SENSOR A1
#define LED 13
void setup()
{
  pinMode(A0, INPUT);
    pinMode(2, OUTPUT);
    pinMode(3, OUTPUT);
    pinMode(4, OUTPUT);
  Serial.begin(9600);
  pinMode(FORCE_SENSOR, INPUT);
  pinMode(LED, OUTPUT);
}

void loop()
{
  int analogReading=analogRead(FORCE_SENSOR);
  Serial.print("FORCE SENSOR READING");
  Serial.println(analogReading);
  if(analogReading==0)
	digitalWrite(LED, LOW);
  else
    digitalWrite(LED,HIGH);
  float flex=analogRead(A0);
  Serial.println(flex);
  delay(1000);
  if(flex>1000)
  {
    digitalWrite(2,HIGH);
    digitalWrite(3,LOW);
    digitalWrite(4,HIGH);
  }
  else{
    digitalWrite(2,LOW);
    digitalWrite(3,HIGH);
    digitalWrite(4,LOW);
  }
}
    
  