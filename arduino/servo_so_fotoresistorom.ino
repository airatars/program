#include <Servo.h>
Servo servo;
void setup() {
Serial.begin(9600);
servo.attach(10);
}
void loop() {
  Serial.print(analogRead(A0));
  delay(1000);
if (analogRead(A0) < 800){
  servo.write(180);
}
else servo.write(0); 
}
