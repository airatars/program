#include <IRremote.h> // подключаем библиотеку для IR приемника

IRrecv irrecv(A0); // указываем пин, к которому подключен IR приемник
decode_results results;

void setup() {
   irrecv.enableIRIn();  // запускаем прием инфракрасного сигнала
   Serial.begin(9600); // подключаем монитор порта
   pinMode(13, OUTPUT);
   pinMode(12, OUTPUT); // пин 12 будет выходом (англ. «output»)
   pinMode(11, OUTPUT);
   pinMode(A0, INPUT); // пин A0 будет входом (англ. «intput»)
  
}

void loop() {
   if (irrecv.decode(&results)) // если данные пришли выполняем команды
   {
      Serial.println(results.value); // отправляем полученные данные на порт
    
      // включаем и выключаем светодиод, в зависимости от полученного сигнала  
      if (results.value == 16724175) { 
      digitalWrite(13, HIGH);
   }
      if (results.value == 16716015) { 
      digitalWrite(13, LOW);
   }
      if (results.value == 16718055) { 
      digitalWrite(12, HIGH);
   }
      if (results.value == 16726215) { 
      digitalWrite(12, LOW);
   }
      if (results.value == 16743045) { 
      digitalWrite(11, HIGH);
   }
      if (results.value == 16734885) { 
      digitalWrite(11, LOW);
   }
      irrecv.resume(); // принимаем следующий сигнал на ИК приемнике
   }
}
