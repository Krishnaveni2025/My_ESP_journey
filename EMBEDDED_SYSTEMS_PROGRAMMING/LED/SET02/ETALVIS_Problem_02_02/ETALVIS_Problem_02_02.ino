//SELF ASSESSMENT - 2
//LEDs SET 02 Problem 02
//Problem: connect 8 LEDs to port A from bit 0 to 7
//Blink all the 8 LEDs at 1sec interval 
void delay1();//delay function declaration
void setup() {
  // put your setup code here, to run once:
  volatile char *ddrA;
  ddrA = 0x21;
  *ddrA = 0xFF;
}
void loop() {
  // put your main code here, to run repeatedly:
  volatile char *outA;
  outA = 0x22;
  *outA = 0xFF;
  delay1();
  *outA = 0x00;
  delay1();
}
void delay1()
{
  volatile long i;
  for(i=0;i<60000;i++);
}
