/*
Connect 8 LEDs to an 8-bit port
1. Glow LSB LED only (bit 0)
*/
void setup() {
  // put your setup code here, to run once:
  //Here selected Port F
  volatile char *dirf, *outf;
  //Address Locations of Data Direction Register & Port Register can found in Data Sheet
  dirf = 0x30, outf =  0x31;
               //A7 A6 A5 A4 A3 A2 A1 A0
  *dirf = 0x01;//0   0 0  0  0  0  0  1 i.e bit0 is set as Output
  *outf = 0x01;//0   0 0  0  0  0  0  1 i.e bit0 is set High Output
}

void loop() {
  // put your main code here, to run repeatedly:

}
