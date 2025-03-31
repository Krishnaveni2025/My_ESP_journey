//Embedded Systems Programming - GPIO
//Seven Segment Control Problems
//Set 6 Problem 01
//connect a common cathode seven segment display  port A
//Display number "0" to "9" one by one with 1 second delay.
void display0to9(void);//Displays number from  "0" to "9"
void delay1(void);//For 1 second delay
void setup() {
  // put your setup code here, to run once:
  volatile char *ddrA;
  ddrA = 0x21; 
  *ddrA = 0xFF; 
}
void loop() {
  // put your main code here, to run repeatedly:
  display0to9();
  delay1();
}
void display0to9(void)
{
  volatile char *outA;
  outA = 0x22;
  unsigned char disp0to9[11]={0x3F,0x06,0x5B,0x4F,0x66,0x6D,0x7C,0x07,0x7F,0x67};
  volatile int i ;
  for(i=0;i<11;i++)
  {
    *outA = disp0to9[i];
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
