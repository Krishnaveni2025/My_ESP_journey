//SELF ASSESSMENT - 2
//LEDs SET 02 Problem 08
//Problem: connect 8 LEDs to port F from bit 0 to 7
//Glow 4 TO 7 LEDs onebyone do not off the LED
void delay1();//delay function declaration
void setup() {
  // put your setup code here, to run once:
  volatile char *ddrF;
  ddrF = 0x30;
  *ddrF = 0xFF;
  volatile char *outF;
  outF = 0x31;
 unsigned char last3leds[4] = {0x10, 0x20, 0x40, 0x80};
  volatile int l;
  for (l = 0; l < 4; l++) {
    *outF = last3leds[l];
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
