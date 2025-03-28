//EMBEDDED SYSTEMS PROGRAMMING - GPIO
//LED Control Problems
//SET 04 Problem 03
//Connect 8 LEDs to Port A from bit0 to bit7
//Connect 8 LEDs to Port B from bit0 to bit7
//Problem: Blink one by one all the 16 leds from the  BOTTOM ROW TO TOP ROW
void delay1();//delay function declaration
void row1();
void row2();
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
  row1();//1st row leds glows
  row2();//2nd row leds glows
}
void row1()
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