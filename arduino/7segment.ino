#define A  8
#define B  7
#define C  6
#define D  5
#define E  4
#define F  3
#define G  2

void setup() {
   pinMode(A, OUTPUT);
   pinMode(B, OUTPUT);
   pinMode(C, OUTPUT);
   pinMode(D, OUTPUT);
   pinMode(E, OUTPUT);
   pinMode(F, OUTPUT);
   pinMode(G, OUTPUT);
}

void loop() {
   digitalWrite(A, LOW); 
   digitalWrite(B, HIGH);
   digitalWrite(C, HIGH);
   digitalWrite(D, LOW);
   digitalWrite(E, LOW);
   digitalWrite(F, LOW);
   digitalWrite(G, LOW);
   delay(1000);
   
   digitalWrite(A, HIGH); 
   digitalWrite(B, HIGH);
   digitalWrite(C, LOW);
   digitalWrite(D, HIGH);
   digitalWrite(E, HIGH);
   digitalWrite(F, LOW);
   digitalWrite(G, HIGH);
   delay(1000);
   
   digitalWrite(A, HIGH); 
   digitalWrite(B, HIGH);
   digitalWrite(C, HIGH);
   digitalWrite(D, HIGH);
   digitalWrite(E, LOW);
   digitalWrite(F, LOW);
   digitalWrite(G, HIGH);
   delay(1000);

   digitalWrite(A, LOW); 
   digitalWrite(B, HIGH);
   digitalWrite(C, HIGH);
   digitalWrite(D, LOW);
   digitalWrite(E, LOW);
   digitalWrite(F, HIGH);
   digitalWrite(G, HIGH);
   delay(1000);

   digitalWrite(A, HIGH); 
   digitalWrite(B, LOW);
   digitalWrite(C, HIGH);
   digitalWrite(D, HIGH);
   digitalWrite(E, LOW);
   digitalWrite(F, HIGH);
   digitalWrite(G, HIGH);
   delay(1000);
}
