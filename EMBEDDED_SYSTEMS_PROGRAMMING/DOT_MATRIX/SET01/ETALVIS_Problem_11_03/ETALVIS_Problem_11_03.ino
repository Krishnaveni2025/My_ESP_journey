//Embedded Systems programming - GPIO
//Dot Matrix Control Problems
//use PORT A for ROWS and PORTB for COLUMNs
//self Assessment set -11 Problem 03
//Display right most bottom LED

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
  *porta = 0x80;//row 7
  *portb = 0xFE;//col 0
}