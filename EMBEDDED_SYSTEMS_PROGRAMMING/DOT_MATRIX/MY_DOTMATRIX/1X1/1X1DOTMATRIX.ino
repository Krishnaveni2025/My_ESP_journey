void setup() {
  // put your setup code here, to run once:
volatile char *ddra,*ddrb;
ddra = 0x21;ddrb = 0x24;
*ddra = 0xFF;*ddrb = 0xFF;
}
/*PORTB as ROW, PORTA as COLUMN*/
void loop() {
  // put your main code here, to run repeatedly:
  volatile char *outa,*outb;
  outa = 0x22;outb = 0x25;
  *outb = 0x00;//OFF ALL ROW
  *outa = 0x01;//SELECT COLUMN 0
}
