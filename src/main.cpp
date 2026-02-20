#include <Arduino.h>

// Create Servo object
Servo axisServo;

// Define PWM pin
const int SERVO_PIN = 9;

// Variable to store servo angle
int targetAngle = 0;

void setup() {
     // Initialize Serial communication
    Serial.begin(9600);

    // Attach servo to PWM pin
    axisServo.attach(SERVO_PIN);

    // Print system initialization message
    Serial.println("=================================");
    Serial.println(" MG995 Axis Control System Ready ");
    Serial.println(" Enter angle between 0 - 180 ");
    Serial.println("=================================");
}


void loop() {
   // Check if Serial data is available
    if (Serial.available() > 0) {

        // Read integer angle input
        targetAngle = Serial.parseInt();

}
