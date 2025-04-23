//EMBEDDED SYSTEMS PROGRAMMING - GPIO
//SWITCH MONITOR  PROBLEMS
//SET 09 PROBLEM 08
//Connect 8 LEDs on PORT A and connect 8 push button switches on PORT B
//Press  1 & 7th switch  glow 5th LED for 3secs.
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
  if((*inB & 0x82)==0x82)
  {
      *outA = 0x20;
      delay1();
      *outA = 0x00;
  }
}
void delay1(void)
{
  volatile long d;
  for (d = 0; d < 30000; d++);
}