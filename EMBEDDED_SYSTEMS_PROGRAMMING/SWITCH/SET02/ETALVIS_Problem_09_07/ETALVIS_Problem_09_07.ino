//EMBEDDED SYSTEMS PROGRAMMING - GPIO
//SWITCH MONITOR  PROBLEMS
//SET 09 PROBLEM 07
//Connect 8 LEDs on PORT A and connect 8 push button switches on PORT B
//Press  7th switch  glow 5th LED delay, 3rd LED delay,0th LED delay, 1st LED delay.
void delay1(void);
void setup() {
  // put your setup code here, to run once:
  volatile char *ddra, *ddrb;
  ddra = 0x21; ddrb = 0x24;
  *ddra = 0xFF; // Set Port A as output
  *ddrb = 0x00; // Set Port B as output
}

void loop() {
  // put your main code here, to run repeatedly:
  volatile char *outA, *inB, x;
  outA = 0x22; inB = 0x23;
  int count = 0;
  unsigned char led[4] = {0x20, 0x08, 0x01, 0x02};
  while((*inB & 0x80)==0x80)
  {
    for(count = 0;count<4;count++)
    {
      *outA = led[count];
      delay1();
    }
  }
}
void delay1(void)
{
  volatile long d;
  for (d = 0; d < 1000000; d++);
}