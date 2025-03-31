//Embedded Systems Programming - GPIO
//Seven Segment Control Problems
//Set 6 Problem 09
//connect a common Anode seven segment display  port A
//Display the following alphabets one by one
//A,B,C,D,E,F,G,H,|,J,L,O,P,Q,S,U,Y 
void displayALPHA(void);//Displays ALPHABETS 
void delay1(void);//For 1 second delay
void setup() {
  // put your setup code here, to run once:
  volatile char *ddrA;
  ddrA = 0x21;
  *ddrA = 0xFF;
}
void loop() {
  // put your main code here, to run repeatedly:
  displayALPHA();
  delay1();
}
void displayALPHA(void)
{
  volatile char *outA;
  outA = 0x22;
  unsigned char dispALPHA[17] = {0x88,0x80,0xC6,0XC0,0x86,0x8E,0x82,0x89,0xF9,0xF1,0xC7,0x9C,0x8C,0x23,0x92,0xC1,0x8D};
  volatile int i;
  for (i = 0; i < 17; i++)
  {
    *outA = dispALPHA[i];
    delay1();
    *outA = 0xFF;
    delay1();
  }
}
void delay1()
{
  volatile long d;
  for (d = 0; d < 1000000; d++);
}