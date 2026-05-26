int irSensor = 2;   // IR sensor connected to pin 2
int led = 8;        // LED connected to pin 8

void setup() {
  pinMode(irSensor, INPUT);
  pinMode(led, OUTPUT);

  Serial.begin(9600);   // Start Serial Monitor
}

void loop() {

  int sensorStatus = digitalRead(irSensor);

  // Print sensor value in Serial Monitor
  Serial.print("Sensor Value: ");
  Serial.println(sensorStatus);

  // If object detected
  if (sensorStatus == LOW) {
    digitalWrite(led, HIGH);
    Serial.println("Object Detected → LED ON");
  }

  // If no object
  else {
    digitalWrite(led, LOW);
    Serial.println("No Object → LED OFF");
  }

  delay(300); // small delay for stable output
}