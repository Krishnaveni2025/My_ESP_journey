//Embedded Systems programming - GPIO
//Dot Matrix Control Problems
//use PORT A for ROWS and PORTB for COLUMNs
//self Assessment set -13 Problem 03
//Display Numbers 0 to 4 one by one on one second interval.

void display1(void);
void display2(void);
void display3(void);
void display0(void);
void display4(void);
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
    display0();
    delay2();
    displayoff();
    delay1();
    display1();
    delay2();
    displayoff();
    delay1();
    display2();
    delay2();
    displayoff();
    delay1();
    display3();
    delay2();
    displayoff();
    delay1();
    display4();
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
void display1(void)
{
  static char display[8] = {0xF7, 0xE7, 0x87, 0xE7,0xE7,0xE7, 0x00, 0x00}; // '1'
 

    for (int row = 0 ; row < 8; row++)
    {
      *porta = (1 << row);
      *portb = display[row];
      displayoff();
      delay1();
    

  }
}
void display2(void)
{
  static char display[8] = {0xc7, 0xb3, 0xB3, 0xe7, 0xcf, 0x9f, 0x03, 0xFF}; // '2'
  for (int row = 0; row < 8; row++)
  {
    *porta = (1 << row);
    *portb = display[row];
    displayoff();
    delay1();
  }
}

void display3(void)
{
  static char display[8] = {0xc7, 0xb3, 0xf3, 0xe7, 0xe7, 0xf3, 0xb3, 0xc7};  // '3'
  for (int row = 0; row < 8; row++)
  {
    *porta = (1 << row);
    *portb = display[row];
    displayoff();
    delay1();
  }
}

void display0(void)
{
  static char display[8] = {0xc7, 0xbb, 0xb3,0xa3,0x8b,0x9b,0xbb, 0xc7};  // '0'
  for (int row = 0; row < 8; row++)
  {
    *porta = (1 << row);
    *portb = display[row];
    displayoff();
    delay1();
  }
}

void display4(void)
{
  static char display[8] = {0xFB, 0xF3, 0xEB, 0xDB, 0xBB, 0x00, 0xFB, 0xFB};  // '4'
  for (int row = 0; row < 8; row++)
  {
    *porta = (1 << row);
    *portb = display[row];
    displayoff();
    delay1();
  }
}