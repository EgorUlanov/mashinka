/*  PRIZM Controller example program
 *  Spin DC motor channel 1 for 5 seconds, then coast to a stop.
 *  After stopping, wait for 2 seconds, spin in opposite direction.
 *  Continue to repeat until RED reset button is pressed.
 *  author PWU on 08/05/2016
*/

  #include <PRIZM.h>    // include the PRIZM library in the sketch
  PRIZM prizm;          // instantiate a PRIZM object “prizm” so we can use its functions

void setup() {        

  prizm.PrizmBegin();   // Initialize the PRIZM controller
}
void vpered()
{
   prizm.setMotorPower(1,25);
  prizm.setMotorPower(2,-20);
  delay(5000);
  ostanovka();
}
void povorot_vlevo()
{
  prizm.setMotorPower(1,25);
  prizm.setMotorPower(2,20);
  delay(3200);
  ostanovka();
}
void povorot_vpravo()
{
  prizm.setMotorPower(1,-25);
  prizm.setMotorPower(2,-20);
  delay(3200);
  ostanovka();
}
void ostanovka()
{
  prizm.setMotorPower(1,0);
  prizm.setMotorPower(2,0);
  delay(2000);
}
void loop() {     
  vpered();
  povorot_vlevo();
  vpered();
  povorot_vlevo();
                 
  
}
