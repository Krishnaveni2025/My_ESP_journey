//Embedded Systems Programming - GPIO
//Seven Segment Control Problems
//Set 6 Problem 08
//connect a common Anode seven segment display  port A
//Display ODD numbers from '1' to '9' one by one with 1 second delaY &
//Display EVEN numbers from '0' to '8' one by one with 1 second delay.
void displayEVEN(void);//Displays EVEN numberS 
void displayODD(void);//Displays ODD numberS
void delay1(void);//For 1 second delay
void setup() {
  // put your setup code here, to run once:
  volatile char *ddrA;
  ddrA = 0x21;
  *ddrA = 0xFF;
}
void loop() {
  // put your main code here, to run repeatedly:
  displayODD();
  delay1();
  displayEVEN();
}


void displayODD(void)
{
  volatile char *outA;
  outA = 0x22;
  unsigned char dispODD[5] = {0xF9,0xB0,0x92,0XF8,0x98};
  volatile int i;
  for (i = 0; i < 5; i++)
  {
    *outA = dispODD[i];
    delay1();
    *outA = 0xFF;
    delay1();
  }
}
void displayEVEN(void)
{
  volatile char *outA;
  outA = 0x22;
  unsigned char dispEVEN[4] = {0xA4,0x99,0x83,0x80};
  volatile int i;
  for (i = 0; i < 4; i++)
  {
    *outA = dispEVEN[i];
    delay1();
    *outA = 0xFF;
    delay1();
  }
}
void delay1()
{
  volatile long d;
  for (d = 0; d < 100000; d++);
}