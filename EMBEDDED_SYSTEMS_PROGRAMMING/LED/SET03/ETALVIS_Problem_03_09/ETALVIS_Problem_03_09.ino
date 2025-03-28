//EMBEDDED SYSTEMS PROGRAMMING - GPIO
//LED Control Problems
//SET 03 Problem 09
//Connect 8 LEDs to Port A from bit0 to bit7
//Problem: GLow LEDs in the following order
//0 then 0,1 then 0,1,2.....0,1,2,3,4,5,6,7 with delay
void delay1();//delay function declaration
void setup() {
  // put your setup code here, to run once:
  volatile char *ddrA, *outA;
  ddrA = 0x21; outA = 0x22;
  *ddrA = 0xFF; //setting entire PORTA as OUTPUT
  unsigned char glowLeds[8] = {0x01,0x03,0x07,0x0F,0x1F,0x3F,0x7F,0xFF};
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