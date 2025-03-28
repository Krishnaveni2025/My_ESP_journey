//EMBEDDED SYSTEMS PROGRAMMING - GPIO
//LED Control Problems
//SET 03 Problem 02
//Connect 8 LEDs to Port A from bit0 to bit7
//Problem: GLow the LEDs in the following order
//0,4 delay - 1,5 delay - 2,6 delay - 3,7 delay
void delay1();//delay function declaration
void setup() {
  // put your setup code here, to run once:
  volatile char *ddrA,*outA;
  ddrA = 0x21;outA=0x22;
  *ddrA=0xFF;//setting entire PORTA as OUTPUT
  unsigned char glowLeds[4]={0x88,0x44,0x22,0x11};
  volatile int g = 3 ;
  for(g=3;g>=0;g--)
  {
    *outA = glowLeds[g];
    delay1();//calling delay function
  }

}

void loop() {
  // put your main code here, to run repeatedly:
}

void delay1()//delay function defination
{
  volatile long d;
  for(d=0;d<=600000;d++);
}