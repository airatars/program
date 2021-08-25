boolean buttonWasUp = true;
boolean ledEnabled = false;
#include <Servo.h>
Servo servo;
void setup() {
servo.attach(10);
pinMode(3, INPUT_PULLUP);
}

void loop() {
boolean buttonIsUp = digitalRead(3);
if (buttonWasUp && !buttonIsUp){
 delay(10);
 buttonIsUp = digitalRead(3);
 if (!buttonIsUp){
 ledEnabled=!ledEnabled;
 digitalWrite(13, ledEnabled);
 }
}
buttonWasUp=buttonIsUp;
}
