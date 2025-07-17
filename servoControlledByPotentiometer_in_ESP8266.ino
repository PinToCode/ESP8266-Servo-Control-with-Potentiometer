#include <Servo.h>

// Create a servo object
Servo myServo;

// Define pin connections
const int servoPin = D4;    // GPIO2 (D4) for servo control
const int potPin = A0;      // Analog pin for potentiometer (A0 on ESP8266)
// Variables
int potValue;    // Variable to store potentiometer value
int angle;       // Variable to store the calculated angle

void setup() {
  // Attach the servo to the specified pin
  myServo.attach(servoPin);  
  // Initialize serial communication for debugging (optional)
  Serial.begin(115200);
  Serial.println("ESP8266 Servo Control with Potentiometer");
}

void loop() {
  // Read the potentiometer value (0-1023)
  potValue = analogRead(potPin);  
  // Map the potentiometer value to an angle for the servo (0-180)
  // Note: ESP8266 has 10-bit ADC (0-1023) like Arduino
  angle = map(potValue, 0, 1023, 0, 180);  
  // Set the servo position
  myServo.write(angle);  
  // Print values to serial monitor for debugging (optional)
  Serial.print("Potentiometer value: ");
  Serial.print(potValue);
  Serial.print(" | Angle: ");
  Serial.println(angle);
    // Small delay for stability
  delay(15);
}