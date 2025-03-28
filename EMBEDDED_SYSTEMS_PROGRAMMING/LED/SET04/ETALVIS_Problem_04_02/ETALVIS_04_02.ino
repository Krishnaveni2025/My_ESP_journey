//EMBEDDED SYSTEMS PROGRAMMING - GPIO
//LED Control Problems
//SET 04 Problem 02
//Connect 8 LEDs to Port A from bit0 to bit7
//Connect 8 LEDs to Port B from bit0 to bit7
//Problem: Blink  first row and second row alternatively on every one second
void setup() {
  // put your setup code here, to run once:
  volatile char *ddrA,*ddrB;
  ddrA = 0x21; 
  ddrB = 0x24;
  *ddrA = 0xFF; //setting entire PORTA as OUTPUT
  *ddrB = 0xFF;//setting entire PORTB as OUTPUT
}

void loop() {
  // put your main code here, to run repeatedly:
  volatile char *outA,*outB,on,off;
  outA = 0x22;
  outB = 0x25;
  on = 0xFF;
  off = 0x00;
  *outA = on;
  delay1();//calling delay function
  *outA = off;
  *outB = on;
  delay1();//calling delay function
  *outB = off;
}
void delay1()
{
  volatile long d;
  for(d=0;d<600000;d++);
}