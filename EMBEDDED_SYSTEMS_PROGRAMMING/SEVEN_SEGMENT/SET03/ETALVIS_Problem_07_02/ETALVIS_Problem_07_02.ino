//EMBEDDED SYSTEMS PROGRAMMING - GPIO
//SEVEN SEGMENT CONTROL PROBLEMS
//SET 07 PROBLEM 02
//Connenct a seven segment display on port A
//Connenct a seven segment display on port B
//DISPLAY number "00" to "90" one by one with delay 1 second
void delay1(void);
void setup() {
  // put your setup code here, to run once:
  volatile char *ddrA, *ddrB;
  ddrA = 0x21; ddrB = 0x24;
  *ddrA = 0xFF; *ddrB = 0xFF;

}

void loop() {
  // put your main code here, to run repeatedly:
  volatile char *outA, *outB;
  outA = 0x22; outB = 0x25;
  volatile int a = 0, b = 0;
  unsigned char dig1[10] = {0x3f, 0x06, 0x5b, 0x4f, 0x66, 0x6d, 0x7c, 0x07, 0x7f, 0x67};
loop:
  if ((a == 9) && (b == 8))
  {
    *outA = 0x3f;
    delay1();
    *outB = 0x67;
    delay1();
    a=0;
    b=a;
    goto loop;
  }
  if ( a < 10 )
  {
    *outA = dig1[a];
    *outB = dig1[b];
    delay1();
    a++;
    goto loop;
  }
  if (a == 10)
  {
    b++;
    *outB  = dig1[b];
    a = 0;
    *outA = dig1[a];
    goto loop;
  }
}
void delay1(void)
{
  volatile long d;
  for (d = 0; d < 100000; d++);
}
/*//EMBEDDED SYSTEMS PROGRAMMING - GPIO
//SEVEN SEGMENT CONTROL PROBLEMS
//SET 07 PROBLEM 02
//Connenct a seven segment display on port A
//Connenct a seven segment display on port B
//DISPLAY number "00" to "90" one by one with delay 1 second
void delay1(void);
void setup() {
  // put your setup code here, to run once:
  volatile char *ddrA, *ddrB;
  ddrA = 0x21; ddrB = 0x24;
  *ddrA = 0xFF; *ddrB = 0xFF;

}

void loop() {
  // put your main code here, to run repeatedly:
  volatile char *outA, *outB;
  outA = 0x22; outB = 0x25;
  volatile int a = 0, b = 0;
  unsigned char dig1[10] = {0x3f, 0x06, 0x5b, 0x4f, 0x66, 0x6d, 0x7c, 0x07, 0x7f, 0x67};
for(b=0;b<10;b++)
{
  for(a=0;a<10;a++)
  {
    *outA = dig1[a];
    *outB = dig1[b];
    delay1();
  }
}
}
void delay1(void)
{
  volatile long d;
  for (d = 0; d < 100000; d++);
}
*/
