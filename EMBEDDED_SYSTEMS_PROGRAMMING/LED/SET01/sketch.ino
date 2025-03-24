void setup() {
  // put your setup code here, to run once:
  volatile char *ddrj,*outj;
  ddrj = 0x104;outj = 0x105;
  *ddrj = 0x01;//making LSB BIT as OUTPUT
  while(1)
  {
    *outj = 0x01;//Glow LSB LED only (bit 0)
  }
}

void loop() {
  // put your main code here, to run repeatedly:

}
