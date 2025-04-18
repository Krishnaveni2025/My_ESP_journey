//EMBEDDED SYSTEMS PROGRAMMING - GPIO
//SEVEN SEGMENT CONTROL PROBLEMS
//SET 07 PROBLEM 01
//Connenct a seven segment display on port A
//Connenct a seven segment display on port B
//DISPLAY number 25

void setup() {
  // put your setup code here, to run once:
  volatile char *ddr;
  ddr = 0x21;
  *ddr = 0xFF;
  ddr = 0x24;
  *ddr = 0xFF;
}

void loop() {
  // put your main code here, to run repeatedly:
  volatile char *out;
  out = 0x25;
  *out = 0x5B;
  out = 0x22;
  *out = 0x6D;
}
