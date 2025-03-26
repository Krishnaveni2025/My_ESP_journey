//SELF ASSESSMENT - 2
//LEDs SET 02 Problem 10
//Problem: connect 8 LEDs to port F from bit 0 to 7
//Glow 7 TO 4 LEDs onebyone 
void delay1();//delay function declaration
void setup() {
  // put your setup code here, to run once:
  volatile char *ddrF;
  ddrF = 0x30;
  *ddrF = 0xFF;
  volatile char *outF;
  outF = 0x31;
 unsigned char sevento4leds[4] = {0x80, 0x40, 0x20, 0x10};
  volatile int l;
  for (l = 0; l < 4; l++) {
    *outF = sevento4leds[l];
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
