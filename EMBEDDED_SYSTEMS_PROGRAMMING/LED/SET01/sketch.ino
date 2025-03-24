//LEDs - Set 1 Problem 9 - Assessment
//Problem: Connect Eight LEDs to port L bit 0 to bit 7. Glow all EVEN position LEDs
void setup() {
  // put your setup code here, to run once:
  volatile char *ddrL,*outL;
  ddrL=0x10A;outL=0x10B;
  *ddrL=0x55;//making all even bit positions aas output 0 2 4 6
  while(1)
  {
    *outL=*ddrL;//Glows only evn leds
  }
}

void loop() {
  // put your main code here, to run repeatedly:
}
