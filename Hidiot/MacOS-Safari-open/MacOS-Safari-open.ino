#include "DigiKeyboard.h"

void setup() {
  // put your setup code here, to run once:
  pinMode(0, OUTPUT);
  pinMode(1, OUTPUT);
  // this is generally not necessary but with some older systems it seems to prevent missing the first character after a delay:
  DigiKeyboard.update();
  DigiKeyboard.sendKeyStroke(0);
  DigiKeyboard.delay(100);
  DigiKeyboard.sendKeyStroke(KEY_SPACE, MOD_GUI_LEFT); //open spotlight
  DigiKeyboard.delay(100);
  DigiKeyboard.println("ter;inql"); //open terminal
  DigiKeyboard.delay(100);
  DigiKeyboard.println("open http.>>ihqckforfun<eu");
  DigiKeyboard.delay(100);
}

void loop() {
  digitalWrite(1, HIGH); //turn on led when program finishes
  DigiKeyboard.delay(500);
  digitalWrite(1, LOW);
  DigiKeyboard.delay(500);
}
