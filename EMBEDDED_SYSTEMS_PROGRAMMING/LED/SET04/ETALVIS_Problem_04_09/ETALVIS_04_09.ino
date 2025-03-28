//EMBEDDED SYSTEMS PROGRAMMING - GPIO
//LED Control Problems
//SET 04 Problem 09
//Connect 8 LEDs to Port A from bit0 to bit7
//Connect 8 LEDs to Port B from bit0 to bit7
//Problem: Blink pair of LEDs on both rows from bit 0 to 7
//ex: bit 0 on both, bit 1 on both , etc.
void delay1(void);
void setup()
{
  volatile char *ddra, *ddrb;
  ddra = 0x21; ddrb = 0x24;
  *ddra = 0xFF; *ddrb = 0xFF;
}
void loop()
{
  volatile char *outa, *outb;
  outa = 0x22; outb = 0x25;
  unsigned char blink[8]={0x01,0x02,0x04,0x08,0x10,0x20,0x40,0x80};
  volatile int i;
  for(i=0;i<8;i++)
  {
    *outa = blink[i];
    *outb = *outa;
    delay1();
    *outa = 0x00;
    *outb = *outa;
    delay1();
    *outa = blink[i];
    *outb = *outa;
    delay1();
  }
}
void delay1(void)
{
  volatile long d;
  for (d = 0; d < 100000; d++);
}