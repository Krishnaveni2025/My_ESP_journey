
//LEDs - Set 1 - Problem 3 - Assessment
//Problem: Connect two LEDs to port H bit 0 & bit 1. Glow LSB 2 LEDs only (bit 0 & bit 1)
void setup() {
  // put your setup code here, to run once:
  volatile char *ddrH,*outH;
  ddrH = 0x101;
  *ddrH = 0x03;//making bit 0 & bit 1 od PORTH as OUTPUT
  outH = 0x102;
  while(1)
  {
    *outH = *ddrH;// Glow LSB 2 LEDs only (bit 0 & bit 1)
  }

}

void loop() {
  // put your main code here, to run repeatedly:
}
