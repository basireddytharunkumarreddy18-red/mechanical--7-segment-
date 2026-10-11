#include <Servo.h>

// Create servo objects for each segment
Servo segA;
Servo segB;
Servo segC;
Servo segD;
Servo segE;
Servo segF;
Servo segG;

// Define the servo pins
const int pinA = 2;
const int pinB = 3;
const int pinC = 4;
const int pinD = 5;
const int pinE = 6;
const int pinF = 7;
const int pinG = 8;

// Angles for ON and OFF (You may need to adjust these later)
const int ON_ANGLE = 90;  // Segment sticks up (ON)
const int OFF_ANGLE = 0;  // Segment lies flat (OFF)

void setup() {
  // Attach the servos to their pins
  segA.attach(pinA);
  segB.attach(pinB);
  segC.attach(pinC);
  segD.attach(pinD);
  segE.attach(pinE);
  segF.attach(pinF);
  segG.attach(pinG);
}

void loop() {
  // Cycle through numbers 0 to 9
  
  // Number 0: A, B, C, D, E, F ON. G OFF.
  displayDigit(ON_ANGLE, ON_ANGLE, ON_ANGLE, ON_ANGLE, ON_ANGLE, ON_ANGLE, OFF_ANGLE);
  delay(4000); // Wait 4 seconds

  // Number 1: B, C ON. Rest OFF.
  displayDigit(OFF_ANGLE, ON_ANGLE, ON_ANGLE, OFF_ANGLE, OFF_ANGLE, OFF_ANGLE, OFF_ANGLE);
  delay(4000);

  // Number 2: A, B, G, E, D ON. C, F OFF.
  displayDigit(ON_ANGLE, ON_ANGLE, OFF_ANGLE, ON_ANGLE, ON_ANGLE, OFF_ANGLE, ON_ANGLE);
  delay(4000);

  // Number 3: A, B, C, D, G ON. E, F OFF.
  displayDigit(ON_ANGLE, ON_ANGLE, ON_ANGLE, ON_ANGLE, OFF_ANGLE, OFF_ANGLE, ON_ANGLE);
  delay(4000);

  // Number 4: F, G, B, C ON. A, D, E OFF.
  displayDigit(OFF_ANGLE, ON_ANGLE, ON_ANGLE, OFF_ANGLE, OFF_ANGLE, ON_ANGLE, ON_ANGLE);
  delay(4000);

  // Number 5: A, F, G, C, D ON. B, E OFF.
  displayDigit(ON_ANGLE, OFF_ANGLE, ON_ANGLE, ON_ANGLE, ON_ANGLE, ON_ANGLE, OFF_ANGLE);
  delay(4000);

  // Number 6: A, F, G, E, D, C ON. B OFF.
  displayDigit(ON_ANGLE, OFF_ANGLE, ON_ANGLE, ON_ANGLE, ON_ANGLE, ON_ANGLE, ON_ANGLE);
  delay(4000);

  // Number 7: A, B, C ON. Rest OFF.
  displayDigit(ON_ANGLE, ON_ANGLE, ON_ANGLE, OFF_ANGLE, OFF_ANGLE, OFF_ANGLE, OFF_ANGLE);
  delay(4000);

  // Number 8: ALL ON.
  displayDigit(ON_ANGLE, ON_ANGLE, ON_ANGLE, ON_ANGLE, ON_ANGLE, ON_ANGLE, ON_ANGLE);
  delay(4000);

  // Number 9: A, B, C, D, F, G ON. E OFF.
  displayDigit(ON_ANGLE, ON_ANGLE, ON_ANGLE, ON_ANGLE, OFF_ANGLE, ON_ANGLE, ON_ANGLE);
  delay(4000);
}

// Helper function to set angles for all 7 segments easily
void displayDigit(int a, int b, int c, int d, int e, int f, int g) {
  segA.write(a);
  segB.write(b);
  segC.write(c);
  segD.write(d);
  segE.write(e);
  segF.write(f);
  segG.write(g);
}


