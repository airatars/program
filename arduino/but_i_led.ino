boolean butWas = true;
boolean led = false;

void setup() {
  pinMode(13, OUTPUT);
  pinMode(4, INPUT_PULLUP);

}

void loop() {
  boolean butIs = digitalRead(4);

  if (butWas && !butIs){
    delay(10);
    butIs = digitalRead(4);

    if (!butIs){
      led = !led;
      digitalWrite(13, led);
    }
  }
butWas = butIs;
}
