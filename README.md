DEMO VIDEO- (https://youtu.be/ec2tmJ3ehY8?feature=shared)



PROJECT-1(Touchless LED Indicator)

1.Touchless LED Indicator Using Arduino Uno and IR Sensor

2. Objective

The objective of this project is to build a touchless LED indicator system using an IR sensor and Arduino Uno. The LED turns ON when an object is detected by the IR sensor and turns OFF when the object moves away.
This project demonstrates basic sensor interfacing and output control using Arduino.

3. Components Required

Arduino Uno × 1
IR Sensor Module × 1
LED × 1
330Ω Resistor × 1
Breadboard × 1
Jumper Wires
USB Cable

4. Circuit Connections

IR Sensor:
VCC → 5V
GND → GND
OUT → Digital Pin 2
LED:
Positive leg (anode) → Digital Pin 8 through 330Ω resistor
Negative leg (cathode) → GND

5. Working Principle

The IR sensor continuously detects nearby objects using infrared light.
When an object comes in front of the sensor, the sensor output changes.
Arduino reads this signal through digital pin 2.
If an object is detected, Arduino sends output to pin 8.
The LED turns ON.
When the object moves away, the LED turns OFF.
This creates a touchless indication system.



7. Output

Object detected → LED ON
No object detected → LED OFF
The LED acts as a visual indicator of detection.
8. Applications
Touchless switches
Automatic lighting systems
Sensor-based automation
Object detection systems
Smart home applications
Industrial detection systems

9. Learning Outcomes

Through this project, I learned:
Interfacing an IR sensor with Arduino
Reading digital input using digitalRead()
Controlling output devices using digitalWrite()
Breadboard wiring and circuit assembly
Basic embedded systems programming using Arduino

10. Conclusion

This project successfully demonstrates a touchless LED indicator using Arduino Uno and an IR sensor. It is a simple and practical beginner embedded systems project that introduces sensor interfacing and output control.
It helped strengthen understanding of basic Arduino programming and real-world automation concepts as part of my embedded systems learning journey.


####
####
####
####
####


PROJECT-2(IR Object Counter)

1 IR Object Counter Using Arduino Uno and IR Sensor

2. Objective
   
The objective of this project is to design an object counting system using an IR sensor and Arduino Uno. The system detects an object whenever it passes in front of the IR sensor and increases the count by one.
This project demonstrates object detection, counting logic, and basic automation using Arduino.

4. Components Required
   
Arduino Uno × 1
IR Sensor Module × 1
LED (optional) × 1
330Ω Resistor (optional) × 1
Breadboard × 1
Jumper Wires
USB Cable

6. Circuit Connections
   
IR Sensor
VCC → 5V
GND → GND
OUT → Digital Pin 2
Optional LED Indicator
Positive leg → Pin 8 through 330Ω resistor
Negative leg → GND

8. Working Principle
   
The IR sensor detects an object when it comes in front of the sensor.
Arduino continuously reads the sensor output through digital pin 2.
When an object is detected, Arduino increases the counter by one.
The updated count is displayed in the Serial Monitor.
When the object moves away, the system resets and waits for the next detection.
This ensures every object is counted once.



7. Output
   
Object passes in front of sensor → count increases by 1
Count is displayed in Serial Monitor
Example:
Plain text
Count: 1
Count: 2
Count: 3

9. Applications
    
Object counting on conveyor systems
People counting at entry/exit gates
Product counting in automation systems
Industrial monitoring
Inventory tracking systems

11. Learning Outcomes
    
Through this project, I learned:
IR sensor interfacing with Arduino
Reading digital sensor input
Counting logic using variables
Using Serial Monitor for output display
Preventing repeated counting using program logic
Building simple automation systems using Arduino

13. Conclusion
    
This project successfully demonstrates an IR sensor based object counter using Arduino Uno. It is a simple and practical embedded systems project that introduces object detection and counting logic.
It helped strengthen my understanding of Arduino programming, sensor interfacing, and real-world automation applications as part of my embedded systems learning journey.









