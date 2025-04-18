//EMBEDDED SYSTEMS PROGRAMMING - GPIO
//SEVEN SEGMENT CONTROL PROBLEMS
//SET 07 PROBLEM 05
//connect two seven segment displays on port A
//share the eight port pins to all the displays
//connect the common pin of seven segment displays to bit 0 & bit 1 of port B.
//Display number "00" to "99" one by one with 1 sec delay.
void delay1(void);
void setup() {
  // put your setup code here, to run once:
  volatile char *ddrA, *ddrB;
  ddrA = 0x21; ddrB = 0x24;
  *ddrA = 0xFF; *ddrB = 0x03;

}

void loop() {
  // put your main code here, to run repeatedly:
  volatile char *outa, *outb;
  outa = 0x22; outb = 0x25;
  volatile int a = 0, b = 0;
  unsigned char dig1[10] = {0x3f, 0x06, 0x5b, 0x4f, 0x66, 0x6d, 0x7c, 0x07, 0x7f, 0x67};
int i, j;
    for (i = 0; i < 10; i++) {
        for (j = 0; j < 10; j++) {
            *outb = 0x01; // Display tens digit
            *outa = dig1[i];
            delay1();
            *outb = 0x03; //disable both displays
            *outa = 0x00;//off the displays
            delay1();
            *outb = 0x02; // Display ones digit
            *outa = dig1[j];
            delay1();
            *outb = 0x03; //disable both displays
            *outa = 0x00;//off the displays
            delay1();
        }
    }
}

void delay1(void)
{
  volatile long d;
  for (d = 0; d < 10000; d++);
}
