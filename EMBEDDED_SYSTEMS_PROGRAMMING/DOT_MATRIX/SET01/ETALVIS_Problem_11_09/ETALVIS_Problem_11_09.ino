//Embedded Systems programming - GPIO
//Dot Matrix Control Problems
//use PORT A for ROWS and PORTB for COLUMNs
//self Assessment set -11 Problem 09
//Display diagonal LEDs connecting left top LED to Right bottom LED

void setup() {
  // put your setup code here, to run once:
  volatile char *ddra, *ddrb; //both port A and B as output
  ddra = 0x21; *ddra = 0xFF;
  ddrb = 0x24; *ddrb = 0xFF;

}

void loop() {
  // put your main code here, to run repeatedly:
  volatile char *porta, *portb, row;
  porta = 0x22; portb = 0x25;
  long i;
  for (row = 0; row < 8; row++)
  {
    *porta = 0x00;
    *portb = 0xFF;
    *porta = (1 << row);             // Activate one row at a time
    *portb = ~(1 << (7 - row));      // Activate corresponding mirrored column
    *porta = 0x00;
    *portb = 0xFF;
    for ( i = 0; i < 500000; i++);
  }

}

