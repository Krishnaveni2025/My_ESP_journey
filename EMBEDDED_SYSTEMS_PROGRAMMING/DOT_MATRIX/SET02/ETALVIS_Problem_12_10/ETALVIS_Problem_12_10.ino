//Embedded Systems programming - GPIO
//Dot Matrix Control Problems
//use PORT A for ROWS and PORTB for COLUMNs
//self Assessment set -12 Problem 10
//Display symbol Ω

void setup() {
  volatile char *ddra = 0x21;
  volatile char *ddrb = 0x24;
  *ddra = 0xFF;  // Set PORTA as output (Rows)
  *ddrb = 0xFF;  // Set PORTB as output (Columns)
}

void loop() {
  volatile char *porta = 0x22;
  volatile char *portb = 0x25;
  char display[8] = {0xC3, 0xBD, 0x7E, 0x7E,0xBD,0xDB, 0x18, 0xFF}; // 'Ω'
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
