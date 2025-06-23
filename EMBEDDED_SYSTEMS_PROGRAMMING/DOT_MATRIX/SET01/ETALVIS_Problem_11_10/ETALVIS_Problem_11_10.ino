//Embedded Systems programming - GPIO
//Dot Matrix Control Problems
//use PORT A for ROWS and PORTB for COLUMNs
//self Assessment set -11 Problem 10
//Display diagonal LEDs connecting right top LED to left bottom LED
void setup() {
  // put your setup code here, to run once:
  volatile char *ddra, *ddrb; //both port A and B as output
  ddra = 0x21; *ddra = 0xFF;
  ddrb = 0x24; *ddrb = 0xFF;

}

void loop() {
  // put your main code here, to run repeatedly:
  volatile char *porta, *portb, row, col;
  porta = 0x22; portb = 0x25;
  row = *porta;
  col = *portb;
  long i;
  for (row = 0; row < 8; row++)
  {
    *porta = 0x00;
    *portb = 0xFF;
    *porta = (1 << row);           // Set only one row HIGH
    *portb = ~(1 << row);          // Clear only the corresponding column (active LOW)
    for ( i = 0; i < 500000; i++); // small delay to make LED visible
    *porta = 0x00;
    *portb = 0xFF;
    for ( i = 0; i < 500000; i++);
  }

}