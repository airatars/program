int value;
void setup() {
  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(A1, INPUT);
  pinMode(3, INPUT);
}
void loop() {
  int buttonState = digitalRead(3); // считываем состояние кнопки

  if (buttonState == HIGH) {
    digitalWrite(13, HIGH); // зажигаем светодиод при нажатии кнопки
  }
  else {
    digitalWrite(13, LOW); // гасим светодиод при отпускании кнопки
  }

  
  value = analogRead(A1);
  if(value<50)digitalWrite(12, LOW);
  if(value>50) digitalWrite(12, HIGH);
  

}
