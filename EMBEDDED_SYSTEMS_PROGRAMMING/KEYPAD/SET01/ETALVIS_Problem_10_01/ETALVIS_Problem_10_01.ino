//EMBEDDED SYSTEMS PROGRAMMING - GPIO
//KEYPAD CONTROL PROBLEMS
//Use a 4x4 keypad and a quad seven segment display
//SET 10 PROBLEM 01
//press any switch & display  that number
//0->0,.....,9->9


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
  *portb = 0xE0;// enable D1
  while (1) {
    // Keypad scanning

    for (int row = 0; row < 4; row++) {
      // Activate one row (active-high)
      *portf = (1 << row);
      // Small delay for signal stabilization
      for (d = 0; d < 100; d++);
      // Read columns (active-high, assuming pull-down resistors)
      char columns = *pink & 0x0F;
      if (columns) {
        for (int col = 0; col < 4; col++) {
          if (columns & (1 << col)) {
            // Map row and column to key value directly
            if (row == 0 && col == 0)//row 1 col 1 - 1
            {
              *porta = segPatterns[1];//display 1
              // Small delay for signal stabilization
              for (d = 0; d < 100; d++);
            }
            if (row == 0 && col == 1)//row 1 col 2 - 2
            {
              *porta = segPatterns[2];//display 2
              // Small delay for signal stabilization
              for (d = 0; d < 100; d++);
            }
            if (row == 0 && col == 2)//row 1 col 3 - 3
            {
              *porta = segPatterns[3];//display 3
              // Small delay for signal stabilization
              for (d = 0; d < 100; d++);
            }
            if (row == 1 && col == 0)//row 2 col 1 - 4
            {
              *porta = segPatterns[4];//display 4
              // Small delay for signal stabilization
              for (d = 0; d < 100; d++);
            }
            if (row == 1 && col == 1)//row 2 col 2 - 5
            {
              *porta = segPatterns[5];//display 5
              // Small delay for signal stabilization
              for (d = 0; d < 100; d++);
            }
            if (row == 1 && col == 2)//row 2 col 3 - 6
            {
              *porta = segPatterns[6];//display 6
              // Small delay for signal stabilization
              for (d = 0; d < 100; d++);
            }
            if (row == 2 && col == 0)//row 3 col 1 - 7
            {
              *porta = segPatterns[7];//display 7
              // Small delay for signal stabilization
              for (d = 0; d < 100; d++);
            }
            if (row == 2 && col == 1)//row 3 col 2 - 8
            {
              *porta = segPatterns[8];//display 8
              // Small delay for signal stabilization
              for (d = 0; d < 100; d++);
            }
            if (row == 2 && col == 2)//row 3 col 3 - 9
            {
              *porta = segPatterns[9];//display 9
              // Small delay for signal stabilization
              for (d = 0; d < 100; d++);
            }
            if (row == 3 && col == 1)//row 4 col 2 - 0
            {
              *porta = segPatterns[0];//display 0
              // Small delay for signal stabilization
              for (d = 0; d < 100; d++);
            }
          }
        }
      }
    }
  }
}