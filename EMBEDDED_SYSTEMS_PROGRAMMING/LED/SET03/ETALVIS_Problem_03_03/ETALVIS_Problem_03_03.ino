//EMBEDDED SYSTEMS PROGRAMMING - GPIO
//LED Control Problems
//SET 03 Problem 03
//Connect 8 LEDs to Port A from bit0 to bit7
//Problem: GLow 0 to 7 LEDs with delay & 7 to 0 with delay
void delay1();//delay function declaration
void setup() {
  // put your setup code here, to run once:
  volatile char *ddrA, *outA;
  ddrA = 0x21; outA = 0x22;
  *ddrA = 0xFF; //setting entire PORTA as OUTPUT
  unsigned char glowLeds[8] = {0x01, 0x02, 0x04, 0x08, 0x10, 0x20, 0x40, 0x80};
  volatile int g = 0 ;
  for (g = 0; g < 8; g++)//0 to 7 LEDs with delay 
  {
    *outA = glowLeds[g];
    delay1();//calling delay function
  }
  for (g =; g >= 0; g--)// 7 to 0 with delay
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