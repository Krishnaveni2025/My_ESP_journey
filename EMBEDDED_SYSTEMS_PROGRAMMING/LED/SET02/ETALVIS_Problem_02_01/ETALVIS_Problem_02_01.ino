//Embedded Software Foundation Course - GPIO
//LEDs Set 2 - Assessment problem 1
//use arduino mega board connect a led to port J bit 0
//01. Blink LSB LED every second (bit 0)
void delay1(void);;//delay function declaration
void setup() {
  // put your setup code here, to run once:
  volatile char *ddrj;
  ddrj = 0x104;
  *ddrj = 0x01;//making LSB BIT as OUTPUT

}

void loop() {
  // put your main code here, to run repeatedly:
  volatile char *outj;
  
  outj = 0x105;
  *outj = 0x01;
  delay1();
  *outj  = 0x00;
  delay1();
}
void delay1(void)//delay function defination
{
  volatile long i;
  for (i = 0; i < 60000; i++);
}