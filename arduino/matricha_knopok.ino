int o[4] {5,4,3,2};
int I[4] {9,8,7,6};
int v=0;
const char value[4] [4]
{{'1','4','7','*'},
 {'2','5','8','0'},
 {'3','6','9','#'},
 {'A','B','C','D'}
};
int b=0;
void setup () {
pinMode(2,OUTPUT);
pinMode(3,OUTPUT);
pinMode(4,OUTPUT);
pinMode(5,OUTPUT);

pinMode(6,INPUT);
digitalWrite(6, HIGH);
pinMode(7,INPUT);
digitalWrite(7, HIGH);
pinMode(8,INPUT);
digitalWrite(8, HIGH);
pinMode(9,INPUT);
digitalWrite(9, HIGH);

Serial.begin(9600);
}

void matrix()
{
  for (int i=1; i<=4; i++)
  {
    digitalWrite(I[i-1], LOW);
    for(int j=1; j<=4; j++)
    {
      if (digitalRead(I[j-1]) ==LOW)
      {
        Serial.println(value[i-1][j-1]);
        delay(175);
      }
    }
    digitalWrite(o[i-1], HIGH);
  }
}
void loop() {
matrix();

}
