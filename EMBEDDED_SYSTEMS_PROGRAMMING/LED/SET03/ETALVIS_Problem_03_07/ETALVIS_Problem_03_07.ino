//EMBEDDED SYSTEMS PROGRAMMING - GPIO
//LED Control Problems
//SET 03 Problem 07
//Connect 8 LEDs to Port A from bit0 to bit7
//Problem: GLow LEDs in the following order
//0,1,2 delay - 5,6,7 delay - 3,4 delay 
void delay1();//delay function declaration
void setup() {
  // put your setup code here, to run once:
  volatile char *ddrA, *outA;
  ddrA = 0x21; outA = 0x22;
  *ddrA = 0xFF; //setting entire PORTA as OUTPUT
  unsigned char glowLeds[3] = {0x07, 0xE0, 0x18};
  volatile int g ;
  for(g =0;g<3;g++)
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