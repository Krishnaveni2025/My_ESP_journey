//EMBEDDED SYSTEMS PROGRAMMING - GPIO
//SWITCH MONITOR  PROBLEMS
//SET 08 PROBLEM 04
//Connect 8 LEDs on PORT A and connect 8 push button switches on PORT B
//Press any Switch glow 0th LED delay 7th LED delay 6th led ... delay 0th LED
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
  volatile char *outA , *inB;
  outA = 0x22;inB = 0x23;
  volatile int l;
  unsigned char led[8] = {0x01,0x02,0x04,0x08,0x10,0x20,0x40,0x80};
 while(*inB )
  {
    for(l=7;l>=0;l--)
    {
      *outA = led[l];
      delay1();
      *outA = 0x00;
      delay1();
    }
  }
 
}
void delay1(void)
{
  volatile long d;
  for (d = 0; d < 100000; d++); //short delay
}
