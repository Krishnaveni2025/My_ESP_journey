//EMBEDDED SYSTEMS PROGRAMMING - GPIO
//SEVEN SEGMENT CONTROL PROBLEMS
//SET 07 PROBLEM 03
//Connenct a seven segment display on port A
//Connenct a seven segment display on port B
//DISPLAY number "0.0" to "9.9" one by one with delay of 0.5 second increment by 0.1
#define DDRA_REG  (*(volatile unsigned char*)0x21)  // Data Direction Register for PORTA
#define DDRB_REG  (*(volatile unsigned char*)0x24)  // Data Direction Register for PORTB
#define PORTA_REG (*(volatile unsigned char*)0x22)  // Output Register for PORTA
#define PORTB_REG (*(volatile unsigned char*)0x25)  // Output Register for PORTB

void delay1(void) {
  volatile unsigned long i, j;
  for (i = 0; i < 500; i++) {  // Roughly 0.5s delay using nested loops
    for (j = 0; j < 1000; j++);
  }
}

void setup() {
  DDRA_REG = 0xFF;  // Set PORTA as output
  DDRB_REG = 0xFF;  // Set PORTB as output
}

void loop() {
  unsigned char digit_1[10] = {0x3F, 0x06, 0x5B, 0x4F, 0x66, 0x6D, 0x7C, 0x07, 0x7F, 0x67};
  unsigned char digit_2[10] = {0xBF, 0x86, 0xDB, 0xCF, 0xE6, 0xED, 0xFC, 0x87, 0xFF, 0xE7};

  int num = 0; // Starts at 0.0

loop: if (num < 99) { // 99 represents 9.9
    int tens = num / 10;  // Extract tens place
    int units = num % 10; // Extract ones place
    if ((units == 99) && (tens == 99))
    {
      num = 0;
      goto loop;
    }
    PORTA_REG = digit_1[units]; // Display units on PORTA
    PORTB_REG = digit_2[tens];  // Display tens on PORTB

    delay1(); // Wait for 0.5 sec
    num++;    // Increment by 1 (equivalent to 0.1 in display)
    goto loop;
  }

}
