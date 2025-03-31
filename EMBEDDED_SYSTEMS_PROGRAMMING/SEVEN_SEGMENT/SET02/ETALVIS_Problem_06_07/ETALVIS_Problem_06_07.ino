//Embedded Systems Programming - GPIO
//Seven Segment Control Problems
//Set 6 Problem 07
//connect a common Anode seven segment display  port A
//Display EVEN numbers one by one with 1 second delay.
void displayEVEN(void);//Displays EVEN numberS 
void delay1(void);//For 1 second delay
void setup() {
  // put your setup code here, to run once:
  volatile char *ddrA;
  ddrA = 0x21;
  *ddrA = 0xFF;
}
void loop() {
  // put your main code here, to run repeatedly:
  displayEVEN();
  delay1();
}

void displayEVEN(void)
{
  volatile char *outA;
  outA = 0x22;*outA=0xFF;
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