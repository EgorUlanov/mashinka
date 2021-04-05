//1 мотор - ближе к батарейкам
//2 мотор - дальше к батарейкам

  #include <PRIZM.h>    
  PRIZM prizm; 
  int incomingByte = 0;
  
void setup() {        
  Serial.begin(9600);
  prizm.PrizmBegin();   
}
void ostanovka()
{
  Serial.println("ostanovilsia");
  prizm.setMotorPower(1,0);
  prizm.setMotorPower(2,0);
  delay(2000);
}
void vpered()
{
  Serial.println("vpered");
  prizm.setMotorPower(1,25);
  prizm.setMotorPower(2,-20);
  delay(500);
  ostanovka();
}
void povorot_vlevo()
{
  Serial.println("povarachivay");
  prizm.setMotorPower(1,25);
  prizm.setMotorPower(2,19);
  delay(1700);
  ostanovka();
}
void povorot_vpravo()
{
  Serial.println("povarachivay");
  prizm.setMotorPower(1,-25);
  prizm.setMotorPower(2,-19);
  delay(1700);
  ostanovka();
}

void loop() {     
  if (Serial.available()) {  //если есть доступные данные
        // считываем байт
        incomingByte = Serial.read();
        if (incomingByte == 49){
          vpered();
        }
        if (incomingByte == 50){
          povorot_vlevo();
        }
        if (incomingByte == 51){
          povorot_vpravo();
        }
        // отсылаем то, что получили
        Serial.print("I received: ");
        Serial.println(incomingByte, DEC);
    }

;
                 
  
}
