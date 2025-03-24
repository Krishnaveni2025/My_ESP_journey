//LEDs-Set1-Problem 2-Assesment: 
//Problem: Connect a LED to port D bit 7. Glow MSB LED only (bit 7)
void setup() {
  // put your setup code here, to run once:
  volatile char *ddrD,*outD;
  ddrD=0x2A;
  outD=0x2B;
  *ddrD=0xFF;//making MSB bit 7 as OUTPUT
  while(1)
  {
    *outD=0x80;//Glow MSB LED only (bit 7)
  }
}

void loop() {
  // put your main code here, to run repeatedly: 
}
