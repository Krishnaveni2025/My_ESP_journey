//SELF ASSESSMENT - 2
//LEDs SET 02 Problem 03
//Problem: connect 8 LEDs to port B from bit 0 to 7
//Glow all the 8 LEDs one by one. Do not off the LED. 
void delay1();//delay function declaration
void setup() {
  // put your setup code here, to run once:
  volatile char *ddrB;
  ddrB = 0x24;
  *ddrB = 0xFF;
}
void loop() {
  // put your main code here, to run repeatedly:
  volatile char *outB;
  unsigned char gleds[8]={0x01,0x02,0x04,0x08,0x10,0x20,0x40,0x80};
  volatile int c;
  outB = 0x25;
  for(c=0;c<8;c++)
  {
    *outB = gleds[c];
    delay1();
  }
}
void delay1()
{
  volatile long i;
  for(i=0;i<600000;i++);
}
