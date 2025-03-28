//EMBEDDED SYSTEMS PROGRAMMING - GPIO
//LED Control Problems
//SET 04 Problem 08
//Connect 8 LEDs to Port A from bit0 to bit7
//Connect 8 LEDs to Port B from bit0 to bit7
//Problem: Glow alternate leds from top to bottom and reverse
//Hint: 0x55 , 0xAA & 0xAA , 0x55
void delay1(void);
void BtoT(void);//bottom to top
void TtoB(void);//top to bottom
void setup()
{
  volatile char *ddra, *ddrb;
  ddra = 0x21; ddrb = 0x24;
  *ddra = 0xFF; *ddrb = 0xFF;
}
void loop()
{
  TtoB();
  BtoT();
}
void TtoB() {
  volatile char *outa, *outb;
  outa = 0x22; outb = 0x25;
  *outb = 0x55;
  delay1();
  *outb = 0x00;
  delay1();
  *outb = 0xAA;
  delay1();
  *outb = 0x00;
  delay1();
  *outa = 0x55;
  delay1();
  *outa = 0x00;
  delay1();
  *outa = 0xAA;
  delay1();
  *outb = 0x00;
  delay1();
}
void BtoT(void) {
  volatile char *outa, *outb;
  outa = 0x22; outb = 0x25;
  *outa = 0x55;
  delay1();
  *outa = 0x00;
  delay1();
  *outa = 0xAA;
  delay1();
  *outa = 0x00;
  delay1();
  *outb = 0xAA;
  delay1();
  *outb = 0x00;
  delay1();
  *outb = 0x55;
  delay1();
  *outb = 0x00;
  delay1();
}
void delay1(void)
{
  volatile long d;
  for (d = 0; d < 1000000; d++);
}