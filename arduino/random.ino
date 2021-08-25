void setup() {
Serial.begin(9600);
}

void loop() {
Serial.println(random(20));
delay(1000);
}
