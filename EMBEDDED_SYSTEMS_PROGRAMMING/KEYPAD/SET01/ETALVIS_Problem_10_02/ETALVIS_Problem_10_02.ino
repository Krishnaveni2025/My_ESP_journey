//EMBEDDED SYSTEMS PROGRAMMING - GPIO
//KEYPAD CONTROL PROBLEMS
//Use a 4x4 keypad and a quad seven segment display
//SET 10 PROBLEM 02
//press 4 digits any switch & display  that number
//example: 1234,4567,9876.


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
  volatile int count, number, a, d1, d2, d3, d4;
  
  while (1) {
    // Keypad scanning

    for (int row = 0; row < 4; row++) {
      // Activate one row (active-high)
      *portf = (1 << row);
      // Small delay for signal stabilization
      for (d = 0; d < 100; d++);
      // Read columns (active-high, assuming pull-down resistors)
      char columns = *pink & 0x0F;
      if (columns!=0) {
        for (int col = 0; col < 4; col++) {
          if (columns & (1 << col)) {
            // Map row and column to key value directly
            if (row == 0 && col == 0)//row 1 col 1 - 1
            {
              a = 1;
              count = count + 1;
            }
            if (row == 0 && col == 1)//row 1 col 2 - 2
            {
              //*porta = segPatterns[2];//display 2
              a = 2;
              count = count + 1;

            }
            if (row == 0 && col == 2)//row 1 col 3 - 3
            {
              a = 3;
              count = count + 1;
            }
            if (row == 1 && col == 0)//row 2 col 1 - 4
              {
                a = 4;
                count = count + 1;
              }
            if (row == 1 && col == 1)//row 2 col 2 - 5
              {
                a = 5;
                count = count + 1;
              }
            if (row == 1 && col == 2)//row 2 col 3 - 6
              {
                a = 6;
                count = count + 1;
              }
            if (row == 2 && col == 0)//row 3 col 1 - 7
              {
                a = 7;
                count = count + 1;
              }
            if (row == 2 && col == 1)//row 3 col 2 - 8
              {
                a = 8 ;
                count = count + 1;
              }
            if (row == 2 && col == 2)//row 3 col 3 - 9
              {
                a = 9;
                count = count + 1;
              }
            if (row == 3 && col == 1)//row 4 col 2 - 0
              {
                a = 0;
                count = count + 1;
              }
              *portb = 0xE0;// enable D1
              *porta = segPatterns[a];
              // Small delay for signal stabilization
              for (d = 0; d < 500000; d++);
              *portb = 0xF0;
              *porta = 0x00;
              for (d = 0; d < 100; d++);
              number = (number * 10) + (a * 1);
              while(count == 4) {
                d1 = number / 1000;
                d2 = ((number % 1000) / 100);
                d3 = ((number % 100) / 10);
                d4 = (number % 10);
                *portb = 0xE0;
                *porta = segPatterns[d1];
                for (d = 0; d < 100; d++);
                *portb = 0xF0;
                *porta = 0x00;
                for (d = 0; d < 100; d++);
                *portb = 0xD0;
                *porta = segPatterns[d2];
                for (d = 0; d < 100; d++);
                *portb = 0xF0;
                *porta = 0x00;
                for (d = 0; d < 100; d++);
                *portb = 0xB0;
                *porta = segPatterns[d3];
                for (d = 0; d < 100; d++);
                *portb = 0xF0;
                *porta = 0x00;
                for (d = 0; d < 100; d++);
                *portb = 0x70;
                *porta = segPatterns[d4];
                for (d = 0; d < 100; d++);
                *portb = 0xF0;
                *porta = 0x00;
                for (d = 0; d < 100; d++);
              }
            }
          }
        }
      }
    }
  }
