// IR Sensor Object Counter

int irSensor = 2;            // IR sensor connected to pin 2

int objectCount = 0;         // stores total object count
bool objectPresent = false;  // remembers if object is already in front

void setup() {

  pinMode(irSensor, INPUT);

  Serial.begin(9600);

  Serial.println("Object Counter Started");
}

void loop() {

  // read sensor
  int sensorValue = digitalRead(irSensor);


  // object detected for first time
  if (sensorValue == LOW && objectPresent == false) {

    objectCount = objectCount + 1;

    Serial.print("Object Count = ");
    Serial.println(objectCount);

    // mark object as already counted
    objectPresent = true;

    delay(300);
  }


  // object removed → ready for next count
  if (sensorValue == HIGH) {

    objectPresent = false;
  }
}
