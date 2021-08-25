// библиотека для ИК приёмника
#include <IRremote.h>
// подключаем библиотеку для работы с сервоприводами
#include <Servo.h> 
// создаём объект для управления сервоприводом
Servo myservoFordL;
Servo myservoFordR;
Servo myservoBackL;
Servo myservoBackR;
 
// даем имя пину подключения ИК приёмника
int RECV_PIN = 4;
 
// указываем к какому пину подключен ИК приёмник
IRrecv irrecv(RECV_PIN);
decode_results results;
 
void setup() 
{
  // запускаем работу ИК приемника
  irrecv.enableIRIn();
  // подключаем сервоприводы
  myservoFordL.attach(8);
  myservoFordR.attach(9);
  myservoBackL.attach(10);
  myservoBackR.attach(11);
} 
 
void loop() 
{
  // принимаем данные с ИК пульта
  // в зависимости от нажатой кнопки пульта
  // даём разные команды роботу
  if (irrecv.decode(&results)) {
    if (results.value == 0x1689609F) {
      ford();
    } else if (results.value == 0x1689B847) {
      back();   
    } else if (results.value == 0x168910EF) {
      left();   
    } else if (results.value == 0x16899867) {
      right();   
    } else if (results.value == 0x168938C7) {
      stop();   
    }
    // ждем следующее значение
    irrecv.resume();
  }
  //делаем задержку
  delay(100);
}
 
// функция движение вперёд
void ford() {
  myservoFordL.write(0);
  myservoFordR.write(180);
  myservoBackL.write(0);
  myservoBackR.write(180);
}
 
// функция движение назад
void back() {
  myservoFordL.write(180);
  myservoFordR.write(0);
  myservoBackL.write(180);
  myservoBackR.write(0);
}
 
// функция поворота налево
void left() {
  myservoFordL.write(180);
  myservoFordR.write(180);
  myservoBackL.write(180);
  myservoBackR.write(180);
}
 
// функция поворота направо
void right() {
  myservoFordL.write(0);
  myservoFordR.write(0);
  myservoBackL.write(0);
  myservoBackR.write(0);
}
 
// функция остановки
void stop() {
  myservoFordL.write(90);
  myservoFordR.write(90);
  myservoBackL.write(90);
  myservoBackR.write(90);
}
