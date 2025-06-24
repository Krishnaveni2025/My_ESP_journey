//Embedded Systems programming - GPIO
//Dot Matrix Control Problems
//use PORT A for ROWS and PORTB for COLUMNs
//self Assessment set -13 Problem 02
//Display characters a to e one by one on one second interval.

void displaya(void);
void displayb(void);
void displayc(void);
void displayd(void);
void displaye(void);
void delay1(void);
void delay2(void);
volatile char *porta = 0x22;
volatile char *portb = 0x25;

void setup() {
  volatile char *ddra = 0x21;
  volatile char *ddrb = 0x24;
  *ddra = 0xFF;  // Set PORTA as output (Rows)
  *ddrb = 0xFF;  // Set PORTB as output (Columns)
}

void loop() {
  while (1)
  {
    displaya();
    delay2();
    displayoff();
    delay1();
    displayb();
    delay2();
    displayoff();
    delay1();
    displayc();
    delay2();
    displayoff();
    delay1();
    displayd();
    delay2();
    displayoff();
    delay1();
    displaye();
    delay2();
    displayoff();
    delay1();
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
void delay2(void)
{
  volatile long d;
  for (d = 0; d <= 500000; d++);
}
void displaya(void)
{
  static char display[8] = {0xC7, 0xBB, 0xF9, 0xC1,0xB9,0xB9, 0xC1, 0xFD}; // 'a'
 

    for (int row = 0 ; row < 8; row++)
    {
      *porta = (1 << row);
      *portb = display[row];
      displayoff();
      delay1();
    

  }
}
void displayb(void)
{
  static char display[8] = {0xff, 0xBf, 0xBf, 0x87, 0xBB, 0xBB, 0x87, 0xFF}; // 'b'
  for (int row = 0; row < 8; row++)
  {
    *porta = (1 << row);
    *portb = display[row];
    displayoff();
    delay1();
  }
}

void displayc(void)
{
  static char display[8] = {0xff, 0xc7, 0xbb, 0xBF, 0xBF, 0xbb, 0xc7, 0xFF};  // 'c'
  for (int row = 0; row < 8; row++)
  {
    *porta = (1 << row);
    *portb = display[row];
    displayoff();
    delay1();
  }
}

void displayd(void)
{
  static char display[8] = {0xFD, 0xFD, 0xE1, 0xDD, 0xDD,0xDD, 0xE3, 0xFF};  // 'd'
  for (int row = 0; row < 8; row++)
  {
    *porta = (1 << row);
    *portb = display[row];
    displayoff();
    delay1();
  }
}

void displaye(void)
{
  static char display[8] = {0xFF, 0xFF, 0xC7, 0xBB, 0x83, 0xBF, 0xC7, 0xFF};  // 'e'
  for (int row = 0; row < 8; row++)
  {
    *porta = (1 << row);
    *portb = display[row];
    displayoff();
    delay1();
  }
}