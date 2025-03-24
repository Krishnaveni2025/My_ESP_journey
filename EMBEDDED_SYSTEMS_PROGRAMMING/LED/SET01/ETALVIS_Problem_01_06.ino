//LEDs - Set 1 - Problem 6 - Assessment
//Problem: Connect four LEDs to port B bit 4 to bit 7. Glow MSB 4 LEDs only (bit 7 to bit 4)
void setup() {
  // put your setup code here, to run once:
  volatile char *ddrB,*outB;
  ddrB = 0x24;outB=0x25;
  *ddrB = 0xF0;//setting portB MSB bots as OUTPUT
  while(1)
  {
    *outB = *ddrB;//Glow MSB 4 LEDs only (bit 7 to bit 4)
  }
}

void loop() {
  // put your main code here, to run repeatedly:
}
