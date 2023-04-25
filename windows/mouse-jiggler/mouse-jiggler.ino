#include <DigiMouse.h>
void setup() {
  DigiMouse.begin();
}

void loop() {
  DigiMouse.move(0,100,0);
  DigiMouse.delay(500);
  DigiMouse.move(100,0,0);
  DigiMouse.delay(500);
  DigiMouse.move(0,-100,0);
  DigiMouse.delay(500);
  DigiMouse.move(-100,0,0);
  DigiMouse.delay(500);
}
