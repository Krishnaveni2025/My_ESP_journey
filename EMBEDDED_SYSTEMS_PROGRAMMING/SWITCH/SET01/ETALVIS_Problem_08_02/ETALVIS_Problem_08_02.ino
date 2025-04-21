//EMBEDDED SYSTEMS PROGRAMMING - GPIO
//SWITCH MONITOR  PROBLEMS
//SET 08 PROBLEM 02
//Connect 8 LEDs on PORT A and connect 8 push button switches on PORT B
//Press 2nd Switch and blink all 8 LEDs
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
 while((*inB & 0x04)==0x04)
  {
    *outA = 0xFF;
    delay1();
    *outA = 0x00;
    delay1();
    *outA = 0xFF;
    delay1();
  }
 
}
void delay1(void)
{
  volatile long d;
  for (d = 0; d < 100000; d++); //short delay
}
