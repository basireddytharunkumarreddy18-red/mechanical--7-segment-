# Mechanical 7-Segment Display

## 📖 Project Overview
This project is a mechanical 7-segment display built using an Arduino Uno and 7 micro servo motors. Instead of using standard LEDs, each segment of the display is a physical piece of cardboard attached to a servo arm. The Arduino cycles through the numbers 0-9 by rotating the servos to form each digit.

## 🛠️ Components Used
*   1x Arduino Uno
*   7x Micro Servo Motors (SG90)
*   Jumper Wires
*   Cardboard (for the physical segments)
*   Wokwi Online Simulator (for virtual prototyping)

## 🔌 Wiring & Setup
The servos are connected to the Arduino as follows:
*   **Servo 1 (Segment A):** Pin 2
*   **Servo 2 (Segment B):** Pin 3
*   **Servo 3 (Segment C):** Pin 4
*   **Servo 4 (Segment D):** Pin 5
*   **Servo 5 (Segment E):** Pin 6
*   **Servo 6 (Segment F):** Pin 7
*   **Servo 7 (Segment G):** Pin 8
*   **Power (VCC):** 5V
*   **Ground (GND):** GND

## 🧠 How the Code Works
The code uses the standard Arduino `Servo.h` library. 
*   `0 degrees` = Segment lies flat (OFF).
*   `90 degrees` = Segment stands upright (ON).
The `displayDigit()` helper function takes 7 arguments (one for each segment) to easily set the angles for numbers 0 through 9, with a 4-second delay between each number.

## 🚀 How to Run the Simulation
You can view and run the interactive simulation directly on Wokwi: 
[Link to your Wokwi Project Here] 
*(Go to your Wokwi project, click "Share" at the top, and paste that link here!)*

## 🎯 What I Learned
*   How to control multiple servo motors simultaneously using an Arduino.
*   Mapping servo angles to create logical patterns (0-9).
*   Prototyping and simulating hardware virtually using Wokwi before physical assembly.
