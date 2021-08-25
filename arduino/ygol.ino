int sens = 0;
void setup() {
  pinMode(13, OUTPUT);
  pinMode(A0, INPUT);
  Serial.begin(9600);
}
void loop() {
  sens = analogRead(A0);
  Serial.println(sens);
  if (sens > 50)digitalWrite(13, HIGH);
  if (sens < 50)digitalWrite(13, LOW);
}
