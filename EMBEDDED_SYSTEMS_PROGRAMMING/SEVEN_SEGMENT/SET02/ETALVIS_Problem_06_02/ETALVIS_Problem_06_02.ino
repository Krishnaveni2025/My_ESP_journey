//Embedded Systems Programming - GPIO
//Seven Segment Control Problems
//Set 6 Problem 02
//connect a common Anode seven segment display  port A
//Display number "0" to "9" one by one with 1 second delay.
void display0to9(void);//Displays number from  "0" to "9"
void delay1(void);//For 1 second delay
void setup() {
  // put your setup code here, to run once:
  volatile char *ddrA;
  ddrA = 0x21;
  *ddrA = 0xFF;
}
void loop() {
  // put your main code here, to run repeatedly:
  display0to9();
  delay1();
}

void display0to9(void)
{
  volatile char *outA;
  outA = 0x22;*outA=0xFF;
  unsigned char disp0to9[10] = {0xC0, 0xF9, 0xA4, 0xB0, 0x99, 0x92, 0x83, 0xF8, 0x80, 0x98};
  volatile int i;
  for (i = 0; i < 10; i++)
  {
    *outA = disp0to9[i];
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