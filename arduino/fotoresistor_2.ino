int led = 13; 
int ldr = A5; 
int a;
void setup() 
{
Serial.begin(9600);
pinMode(led, OUTPUT); 
}
void loop() 
{

if (analogRead(ldr) < 500) digitalWrite(led, HIGH);
else digitalWrite(led, LOW);

a=analogRead(A5);
Serial.println("a=");Serial.println(a);
delay(1000);
}
