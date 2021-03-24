// дальномер
int echoPin = 7; 
int trigPin = 6;
//Двигатель A
int ENA = 3;
int in1 = 4;
int in2 = 5;
// Двигатель B
int ENB = 9;
int in3 = 10;
int in4 = 11;
 
void setup()
{
  Serial.begin(9600);
  pinMode(ENA, OUTPUT);
  pinMode(ENB, OUTPUT);
  pinMode(in1, OUTPUT);
  pinMode(in2, OUTPUT);
  pinMode(in3, OUTPUT);
  pinMode(in4, OUTPUT);
  pinMode(trigPin, OUTPUT); 
  pinMode(echoPin, INPUT);
}
void dictance()
{
  int duration, cm; 
    digitalWrite(trigPin, LOW); 
    delayMicroseconds(2); 
    digitalWrite(trigPin, HIGH); 
    delayMicroseconds(10); 
    digitalWrite(trigPin, LOW); 
    duration = pulseIn(echoPin, HIGH); 
    cm = duration / 58;
    Serial.print(cm); 
    Serial.println(" cm"); 
}
void stop()
{
  Serial.println("ostanovilsia");
  digitalWrite(11,0);
  digitalWrite(10,0);
  digitalWrite(4,0);
  digitalWrite(5,0);
   analogWrite(ENA,0);
  analogWrite(ENB,0);
  delay(2000);
}
void vpered ()
{
  Serial.println("vpered");
  digitalWrite(11,1);
  digitalWrite(10,0);
  digitalWrite(4,1);
  digitalWrite(5,0);
  analogWrite(ENA,100);
  analogWrite(ENB,100);
  delay(2000);
  stop();
}

void povorot()
{
  Serial.println("povarachivay");
  digitalWrite(11,1);
  digitalWrite(10,0);
  digitalWrite(4,1);
  digitalWrite(5,0);
   analogWrite(ENA,100);
  analogWrite(ENB,0);
  delay(2000);
  stop();
}
void loop()
{
  dictance();
  vpered();
  
  povorot();
  
 // vpered();
 
 // povorot();
}
