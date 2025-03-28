//EMBEDDED SYSTEMS PROGRAMMING - GPIO
//LED Control Problems
//SET 04 Problem 06
//Connect 8 LEDs to Port A from bit0 to bit7
//Connect 8 LEDs to Port B from bit0 to bit7
//Problem: Blink two by two all the 16 leds from top  to the bottom and reverse
void row1(void);
//void row2(void);
//void rrow1(void);
//void rrow2(void);
void delay1(void);
void setup()
{
  volatile char *ddra, *ddrb;
  ddra = 0x21; ddrb = 0x24;
  *ddra = 0xFF; *ddrb = 0xFF;
}
void loop()
{
  row1();//blink two by two leds from top row  left to right
  row2();//blink two by two leds from bottom row right to left
  rrow2();//blink two by two leds from bottom row left to right
  rrow1();//blink two by two leds from top row right to left
}
void row1(void)//top left to right
{
  volatile char *outB,b;
  outB = 0x25;
  unsigned char blinkb[4] = {0x03,0x0C,0x30,0xC0};
  for (b = 0; b < 4; b++)
  {
    *outB = blinkb[b];
    delay1();
    *outB =0x00;
    delay1();
    *outB = blinkb[b];
    delay1();
  }
  if(b==4)
  {
    *outB = 0x00;
    delay1();
  }
}
void rrow1(void)//top right to left
{
  volatile char *outB,b;
  outB = 0x25;
  unsigned char blinkb[4] = {0x03,0x0C,0x30,0xC0};
  for (b = 3; b > 0; b--)
  {
    *outB = blinkb[b];
    delay1();
    *outB =0x00;
    delay1();
    *outB = blinkb[b];
    delay1();
  }
  if(b==0)
  {
    *outB = blinkb[b];
    delay1();
    *outB = 0x00;
    delay1();
  }
}
void row2(void)//bottom  right to left
{
  volatile char *outA,a;
  outA = 0x22;
  unsigned char blinka[4] = {0x03,0x0C,0x30,0xC0};
  for (a = 3; a > 0; a--)
  {
    *outA = blinka[a];
    delay1();
    *outA =0x00;
    delay1();
    *outA = blinka[a];
    delay1();
  }
  if(a==0)
  {
    *outA = blinka[a];
    delay1();
    *outA = 0x00;
    delay1();
  }
}
void rrow2(void)//bottom left to right
{
  volatile char *outA,a;
  outA = 0x22;
  unsigned char blinka[4] = {0x03,0x0C,0x30,0xC0};
  for (a = 0; a < 4; a++)
  {
    *outA = blinka[a];
    delay1();
    *outA =0x00;
    delay1();
    *outA = blinka[a];
    delay1();
  }
  if(a==4)
  {
    *outA = 0x00;
    delay1();
  }
}

void delay1(void)
{
  volatile long d;
  for (d = 0; d < 80000; d++);
}