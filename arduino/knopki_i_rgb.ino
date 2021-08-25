boolean buttonWasUp = true;
boolean ledEnabled = false;
boolean zz = true;
boolean xx = false;
boolean aa = true;
boolean ss = false;
void setup() {
pinMode(13, OUTPUT);
pinMode(3, INPUT_PULLUP);
pinMode(12, OUTPUT);
pinMode(4, INPUT_PULLUP);
pinMode(11, OUTPUT);
pinMode(5, INPUT_PULLUP);
}

void loop() {
boolean buttonIsUp = digitalRead(3);
if (buttonWasUp && !buttonIsUp){
 delay(10);
 buttonIsUp = digitalRead(3);
 if (!buttonIsUp){
 ledEnabled=!ledEnabled;
 digitalWrite(13, ledEnabled);
 }
}
buttonWasUp=buttonIsUp;

boolean daa = digitalRead(4);
if (zz && !daa){
 delay(10);
 daa = digitalRead(4);
 if (!daa){
 xx=!xx;
 digitalWrite(12, xx);
 }
}
zz=daa;

boolean ass = digitalRead(5);
if (aa && !ass){
 delay(10);
 ass = digitalRead(5);
 if (!ass){
 ss=!ss;
 digitalWrite(11, ss);
 }
}
aa=ass;
}
