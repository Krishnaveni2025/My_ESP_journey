//EMBEDDED SYSTEMS PROGRAMMING - GPIO
//SEVEN SEGMENT CONTROL PROBLEMS
//connect a 4 seven segment displays on port A share the 8 port pins to all the diplays
//connect the common pins of seven segment diaplays to bit0,bit1,bit2,bit3 of portB
//SET 07 PROBLEM 08
//Display number 2025
void delay1(void);
void setup() {
  // put your setup code here, to run once:
  volatile char *ddrA, *ddrB;
  ddrA = 0x21; ddrB = 0x24;
  *ddrA = 0xFF; *ddrB = 0x0F;

}

void loop() {
  volatile char *outa, *outb;
  outa = 0x22; outb = 0x25;
  while (1)
  {
    *outb = 0x0E;//enables ones digit
    *outa = 0x6D;//displays 5
    delay1();//short delay
    *outb = 0x0F;//disables all the digits
    *outa = 0x00;//off the display
    delay1();//short delay
    *outb = 0x05;//enables tens & thousands digits
    *outa = 0x5B;//displays 2
    delay1();//short delay
    *outb = 0x0F;//disables all the digits
    *outa = 0x00;//off the display
    delay1();//short delay
    *outb = 0x0B;//enables hundred's digit
    *outa = 0x3F;//displays 0
    delay1();//short delay
    *outb = 0x0F;//disables all the digits
    *outa = 0x00;//off the display
    delay1();//short delay
  }
}
void delay1(void)
{
  volatile long d;
  for (d = 0; d < 5000; d++); //short delay
}
