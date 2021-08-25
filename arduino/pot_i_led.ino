void setup() {
Serial.begin(9600);
pinMode(13, OUTPUT);
pinMode(A0, INPUT);
}
void loop() {
  Serial.println(analogRead(A0));
  delay(10);
  int pot = analogRead(A0);
  int led = map(pot, 0 ,1023, 0, 255);
  analogWrite(13, led);
}
