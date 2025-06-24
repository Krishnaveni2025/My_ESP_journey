//Embedded Systems programming - GPIO
//Dot Matrix Control Problems
//use PORT A for ROWS and PORTB for COLUMNs
//self Assessment set -12 Problem 03
//Display Number 1

void setup() {
  volatile char *ddra = 0x21;
  volatile char *ddrb = 0x24;
  *ddra = 0xFF;  // Set PORTA as output (Rows)
  *ddrb = 0xFF;  // Set PORTB as output (Columns)
}

void loop() {
  volatile char *porta = 0x22;
  volatile char *portb = 0x25;
  char display[8] = {0xF7, 0xE7, 0x87, 0xE7,0xE7,0xE7, 0x00, 0x00}; // '1'
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