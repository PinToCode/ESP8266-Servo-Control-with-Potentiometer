This project demonstrates how to control a servo motor using a potentiometer connected to an ESP8266 development board (such as NodeMCU or Wemos D1 Mini). As the potentiometer is turned, the servo angle changes accordingly from 0° to 180°.

 Overview
A servo motor is connected to a digital pin (D4).

A potentiometer is connected to analog pin (A0).

The ESP8266 reads analog values from the potentiometer and maps them to servo angles.

Real-time values are also printed on the Serial Monitor for debugging.

 Hardware Required
ESP8266 (NodeMCU / Wemos D1 Mini)

Servo motor (e.g., SG90)

Potentiometer (10kΩ recommended)

Jumper wires

Breadboard

USB cable for programming

 Circuit Connections
Component	ESP8266 Pin
Servo Signal	D4 (GPIO2)
Servo VCC	3V3
Servo GND	GND
Potentiometer VCC	3V3
Potentiometer GND	GND
Potentiometer Output	A0

 How It Works
The ESP8266 reads the analog input from the potentiometer (range: 0–1023).

It maps this value to a range suitable for servo rotation (0–180 degrees).

It sends this angle to the servo motor using the Servo library.

The position is updated in real-time as the potentiometer is rotated.

Values are displayed in the Serial Monitor at 115200 baud.

 Notes
Ensure your servo motor does not draw more current than the ESP8266 can supply. For higher-torque servos, consider an external power source.

You may need to install the ESP8266 board support in the Arduino IDE if not already done.

 Output Example (Serial Monitor)
yaml
Copy
Edit
ESP8266 Servo Control with Potentiometer
Potentiometer value: 134 | Angle: 24
Potentiometer value: 560 | Angle: 98
Potentiometer value: 900 | Angle: 158
 Libraries Used
Servo.h

 License
This project is open-source and free to use under the MIT License.
