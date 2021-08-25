boolean s;
void setup() {
pinMode(13, OUTPUT);
pinMode(A0, INPUT);
s=false;
Serial.begin(9600);
}
void loop() {
Serial.println(analogRead(A0));
if(analogRead(A0)>60){
  s=!s;
digitalWrite(12, s);
delay(20);
}
}
