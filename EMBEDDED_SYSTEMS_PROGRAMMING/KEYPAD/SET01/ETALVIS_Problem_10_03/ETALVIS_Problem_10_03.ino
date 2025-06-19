//EMBEDDED SYSTEMS PROGRAMMING - GPIO
//KEYPAD CONTROL PROBLEMS
//Use a 4x4 keypad and a quad seven segment display
//SET 10 PROBLEM 03
//perform single digit addition
//example: 6+7=13,9+4=13.


// Seven-segment patterns for digits 0-9 (common-cathode, active-high)
// Bit order: Dp G F E D C B A (1 = segment on)
const unsigned char segPatterns[10] = {
  0x3F, // 0: ABCDEF
  0x06, // 1: BC
  0x5B, // 2: ABDEG
  0x4F, // 3: ABCDG
  0x66, // 4: BCFG
  0x6D, // 5: ACDFG
  0x7D, // 6: ACDEFG
  0x07, // 7: ABC
  0x7F, // 8: ABCDEFG
  0x6F  // 9: ABCDFG
};

void setup() {
  volatile char *ddra = (char *)0x21;   // DDRA – PORTA as output (A to Dp)
  volatile char *ddrb = (char *)0x24;   // DDRB – PORTB as output (Digits)
  volatile char *ddrf = (char *)0x30;   // DDRF – PF0–PF3 as output (rows)
  volatile char *ddrk = (char *)0x107;  // DDRK – PK0–PK3 as input (columns)

  *ddra = 0xFF;  // A to Dp on PA0–PA7 as output
  *ddrb = 0xF0;  // Digits on PB4–PB7 as output
  *ddrf = 0x0F;  // Rows (PF0–PF3) as output
  *ddrk = 0x00;  // Columns (PK0–PK3) as input
}

void loop() {
  volatile char *porta = (char *)0x22;  // PORTA – A to Dp
  volatile char *portb = (char *)0x25;  // PORTB – D1 to D4
  volatile char *portf = (char *)0x31;  // PORTF – row driver
  volatile char *pink  = (char *)0x106; // PINK – column reader
  volatile long d;
  volatile int count = 0, number1 = 0, number2 = 0, result;

  while (1) {
    // Keypad scanning
    for (int row = 0; row < 4; row++) {
      // Activate one row (active-high)
      *portf = (1 << row);
      // Small delay for signal stabilization
      for (d = 0; d < 100; d++);
      // Read columns (active-high, assuming pull-down resistors)
      char columns = *pink & 0x0F;
      if (columns != 0) {
        for (int col = 0; col < 4; col++) {
          if (columns & (1 << col)) {
            // Map row and column to key value based on Wokwi keypad layout
            int key = -1;
            if (row == 0 && col == 0) key = 1;    // 1
            else if (row == 0 && col == 1) key = 2; // 2
            else if (row == 0 && col == 2) key = 3; // 3
            else if (row == 0 && col == 3) key = 10; // +
            else if (row == 1 && col == 0) key = 4; // 4
            else if (row == 1 && col == 1) key = 5; // 5
            else if (row == 1 && col == 2) key = 6; // 6
            else if (row == 1 && col == 3) key = 11; // -
            else if (row == 2 && col == 0) key = 7; // 7
            else if (row == 2 && col == 1) key = 8; // 8
            else if (row == 2 && col == 2) key = 9; // 9
            else if (row == 2 && col == 3) key = 12; // *
            else if (row == 3 && col == 0) key = 13; // <-
            else if (row == 3 && col == 1) key = 0;  // 0
            else if (row == 3 && col == 2) key = 14; // =
            else if (row == 3 && col == 3) key = 15; // /

            if (key >= 0 && key <= 9) { // Handle digit input
              *portb = 0xE0; // Enable D1
              *porta = segPatterns[key];
              for (d = 0; d < 500000; d++);
              *portb = 0xF0;
              *porta = 0x00;
              for (d = 0; d < 100; d++);

              if (count == 0) {
                number1 = key; // First digit
                count = 1;
              } else if (count == 1) {
                number2 = key; // Second digit
                count = 2;
              }
            } 
            else if (key == 10 && count == 0) { // "+" key pressed, wait for second number
              count = 1; // Move to next state to accept second number
            }else if (key == 14 && count == 2) 
                { // "=" key pressed, calculate and display
                 result = number1 + number2;
                  int tens = result / 10;
                  int ones = result % 10;

                  // Display tens digit on D2
                  *portb = 0xB0;
                  *porta = segPatterns[tens];
                  for (d = 0; d < 100; d++);
                  *portb = 0xF0;
                  *porta = 0x00;
                  for (d = 0; d < 100; d++);

                 // Display ones digit on D1
                  *portb = 0x70;
                  *porta = segPatterns[ones];
                 for (d = 0; d < 100; d++);
                  *portb = 0xF0;
                 *porta = 0x00;
                  for (d = 0; d < 100; d++);

                  // Reset for next calculation
                 count = 0;
                  number1 = 0;
                 number2 = 0;

            }
          }
        }
      }
    }
  }
}