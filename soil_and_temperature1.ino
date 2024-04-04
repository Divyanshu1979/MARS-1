int moisturevalue;
float moisture_percentage;
int sensorvalue=0;

void setup()
{
  Serial.begin(9600);
  pinMode(A1,INPUT);
}

void loop()
{
  sensorvalue=analogRead(A1);
  Serial.print("SENSOR VALUE");
  Serial.println(sensorvalue);
  int voltage=sensorvalue*(5000/1024.0);
  int temperature=(voltage-500)/10;
   Serial.print("TEMPERATURE");
  Serial.print(temperature);
  moisturevalue = analogRead(A0);
  moisture_percentage=((moisturevalue/539.00)*100);
  Serial.print("MOISTURE VALUE IS ");
  Serial.print(moisture_percentage);
  Serial.print("%\n");
  delay(1000);
}