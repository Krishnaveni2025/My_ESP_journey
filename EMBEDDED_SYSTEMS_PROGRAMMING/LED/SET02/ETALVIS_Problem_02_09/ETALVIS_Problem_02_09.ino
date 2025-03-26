//SELF ASSESSMENT - 2
//LEDs SET 02 Problem 09
//Problem: connect 8 LEDs to port F from bit 0 to 7
//Glow 3 TO 0 LEDs onebyone 
void delay1();//delay function declaration
void setup() {
  // put your setup code here, to run once:
  volatile char *ddrF;
  ddrF = 0x30;
  *ddrF = 0xFF;
  volatile char *outF;
  outF = 0x31;
 unsigned char threeto0leds[4] = {0x08, 0x04, 0x02, 0x01};
  volatile int l;
  for (l = 0; l < 4; l++) {
    *outF = threeto0leds[l];
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
