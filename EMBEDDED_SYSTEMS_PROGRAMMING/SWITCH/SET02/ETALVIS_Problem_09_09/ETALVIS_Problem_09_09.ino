//EMBEDDED SYSTEMS PROGRAMMING - GPIO
//SWITCH MONITOR  PROBLEMS
//SET 09 PROBLEM 09
//Connect 8 LEDs on PORT A and connect 8 push button switches on PORT B
//Press  1st switch & press 4th switch &
//7 switch & 9th switch
// one by one :  glow 8th LED for 10secs.
void delay1(void); //delay function

void setup() {
  volatile char *ddra, *ddrb, *ddrk, *ddrf;
  ddra = 0x21;
  ddrb =  0x24;
  ddrk =  0x107;
  ddrf =  0x30;

  *ddra = 0xFF; // Set Port A as output (LEDs)
  *ddrb = 0x00; // Set Port B as input (switches)
  *ddrk = 0xFF; // Set Port K as output (8th LED)
  *ddrf = 0x00; // Set Port F as input (9th switch)
}

void loop() {
  volatile char *outa, *outk, *inB, *inf;
  outa = 0x22;
  outk =  0x108;
  inB =  0x23;
  inf =  0x29;



  if ((*inB & 0x02) == 0x02) ; // Switch 1 pressed
  if ((*inB & 0x10) == 0x10)  // Switch 4 pressed
    if ((*inB & 0x80) == 0x80 ) // Switch 7 pressed
      if ((*inf & 0x02) == 0x02) { // Switch 9 pressed
        *outa = 0x00;
        *outk = 0x01; // Turn on 8th LED
        delay1();
        *outk = 0x00; // Turn off 8th LED

      }
}

void delay1(void) {
  volatile long d;
  for (d = 0; d < 500000; d++); // Approximate 10-sec delay
}