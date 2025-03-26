//SELF ASSESSMENT - 2
//LEDs SET 02 Problem 06
//Problem: connect 8 LEDs to port K from bit 0 to 7
//Glow the all ODD LEDs onebyone do not off the LED
void delay1();//delay function declaration
void setup() {
  // put your setup code here, to run once:
  volatile char *ddrK;
  ddrK = 0x107;
  *ddrK = 0xFF;
  volatile char *outK;
  outK = 0x108;
  unsigned char oddleds[4] = {0x02, 0x08, 0x20, 0x80};
  volatile int k;
  for (k = 0; k < 4; k++) {
    *outK = oddleds[k];
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
