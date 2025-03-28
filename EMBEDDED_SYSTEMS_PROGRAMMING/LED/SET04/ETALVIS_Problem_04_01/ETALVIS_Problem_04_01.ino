//EMBEDDED SYSTEMS PROGRAMMING - GPIO
//LED Control Problems
//SET 04 Problem 01
//Connect 8 LEDs to Port A from bit0 to bit7
//Connect 8 LEDs to Port B from bit0 to bit7
//Problem: on all LEDs in first row and second row
void setup() {
  // put your setup code here, to run once:
  volatile char *ddrA, *outA,*ddrB,*outB;
  ddrA = 0x21; outA = 0x22;
  ddrB = 0x24;outB = 0x25;
  *ddrA = 0xFF; //setting entire PORTA as OUTPUT
  *ddrB = *ddrA;//setting entire PORTB as OUTPUT
  *outA = *ddrA;//0Xff
  *outB = *outA;//0Xff
}

void loop() {
  // put your main code here, to run repeatedly:
}
