//LEDs - Set 1 Problem 10 - Assessment
//Problem: Connect Eight LEDs to port E bit 0 to bit 7. Glow LEDs of bit5, bit4, bit3, bit1
void setup() {
  // put your setup code here, to run once:
  volatile char *ddrE,*outE;
  ddrE=0x2D;outE=0x2E;
  *ddrE=0x3A;//making port E bit positions 5,4,3,1 as OUTPUT
  while(1)
  {
    *outE=*ddrE;//Glow LEDs of bit5, bit4, bit3, bit1
  }
}

void loop() {
  // put your main code here, to run repeatedly:
}
