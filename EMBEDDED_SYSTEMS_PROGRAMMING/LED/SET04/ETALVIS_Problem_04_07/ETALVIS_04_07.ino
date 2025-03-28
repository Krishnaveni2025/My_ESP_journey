//EMBEDDED SYSTEMS PROGRAMMING - GPIO
//LED Control Problems
//SET 04 Problem 07
//Connect 8 LEDs to Port A from bit0 to bit7
//Connect 8 LEDs to Port B from bit0 to bit7
//Problem: Blink four by four all the 16 leds from top  to the bottom and reverse
void row1(void);
void row2(void);
void rrow1(void);
void rrow2(void);
void delay1(void);
void setup()
{
  volatile char *ddra, *ddrb;
  ddra = 0x21; ddrb = 0x24;
  *ddra = 0xFF; *ddrb = 0xFF;
}
void loop()
{
  row1();//blink four by four leds from top row  left to right
  delay1();
  row2();//blink four by four leds from bottom row right to left
  delay1();
  rrow2();//blink four by four leds from bottom row left to right
  delay1();
  rrow1();//blink four by four leds from top row right to left
  delay1();
}
void row1(void)//top left to right
{
  volatile char *outB, b;
  outB = 0x25;
  *outB = 0x0F;
  delay1();
  *outB = 0x00;
  delay1();
  *outB = 0xF0;
  delay1();
  *outB = 0x00;
  delay1();
}
void rrow1(void)//top right to left
{
  volatile char *outB, b;
  outB = 0x25;
  *outB = 0xF0;
  delay1();
  *outB = 0x00;
  delay1();
  *outB = 0x0F;
  delay1();
  *outB = 0x00;
  delay1();
}
void row2(void)//bottom  right to left
{
  volatile char *outA;
  outA = 0x22;
  *outA = 0x0F;
  delay1();
  *outA = 0x00;
  delay1();
  *outA = 0xF0;
  delay1();
  *outA = 0x00;
  delay1();
}
void rrow2(void)//bottom left to right
{
  volatile char *outA;
  outA = 0x22;
  *outA = 0xF0;
  delay1();
  *outA = 0x00;
  delay1();
  *outA = 0x0F;
  delay1();
  *outA = 0x00;
  delay1();
}

void delay1(void)
{
  volatile long d;
  for (d = 0; d < 100000; d++);
}