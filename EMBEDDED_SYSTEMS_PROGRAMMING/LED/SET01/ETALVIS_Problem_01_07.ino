//LEDs - Set 1 - Problem 7 - Assessment
//Problem: Connect Eight LEDs to port F bit 0 to bit 7. Glow all 8 LEDs
void setup() {
  // put your setup code here, to run once:
  volatile char *ddrF,*outF;
  ddrF=0x30;outF=0x31;
  *ddrF=0xFF;//setting entire portF as OUTPUT
  while(1)
  {
    *outF=*ddrF;//Glow all 8 LEDs
  }
}

void loop() {
  // put your main code here, to run repeatedly: 
}
