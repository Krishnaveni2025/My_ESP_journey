//EMBEDDED SYSTEMS PROGRAMMING - GPIO
//SEVEN SEGMENT CONTROL PROBLEMS
//SET 07 PROBLEM 06
//connect a seven segment displays on port A
//connect a seven segment displays on port B
//connect a seven segment displays on port F
//connect a seven segment displays on port K
//Display number 2025
void setup() {
  // put your setup code here, to run once:
  volatile char *ddra,*ddrb,*ddrf,*ddrk;
  ddra = 0x21;*ddra = 0xFF;
  ddrb = 0x24;*ddrb = 0xFF;
  ddrf = 0x30;*ddrf = 0xFF;
  ddrk = 0x107;*ddrk = 0xFF;
}

void loop() {
  // put your main code here, to run repeatedly:
  volatile char *outa,*outb,*outf,*outk;
  outa = 0x22;*outa = 0x5B;//2
  outb = 0x25;*outb = 0x3F;//0
  outf = 0x31;*outf = 0x5B;//2
  outk = 0x108;*outk = 0x6D; //5
}
