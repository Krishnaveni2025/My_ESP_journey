//Embedded Systems programming - GPIO
//Dot Matrix Control Problems
//use PORT A for ROWS and PORTB for COLUMNs
//self Assessment set -12 Problem 08
//Display symbol #

void setup() {
  volatile char *ddra = 0x21;
  volatile char *ddrb = 0x24;
  *ddra = 0xFF;  // Set PORTA as output (Rows)
  *ddrb = 0xFF;  // Set PORTB as output (Columns)
}

void loop() {
  volatile char *porta = 0x22;
  volatile char *portb = 0x25;
  char display[8] = {0xFF, 0xDB, 0x81, 0xDB,0xDB,0x81, 0xDB, 0xFF}; // '#'
  while (1)
  {

    for (int row = 0 ; row < 8; row++)
    {
      *porta = (1 << row);
      *portb = display[row];
      displayoff();
      delay1();
    }

  }
}
void displayoff(void)
{
  volatile char *porta = 0x22;
  volatile char *portb = 0x25;
  *porta = 0x00;
  *portb = 0xff;
}
void delay1(void)
{
  volatile long d;
  for (d = 0; d <= 100; d++);
}