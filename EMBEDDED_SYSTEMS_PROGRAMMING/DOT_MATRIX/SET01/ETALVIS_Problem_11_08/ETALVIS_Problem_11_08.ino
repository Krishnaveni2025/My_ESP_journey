//Embedded Systems programming - GPIO
//Dot Matrix Control Problems
//use PORT A for ROWS and PORTB for COLUMNs
//self Assessment set -11 Problem 08
//Display right most column  all LEDs
void setup() {
  // put your setup code here, to run once:
  volatile char *ddra,*ddrb;//both port A and B as output
  ddra = 0x21;*ddra = 0xFF;
  ddrb = 0x24;*ddrb = 0xFF;
}

void loop() {
  // put your main code here, to run repeatedly:
  volatile char *porta,*portb;
  porta = 0x22;portb = 0x25;
  *porta = 0xFF;//ALL ROW's
  *portb = 0xFe;//COL 0
}
