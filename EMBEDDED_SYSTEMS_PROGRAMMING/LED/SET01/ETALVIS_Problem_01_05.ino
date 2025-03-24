//LEDs - Set 1 - Problem 5 - Assessment
//Problem: Connect four LEDs to port A bit 0 to bit 3. Glow LSB 4 LEDs only (bit 0 to bit 3)
void setup() {
  // put your setup code here, to run once:
  volatile char *ddrA,*outA;
  ddrA=0x21;outA=0x22;
  *ddrA=0x0F;//making port A bit 0 to 3 as OUTPUT
  while(1)
  {
    *outA=*ddrA;//Glow LSB 4 LEDs only (bit 0 to bit 3)
  }
}

void loop() {
  // put your main code here, to run repeatedly:
}
