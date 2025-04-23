//EMBEDDED SYSTEMS PROGRAMMING - GPIO
//SWITCH MONITOR  PROBLEMS
//SET 08 PROBLEM 09
//Connect 8 LEDs on PORT A and connect 8 push button switches on PORT B
//Press  any switch glow 0th LED ON delay,OFF,1st LED ON delay OFF,.......,7th LED ON delay, OFF.
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
  x = *inB;
  unsigned char digit [8] = {0x01, 0x02, 0x04, 0x08, 0x10, 0x20, 0x40, 0x80};

  int count = 0;
  while (x) {
    for (count = 0; count < 8; count++) {
      *outA = digit[count];
      delay1();
      *outA = 0x00;
      delay1();
    }
  }
}
void delay1(void)
{
  volatile long d;
  for (d = 0; d < 100000; d++);
}