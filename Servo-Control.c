//Internal Clock of Attiny Tiny-85 Set to 1Mhz 
#include <ServoManager.h>

static const int SERVO_PIN1 = 4; // PB4, pin 3 on the DIP8 ATTiny85
static const int SERVO_PIN2 = 0;
PrecisionServo* servo1;
PrecisionServo* servo2;

void setup() {
  ServoManager::setup(1);
 ServoManager::setup(2);
  servo1 = ServoManager::createServo(SERVO_PIN1);
   servo2 = ServoManager::createServo(SERVO_PIN2);
  servo1->setSetting(SERVO_MEDIUM_ENDPOINT);
   servo2->setSetting(SERVO_MEDIUM_ENDPOINT);
}

void loop() {
ONE();
TWO();
}
void ONE() {
  servo1->setTarget(0);
  ServoManager::waitUntilFinished();

  servo1->setTarget(180);
  ServoManager::waitUntilFinished();
}
void TWO() {
  servo2->setTarget(0);
  ServoManager::waitUntilFinished();

  servo2->setTarget(180);
  ServoManager::waitUntilFinished();
}
