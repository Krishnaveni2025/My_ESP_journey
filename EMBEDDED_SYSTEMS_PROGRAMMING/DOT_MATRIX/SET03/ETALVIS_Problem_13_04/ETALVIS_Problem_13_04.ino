//Embedded Systems programming - GPIO
//Dot Matrix Control Problems
//use PORT A for ROWS and PORTB for COLUMNs
//self Assessment set -13 Problem 04
//Display "Welcome" string characters one by one on one second interval.

void displayW(void);
void displaye(void);
void displayl(void);
void displayc(void);
void displayo(void);
void displaym(void);
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
    displayW();//w
    delay2();
    displayoff();//off
    delay1();
    displaye();//e
    delay2();
    displayoff();//off
    delay1();
    displayl();//l
    delay2();
    displayoff();//off
    delay1();
    displayc();//c
    delay2();
    displayoff();//off
    delay1();
    displayo();//o
    delay2();
    displayoff();//off
    delay1();
    displaym();//m
    delay2();
    displayoff();//off
    delay1();
    displaye();//e
    delay2();
    displayoff();//off
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
void displayW(void)
{
  static char display[8] = {0xFF, 0xBD, 0xBD, 0xBD,0xA5,0xA5, 0x81, 0x99}; // 'W'
 

    for (int row = 0 ; row < 8; row++)
    {
      *porta = (1 << row);
      *portb = display[row];
      displayoff();
      delay1();
    

  }
}
void displayo(void)
{
  static char display[8] = {0xFF, 0xFF, 0xCF, 0xB7,0xB7,0xCF, 0xFF, 0xFF}; // 'o'
 

    for (int row = 0 ; row < 8; row++)
    {
      *porta = (1 << row);
      *portb = display[row];
      displayoff();
      delay1();
    

  }
}
void displaym(void)
{
  static char display[8] = {0xff, 0xD7, 0xAB, 0xAB, 0xAB, 0xAB, 0xAB, 0xFF}; // 'm'
  for (int row = 0; row < 8; row++)
  {
    *porta = (1 << row);
    *portb = display[row];
    displayoff();
    delay1();
  }
}

void displayl(void)
{
  static char display[8] = {0xcf, 0xef, 0xef, 0xef, 0xef, 0xef, 0xef, 0x83};  // 'l'
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
