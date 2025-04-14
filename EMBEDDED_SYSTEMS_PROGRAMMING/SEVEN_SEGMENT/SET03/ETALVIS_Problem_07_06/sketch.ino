//EMBEDDED SYSTEMS PROGRAMMING - GPIO
//SEVEN SEGMENT CONTROL PROBLEMS
//SET 07 PROBLEM 04
//connect two seven segment displays on port A
//share the eight port pins to all the displays
//connect the common pin of seven segment displays to bit 0 & bit 1 of port B.
//Display number 25
void setup() {
  volatile char *ddra, *ddrb;
  ddra = 0x21;*ddra =0xFF;
  ddrb = 0x24;*ddrb = 0xFF;
}
void loop() {
  volatile char *out,*b;
  out = 0x22;
   b=0x25;
  *b=0x00;
  *out = 0x5B;
  *b=0x00;
  *out = 0x6D;

}