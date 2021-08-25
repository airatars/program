byte val;
void setup() {
Serial.begin(9600);

}

void loop() {
if (Serial.available()){
  val=Serial.parseInt();
  switch (val){
    case 3: Serial.println("Вы ввели 3");
    break;
    case 5: Serial.println("Вы ввели 5");
    break;
    case 7: Serial.println("Вы ввели 7");
    break;
    default : Serial.println("Мимо!");
  }
}
}
