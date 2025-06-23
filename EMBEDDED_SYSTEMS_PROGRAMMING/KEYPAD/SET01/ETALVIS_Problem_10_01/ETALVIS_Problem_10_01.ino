//EMBEDDED SYSTEMS PROGRAMMING - GPIO
//KEYPAD CONTROL PROBLEMS
//Use a 4x4 keypad and a quad seven segment display
//SET 10 PROBLEM 01
//press any switch & display  that number
//0->0,.....,9->9


void enableD1(void);
void disableD1(void);
void delay1(void);
int getKey(void);
void displayDigit(int digit);
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
  enableD1();
  int key = getKey();
  if (key != -1) {
    displayDigit(key);
    delay1();
  }
}
int getKey(void) {
  volatile char *portf = (char *)0x31;  // Row driver
  volatile char *pink  = (char *)0x106; // Column reader

  for (int row = 0; row < 4; row++) {
    *portf = (1 << row); // Set one row high
    delay1();

    char columns = *pink & 0x0F; // Read columns
    if (columns) {
      for (int col = 0; col < 4; col++) {
        if (columns & (1 << col)) {
          int keyMap[4][4] = {
            {1, 2, 3, -1},
            {4, 5, 6, -1},
            {7, 8, 9, -1},
            {-1, 0, -1, -1}
          };
          // Wait until key is released
          while (*pink & (1 << col));
          return keyMap[row][col];
        }
      }
    }
  }

  return -1; // No key pressed
}
void displayDigit(int digit) {
  volatile char *porta = (char *)0x22; // Segment output
  
  if (digit >= 0 && digit <= 9) {
    enableD1();
    *porta = segPatterns[digit];
    delay1();
    disableD1();
    *porta = 0x00;
    delay1();
  }
}
void delay1(void)
{
  volatile long d;
  for(d=0;d<=100;d++);
}
void enableD1(void)
{
  volatile char *portb = (char *)0x25; // Digit 1
  *portb = 0xE0; // Enable DIG1
}
void disableD1(void)
{
  volatile char *portb = (char *)0x25; // Digit 1
  *portb = 0xF0; // Disable DIG1
}
