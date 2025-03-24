//LEDs - Set 1 - Problem 4 - Assessment
//Problem: Connect two LEDs to port C bit 6 & bit 7. Glow MSB 2 LEDs only (bit 7 & bit 6)
void setup() {
  // put your setup code here, to run once:
  volatile char *ddrC,*outC;
  ddrC=0x27;outC=0x28;
  *ddrC=0xC0;//making port c bit 6 & 7 as OUTPUT
  while(1)
  {
    *outC=*ddrC;
  } 
}

void loop() {
  // put your main code here, to run repeatedly:
}
