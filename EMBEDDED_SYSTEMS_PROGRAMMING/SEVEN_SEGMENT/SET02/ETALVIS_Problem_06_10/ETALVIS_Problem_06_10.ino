//Embedded Systems Programming - GPIO
//Seven Segment Control Problems
//Set 6 Problem 10
//connect a common Anode seven segment display  port A
//Display SINGLE DIGIT PRIME numbers  one by one 
void displayPRIME(void);//Displays SINGLE DIGIT PRIME numberS  
void delay1(void);//For 1 second delay
void setup() {
  // put your setup code here, to run once:
  volatile char *ddrA;
  ddrA = 0x21;
  *ddrA = 0xFF;
}
void loop() {
  // put your main code here, to run repeatedly:
  displayPRIME();
  delay1();
}
void displayPRIME(void)
{
  volatile char *outA;
  outA = 0x22;
  unsigned char dispPRIME[4] = {0xF9,0xB0,0x92,0XF8};
  volatile int i;
  for (i = 0; i < 4; i++)
  {
    *outA = dispPRIME[i];
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