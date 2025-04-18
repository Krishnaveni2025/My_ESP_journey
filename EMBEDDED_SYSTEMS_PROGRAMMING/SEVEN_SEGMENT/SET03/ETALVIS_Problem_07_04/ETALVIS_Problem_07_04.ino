//EMBEDDED SYSTEMS PROGRAMMING - GPIO
//SEVEN SEGMENT CONTROL PROBLEMS
//SET 07 PROBLEM 04
//connect two seven segment displays on port A
//share the eight port pins to all the displays
//connect the common pin of seven segment displays to bit 0 & bit 1 of port B.
//Display number 25
void delay1(void);
void setup()
{
  volatile char *ddra,*ddrb;
  ddra = 0x21;
  *ddra = 0xFF;
  ddrb = 0x24;
  *ddrb = 0x03;
}
void loop()
{
  volatile char *outa,*outb ;
  outa = 0x22;outb = 0x25;
  while (1)
  {
    *outb = 0x02;   //enable tens digit
    *outa = 0x6D;    //display 5
    delay1();
    *outb = 0x03;    //disable both the digits
    *outa = 0x00;    //off the displays
    delay1();
    *outb = 0x01;    //enable ones digit
    *outa = 0x5B;    //display 2
    delay1();
    *outb = 0x03;    //disable both digits
    *outa = 0x00;    //off the displays
    delay1();
  }
}
void delay1(void)
{
  volatile long i;
  for (i = 0; i < 10000; i++);
}
