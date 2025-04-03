//EMBEDDED SYSTEMS PROGRAMMING - GPIO
//SEVEN SEGMENT CONTROL PROBLEMS
//SET 07 PROBLEM 01
//Connenct a seven segment display on port A
//Connenct a seven segment display on port B
//DISPLAY number 25

void setup() {
  // put your setup code here, to run once:
  volatile char *ddrA, *ddrB;
  ddrA = 0x21; ddrB = 0x24;
  *ddrA = 0xFF; *ddrB = 0xFF;
  volatile char *outA, *outB;
  outA = 0x22; outB = 0x25;
  *outA = 0x6D;//5
  *outB = 0x5B;//2
}

void loop() {
  // put your main code here, to run repeatedly:
}
