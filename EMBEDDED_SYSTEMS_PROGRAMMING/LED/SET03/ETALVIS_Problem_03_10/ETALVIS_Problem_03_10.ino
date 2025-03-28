//EMBEDDED SYSTEMS PROGRAMMING - GPIO
//LED Control Problems
//SET 03 Problem 10
//Connect 8 LEDs to Port A from bit0 to bit7
//Problem: GLow LEDs in the following order
//7 then 7,6 then 7,6,5.....7,6,5,4,3,2,1,0 with delay
void delay1();//delay function declaration
void setup() {
  // put your setup code here, to run once:
  volatile char *ddrA, *outA;
  ddrA = 0x21; outA = 0x22;
  *ddrA = 0xFF; //setting entire PORTA as OUTPUT
  unsigned char glowLeds[8] = {0x80,0xC0,0xE0,0xF0,0xF8,0xFC,0xFE,0xFF};
  volatile int g ;
  for(g =0;g<8;g++)
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
  for (d = 0; d <= 600000; d++);
}