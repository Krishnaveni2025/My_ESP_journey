//LEDs - Set 1 - Problem 8 - Assessment
//Problem: Connect Eight LEDs to port K bit 0 to bit 7. Glow all ODD position LEDs
void setup() {
  // put your setup code here, to run once:
  volatile char *ddrk,*outk;
  ddrk=0x107;outk=0x108;
  *ddrk=0xAA;//making all odd bit positions as output 7 5 3 1
  while(1)
  {
    *outk = *ddrk;//glows all odd positions
  }
}

void loop() {
  // put your main code here, to run repeatedly: 
}
