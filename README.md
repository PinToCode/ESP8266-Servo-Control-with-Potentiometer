# ESP8266 Servo Motor Control Using Potentiometer

This project demonstrates how to control a **servo motor** using a **potentiometer** with an **ESP8266 development board** (NodeMCU or Wemos D1 Mini).  
Rotating the potentiometer smoothly changes the servo angle from **0° to 180°** in real time.

---

## 📌 Overview

- A servo motor is controlled via a digital GPIO pin.
- A potentiometer provides analog input to set the servo position.
- The ESP8266 reads the potentiometer value, maps it to an angle, and updates the servo accordingly.
- Live readings are displayed on the Serial Monitor for debugging and observation.

---

## 🛠 Hardware Required

- ESP8266 (NodeMCU / Wemos D1 Mini)
- Servo Motor (e.g., SG90)
- Potentiometer (10kΩ recommended)
- Breadboard
- Jumper Wires
- USB Cable (for programming)

---

## 🔌 Circuit Connections

| Component | ESP8266 Pin |
|---------|------------|
| Servo Signal | D4 (GPIO2) |
| Servo VCC | 3V3 |
| Servo GND | GND |
| Potentiometer VCC | 3V3 |
| Potentiometer GND | GND |
| Potentiometer Output | A0 |

---

## ⚙️ How It Works

1. The ESP8266 reads the analog input from the potentiometer (range: 0–1023).
2. The value is mapped to a servo angle between 0° and 180°.
3. The mapped angle is sent to the servo motor using the Servo library.
4. The servo position updates instantly as the potentiometer is rotated.
5. Values are printed on the Serial Monitor at 115200 baud.

---

## 🖥 Output Example (Serial Monitor)

ESP8266 Servo Control with Potentiometer
Potentiometer value: 134 | Angle: 24
Potentiometer value: 560 | Angle: 98
Potentiometer value: 900 | Angle: 158

---

## 📚 Libraries Used

- Servo.h

---

## ⚠️ Notes

- Ensure the servo motor does not draw more current than the ESP8266 can supply.
- For high-torque servos, use an external power supply and connect grounds together.
- Install ESP8266 board support in the Arduino IDE if not already installed.

---

## 📄 License

This project is licensed under the **MIT License**.  
You are free to use, modify, and distribute this project.

---

## 👤 Author

**Jerit Jose**  
Embedded Systems & IoT Developer
