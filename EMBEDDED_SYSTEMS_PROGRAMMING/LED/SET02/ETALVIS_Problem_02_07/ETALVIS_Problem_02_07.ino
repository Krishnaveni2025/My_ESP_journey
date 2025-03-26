//SELF ASSESSMENT - 2
//LEDs SET 02 Problem 07
//Problem: connect 8 LEDs to port L from bit 0 to 7
//Glow 0 to 3 LEDs onebyone do not off the LED
void delay1();//delay function declaration
void setup() {
  // put your setup code here, to run once:
  volatile char *ddrL;
  ddrL = 0x10A;
  *ddrL = 0xFF;
  volatile char *outL;
  outL = 0x10B;
  unsigned char first3leds[4] = {0x01, 0x02, 0x04, 0x08};
  volatile int l;
  for (l = 0; l < 4; l++) {
    *outL = first3leds[l];
    delay1();
  }

}
void loop() {
  // put your main code here, to run repeatedly:

}
void delay1()
{
  volatile long i;
  for (i = 0; i < 600000; i++);
}
