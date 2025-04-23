//EMBEDDED SYSTEMS PROGRAMMING - GPIO
//SWITCH MONITOR  PROBLEMS
//SET 08 PROBLEM 08
//Connect 8 LEDs on PORT A and connect 8 push button switches on PORT B
//Press  0th Switch glow  7TH LED,,,,,,,,, 7th Switch glow  0TH LED

void setup() {
  // put your setup code here, to run once:
  volatile char *ddra, *ddrb;
  ddra = 0x21; ddrb = 0x24;
  *ddra = 0xFF; // Set Port A as output
  *ddrb = 0x00; // Set Port B as output
}

void loop() {
  // put your main code here, to run repeatedly:
  volatile char *outA, *inB,x;
  outA = 0x22; inB = 0x23;
  x=*inB;
  unsigned char digit [8] = {0x01,0x02,0x04,0x08,0x10,0x20,0x40,0x80};
  unsigned char led[8]={0x80,0x40,0x20,0x10,0x08,0x04,0x02,0x01};
  int count = 0;
  for(count=0;count<8;count++){
      if(x & digit[count]){
        *outA=led[count];
      }
  }
}
