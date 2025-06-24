//Embedded Systems programming - GPIO
//Dot Matrix Control Problems
//use PORT A for ROWS and PORTB for COLUMNs
//self Assessment set -13 Problem 01
//Display characters A to E one by one on one second interval.
void displayA(void);
void displayB(void);
void displayC(void);
void displayD(void);
void displayE(void);
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
    displayA();
    delay2();
    displayoff();
    delay1();
    displayB();
    delay2();
    displayoff();
    delay1();
    displayC();
    delay2();
    displayoff();
    delay1();
    displayD();
    delay2();
    displayoff();
    delay1();
    displayoff();
    delay1();
    displayE();
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
void displayA(void)
{
  static char display[8] = {0xE7, 0xC3, 0x99, 0x99, 0x81, 0x81,  0x99, 0x99}; // 'A'
 

    for (int row = 0 ; row < 8; row++)
    {
      *porta = (1 << row);
      *portb = display[row];
      displayoff();
      delay1();
    

  }
}
void displayB(void)
{
  static char display[8] = {0xC7, 0xBB, 0xBB, 0x87, 0xBB, 0xBB, 0x87, 0xFF}; // 'B'
  for (int row = 0; row < 8; row++)
  {
    *porta = (1 << row);
    *portb = display[row];
    displayoff();
    delay1();
  }
}

void displayC(void)
{
  static char display[8] = {0xE3, 0xDD, 0xBF, 0xBF, 0xBF, 0xDD, 0xE3, 0xFF};  // 'C'
  for (int row = 0; row < 8; row++)
  {
    *porta = (1 << row);
    *portb = display[row];
    displayoff();
    delay1();
  }
}

void displayD(void)
{
  static char display[8] = {0xFF, 0x8F, 0xB7, 0xBB, 0xBB, 0xB7, 0x8F, 0xFF};  // 'D'
  for (int row = 0; row < 8; row++)
  {
    *porta = (1 << row);
    *portb = display[row];
    displayoff();
    delay1();
  }
}

void displayE(void)
{
  static char display[8] = {0xFF, 0x83, 0xBF, 0x83, 0x83, 0xBF, 0x83, 0xFF};  // 'E'
  for (int row = 0; row < 8; row++)
  {
    *porta = (1 << row);
    *portb = display[row];
    displayoff();
    delay1();
  }
}