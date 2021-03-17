int enA = 3;
int in1 = 4;
int in2 = 5;
// Двигатель B
int enB = 11;
int in3 = 10;
int in4 = 9;
 
void setup()
{
  pinMode(enA, OUTPUT);
  pinMode(enB, OUTPUT);
  pinMode(in1, OUTPUT);
  pinMode(in2, OUTPUT);
  pinMode(in3, OUTPUT);
  pinMode(in4, OUTPUT);
  digitalWrite(in1, HIGH);
  digitalWrite(in2, LOW);
  digitalWrite(in3, HIGH);
  digitalWrite(in4, LOW);
}
void loop()
{
  analogWrite(ENA,100);
  analogWrite(ENB,100);
  delay(2000);
   analogWrite(ENA,0);
  analogWrite(ENB,0);
  delay(2000);
   analogWrite(ENA,100);
  analogWrite(ENB,0);
  delay(2000);
   analogWrite(ENA,0);
  analogWrite(ENB,0);
  delay(2000);
   analogWrite(ENA,100);
  analogWrite(ENB,100);
  delay(2000);
   analogWrite(ENA,0);
  analogWrite(ENB,0);
  delay(2000);
   analogWrite(ENA,100);
  analogWrite(ENB,0);
  delay(2000);
   analogWrite(ENA,0);
  analogWrite(ENB,0);
  delay(2000);
}
