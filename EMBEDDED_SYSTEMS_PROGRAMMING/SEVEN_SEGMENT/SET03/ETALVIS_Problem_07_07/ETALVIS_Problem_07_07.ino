//EMBEDDED SYSTEMS PROGRAMMING - GPIO
//SEVEN SEGMENT CONTROL PROBLEMS
//SET 07 PROBLEM 07
//connect a seven segment displays on port A
//connect a seven segment displays on port B
//connect a seven segment displays on port F
//connect a seven segment displays on port K
//Display number "0000" to "9999"  one by one with delay of 0.1 sec

void delay01(void);

void setup() {
  volatile char *ddra, *ddrb, *ddrf, *ddrk;
  ddra = 0x21; ddrb = 0x24; ddrf = 0x30; ddrk = 0x107;
  *ddra = 0xFF; // Set Port A as output
  *ddrb = 0xFF; // Set Port B as output
  *ddrf = 0xFF; // Set Port F as output
  *ddrk = 0xFF; // Set Port K as output
}

void loop() {
  volatile char *outa, *outb, *outf, *outk;
  outa = 0x22; outb = 0x25; outf = 0x31; outk = 0x108;
  unsigned char num[10] = {0x3F, 0x06, 0x5B, 0x4F, 0x66, 0x6D, 0x7C, 0x7F, 0x67, 0x6F}; // Added digit 9
  volatile int a = 0, b = 0, f = 0, k = 0;
  for (a = 0; a < 10; a++) {
    for (b = 0; b < 10; b++) {
      for (f = 0; f < 10; f++) {
        for (k = 0; k < 10; k++) {
          *outa = num[a];
          *outb = num[b];
          *outf = num[f];
          *outk = num[k];
          delay01();
        }
      }
    }
  }
}

void delay01(void) {
  volatile long d;
  for (d = 0; d < 40000; d++);
}
