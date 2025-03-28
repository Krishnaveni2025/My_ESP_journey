//Embedded Systems Programming - GPIO
//Seven Segment Control Problems
//Set 5 Problem 02
//connect a common cathode seven segment display  port A
//Display number "1" on the display

void setup() {
  // put your setup code here, to run once:
  volatile char *ddrA,*outA;
  ddrA = 0x21; outA = 0x22;
  *ddrA = 0xFF; 
  *outA = 0x06;//display "1"
}

void loop() {
  // put your main code here, to run repeatedly:

}
