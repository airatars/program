#include <IRremote.h> // подключаем библиотеку для IR приемника
IRrecv irrecv(A0);         // указываем пин, к которому подключен IR приемник
decode_results results;

#include <Servo.h> // подключаем библиотеку для серво
Servo myservo;       // создаем объект для управления серво

void setup() {
   irrecv.enableIRIn();  // запускаем прием инфракрасного сигнала
   Serial.begin(9600); // подключаем монитор порта

   myservo.attach(10); // указываем пин для подключения серво
}

void loop() {
   if (irrecv.decode(&results)) // если данные пришли выполняем команды
   {
      Serial.println(results.value); // отправляем полученные данные на порт
    
      // поворачиваем серво, в зависимости от ИК сигнала
      if (results.value == 16718055) { 
      myservo.write(0);
   }
      if (results.value == 16724175) { 
      myservo.write(90);
   }
     irrecv.resume(); // принимаем следующий сигнал на ИК приемнике
  }
}
