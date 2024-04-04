int a=0;
int LED=13;
int b=0;

const int gasSensorPin = A0;

void setup() {
  Serial.begin(9600);
  pinMode(13,OUTPUT);
}

void loop() {
  a=analogRead(A1);
  b=map(a,0,1023,0,255);
  Serial.println(b);
  // Read the analog value from the gas sensor
  float sensorValue = analogRead(gasSensorPin);
  if(b>100)
  {
    Serial.println("MOTION DETECTED");
    delay(100);
  }
    
  if(sensorValue>= 250)
  {
    digitalWrite(LED, HIGH);
	Serial.print(sensorValue);
   Serial.print("  |GAS DETECTED\n");
  }
  else{
  digitalWrite(LED, LOW);
  Serial.print("Gas Sensor Value: ");
  Serial.println(sensorValue);
  }

  // Add a delay to prevent flooding the serial port
  delay(1000); // 1 second delay
}