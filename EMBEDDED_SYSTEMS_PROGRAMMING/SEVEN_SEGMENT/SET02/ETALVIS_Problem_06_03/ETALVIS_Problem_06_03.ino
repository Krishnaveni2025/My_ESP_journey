//Embedded Systems Programming - GPIO
//Seven Segment Control Problems
//Set 6 Problem 03
//connect a common cathode seven segment display  port A
//Display number "9" to "0" one by one with 1 second delay.
void display9to0(void);//Displays number from  "0" to "9"
void delay1(void);//For 1 second delay
void setup() {
  // put your setup code here, to run once:
  volatile char *ddrA;
  ddrA = 0x21; 
  *ddrA = 0xFF; 
}
void loop() {
  // put your main code here, to run repeatedly:
  display9to0();
  delay1();
}
void display9to0(void)
{
  volatile char *outA;
  outA = 0x22;
  unsigned char disp9to0[11]={0x3F,0x06,0x5B,0x4F,0x66,0x6D,0x7C,0x07,0x7F,0x67};
  volatile int i = 10 ;
  for(i=10;i>=0;i--)
  {
    *outA = disp9to0[i];
    delay1();
    *outA = 0x00;
    delay1();
  }
}
void delay1()
{
  volatile long d;
  for(d=0;d<60000;d++);
}
