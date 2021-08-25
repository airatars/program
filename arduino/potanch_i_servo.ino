#include <Servo.h>
Servo servo;
void setup() {
Serial.begin(9600);
servo.attach(10);
pinMode(A0, INPUT);
}
void loop() {
  Serial.println(analogRead(A0)*0.175953079);
  delay(10);
  servo.write(analogRead(A0)*0.175953079);
}
