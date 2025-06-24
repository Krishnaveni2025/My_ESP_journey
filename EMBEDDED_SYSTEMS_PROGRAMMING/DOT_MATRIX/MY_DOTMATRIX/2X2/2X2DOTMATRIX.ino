void setup() {
  // put your setup code here, to run once:
volatile char *ddra,*ddrb;
ddra = 0x21;ddrb = 0x24;
*ddra = 0x03;*ddrb = 0x03;
  volatile long i;
  volatile char *outa,*outb;
  outa = 0x22;outb = 0x25;
while(1)
{
  for(i=0;i<100000;i++);
  *outb = 0x02;//row 0
  *outa = 0x01;//col 0
  for(i=0;i<100000;i++);
  *outb  = 0x00;
  *outa = 0x00;
  for(i=0;i<100000;i++);
   *outb = 0x02;//row 0
  *outa = 0x02;//col 1
  for(i=0;i<100000;i++);
  *outb  = 0x00;
  *outa = 0x00;
  for(i=0;i<100000;i++);
  *outb = 0x01;//row 1
  *outa = 0x01;//col 0
  for(i=0;i<100000;i++);
  *outb  = 0x00;
  *outa = 0x00;
  for(i=0;i<100000;i++);
  *outb = 0x01;//row 1
  *outa = 0x02;//col 2
  for(i=0;i<100000;i++);
  *outb  = 0x00;
  *outa = 0x00;
  for(i=0;i<100000;i++);
}
}
/*PORTB as ROW, PORTA as COLUMN*/
void loop() {
  // put your main code here, to run repeatedly:

}
