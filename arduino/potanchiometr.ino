boolean buttonWasUp = true;
boolean ledEnabled = false;
void setup() {
pinMode(13, OUTPUT);
pinMode(12, OUTPUT);
pinMode(8, OUTPUT);
pinMode(3, INPUT_PULLUP);
pinMode(A0, INPUT);
}
void loop() {
 
int r, t;
r=analogRead(A0);
t=r/4;
analogWrite(13, t);
 boolean buttonIsUp = digitalRead(3);
if (buttonWasUp && !buttonIsUp){
 delay(10);
 buttonIsUp = digitalRead(3);
 if (!buttonIsUp){
 ledEnabled=!ledEnabled;
 digitalWrite(12, ledEnabled);
 }
}
buttonWasUp=buttonIsUp;
}
