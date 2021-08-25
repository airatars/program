int a=0;
void setup() {
pinMode(13, OUTPUT);
pinMode(3, OUTPUT);
Serial.begin(9600);
}

void loop() {
if (a> 500){
  analogWrite(9, 100);
  digitalWrite(13, HIGH);
  delay(100);
  digitalWrite(13, LOW);
  delay(1);
}
if (a<500){
  analogWrite(9, 0);
}
a=analogRead(A0);
Serial.println("a=");Serial.println(a);
delay(1000);
}
