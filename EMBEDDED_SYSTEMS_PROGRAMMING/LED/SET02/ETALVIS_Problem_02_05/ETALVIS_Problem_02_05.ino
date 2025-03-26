//SELF ASSESSMENT - 2
//LEDs SET 02 Problem 05
//Problem: connect 8 LEDs to port F from bit 0 to 7
//Glow the all EVEN LEDs onebyone do not off the LED
void delay1();//delay function declaration
void setup() {
  // put your setup code here, to run once:
  volatile char *ddrF;
  ddrF = 0x30;
  *ddrF = 0xFF;
  volatile char *outF;
  outF = 0x31;
  unsigned char evenleds[4] = {0x01, 0x04, 0x10, 0x40};
  volatile int f;
  for (f = 0; f < 4; f++) {
    *outF = evenleds[f];
    delay1();
  }
}
void loop() {
  // put your main code here, to run repeatedly:
}
void delay1()
{
  volatile long i;
  for (i = 0; i < 60000; i++);
}
