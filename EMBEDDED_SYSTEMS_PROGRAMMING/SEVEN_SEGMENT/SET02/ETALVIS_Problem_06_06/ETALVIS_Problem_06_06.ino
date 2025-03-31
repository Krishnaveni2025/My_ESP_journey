//Embedded Systems Programming - GPIO
//Seven Segment Control Problems
//Set 6 Problem 06
//connect a common Anode seven segment display  port A
//Display ODD numbers one by one with 1 second delay.
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
}

void displayODD(void)
{
  volatile char *outA;
  outA = 0x22;*outA=0xFF;
  unsigned char dispODD[5] = {0xF9,0xB0,0x92,0xF8,0x98};
  volatile int i;
  for (i = 0; i < 5; i++)
  {
    *outA = dispODD[i];
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