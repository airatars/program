    #define BUZZER_PIN   12  
    #define PLAYER_COUNT 2   
    int buttonPins[PLAYER_COUNT] = {3, 13};
    int ledPins[PLAYER_COUNT] = {9, 11};
     
    void setup()
    {
      pinMode(BUZZER_PIN, OUTPUT);
      pinMode(7, OUTPUT);
      for (int player = 0; player < PLAYER_COUNT; ++player) {
        pinMode(ledPins[player], OUTPUT);
        pinMode(buttonPins[player], INPUT_PULLUP);
      }
    }
     
    void loop()
    {
      delay(random(2000, 7000));
      tone(7, 3000, 250);
      digitalWrite(BUZZER_PIN,HIGH); 
     delay(250);
     digitalWrite(BUZZER_PIN,LOW);
      for (int player = 0; ; player = (player+1) % PLAYER_COUNT) {
        if (!digitalRead(buttonPins[player])) {
          digitalWrite(ledPins[player], HIGH);
          tone(7, 4000, 1000);
          digitalWrite(12, HIGH);
          delay(1000);
          digitalWrite(12,LOW);
          digitalWrite(ledPins[player], LOW);
          break; 
        }
      }
    }
