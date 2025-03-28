//EMBEDDED SYSTEMS PROGRAMMING - GPIO
//LED Control Problems
//SET 04 Problem 05
//Connect 8 LEDs to Port A from bit0 to bit7
//Connect 8 LEDs to Port B from bit0 to bit7
//Problem: Blink one by one all the 16 leds from top  to the bottom and reverse
void delay1();//delay function declaration
void row1();
void row2();
void rrow1();
void rrow2();
void setup() {
  // put your setup code here, to run once:
  volatile char *ddrA, *ddrB;
  ddrA = 0x21;
  ddrB = 0x24;
  *ddrA = 0xFF; //setting entire PORTA as OUTPUT
  *ddrB = 0xFF;//setting entire PORTB as OUTPUT
}

void loop() {
  // put your main code here, to run repeatedly:
  row2();//2nd row leds glows 0 to 7
  row1();//1st row leds glows 7 to 0
  rrow1();//1st row leds glows 0 to 7
  rrow2();//2nd row leds glows 7 to 0

}
void row1()
{
  volatile char *outA, a;
  outA = 0x22; a = 7;
  unsigned char blinka[8] = {0x80, 0x40, 0x20, 0x10, 0x08, 0x04, 0x02, 0x01};
  for (a = 7; a > 0; a--)
  {
    *outA = blinka[a];
    delay1();
    *outA = 0x00;
    delay1();
    *outA = blinka[a];
    delay1();
  }
  if(a==0)
  {
    *outA = blinka[a];
    delay1();
    *outA = 0x00;
  }
}
void rrow1()
{
  volatile char *outA,a;
  outA = 0x22;
  unsigned char blinka[8] = {0x80, 0x40, 0x20, 0x10, 0x08, 0x04, 0x02, 0x01};
  for (a = 0; a < 8; a++)
  {
    *outA = blinka[a];
    delay1();
    *outA =0x00;
    delay1();
    *outA = blinka[a];
    delay1();
  }
  if(a==8)
  {
    *outA = 0x00;
  }
}
void row2()
{
  volatile char *outB, b;
  outB = 0x25; b = 7;
  unsigned char blinkb[8] = {0x80, 0x40, 0x20, 0x10, 0x08, 0x04, 0x02, 0x01};
  for (b = 7; b > 0; b--)
  {
    *outB = blinkb[b];
    delay1();
    *outB = 0x00;
    delay1();
    *outB = blinkb[b];
    delay1();
  }
   if(b==0)
  {
    *outB = blinkb[b];
    delay1();
    *outB = 0x00;
  }
}
void rrow2()
{
  volatile char *outB,b;
  outB = 0x25;
  unsigned char blinkb[8] = {0x80, 0x40, 0x20, 0x10, 0x08, 0x04, 0x02, 0x01};
  for (b = 0; b < 8; b++)
  {
    *outB = blinkb[b];
    delay1();
    *outB = 0x00;
    delay1();
    *outB = blinkb[b];
    delay1();
  }
    if(b==8)
  {
    *outB = 0x00;
  }
}
void delay1()
{
  volatile long d;
  for (d = 0; d < 600000; d++);
}