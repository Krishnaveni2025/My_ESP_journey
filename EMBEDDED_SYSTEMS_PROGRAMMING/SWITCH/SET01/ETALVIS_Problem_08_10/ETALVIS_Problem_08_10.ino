//EMBEDDED SYSTEMS PROGRAMMING - GPIO
//SWITCH MONITOR  PROBLEMS
//SET 08 PROBLEM 10
//Connect 8 LEDs on PORT A and connect 8 push button switches on PORT B
//Press  1st switch glow 0th,3rd,4th,7th LEDs.

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
  while ((x&0x02)==0x02) {
    *outA = 0x99;
  }
}
