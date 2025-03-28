//Embedded Systems Programming - GPIO
//Seven Segment Control Problems
//Set 5 Problem 07
//connect a common cathode seven segment display  port A
//Display number "6" on the display

void setup() {
  // put your setup code here, to run once:
  volatile char *ddrA,*outA;
  ddrA = 0x21; outA = 0x22;
  *ddrA = 0xFF; 
  *outA = 0x7C;//display "6"
}

void loop() {
  // put your main code here, to run repeatedly:

}
