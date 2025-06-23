//EMBEDDED SYSTEMS PROGRAMMING - GPIO
//KEYPAD CONTROL PROBLEMS
//Use a 4x4 keypad and a quad seven segment display
//SET 10 PROBLEM 02
//press 4 digits any switch & display  that number
//example: 1234,4567,9876.
void enableDigit(int digit);
void clearDisplay(void) ;
int getKey(void);
void delay1(void);
void displayNumber(int number);
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
  static int number = 0;
  static int digitCount = 0;
  int key = getKey();

  if (key >= 0 && key <= 9 && digitCount < 4) {
    number = number * 10 + key;
    digitCount++;
  }

  if (digitCount > 0) {
    for (int i = 0; i < 5; i++) {
      displayNumber(number);
    }
  } else {
    clearDisplay(); // Avoid displaying 0000 initially
  }
}
int getKey(void) {
  volatile char *portf = (char *)0x31;
  volatile char *pink = (char *)0x106;


  for (int row = 0; row < 4; row++) {
    *portf = (1 << row);
    delay1();  // debounce
    char col = *pink & 0x0F;
    if (col) {
      for (int c = 0; c < 4; c++) {
        if (col & (1 << c)) {
          int keyMap[4][4] = {
            {1, 2, 3, -1},
            {4, 5, 6, -1},
            {7, 8, 9, -1},
            {-1, 0, -1, -1}
          };
          while (*pink & (1 << c)); // wait for release
          return keyMap[row][c];
        }
      }
    }
  }
  return -1;
}
void enableDigit(int digit) {
  volatile char *portb = (char *)0x25;
  switch (digit) {
    case 1: *portb = 0xE0; break;
    case 2: *portb = 0xD0; break;
    case 3: *portb = 0xB0; break;
    case 4: *portb = 0x70; break;
    default: *portb = 0xF0; break; // Disable all
  }
}
void clearDisplay(void)
{
  volatile char *porta = (char *)0x22;
  volatile char *portb = (char *)0x25;
  *porta = 0x00;      // Turn off segments
  *portb = 0xF0;      // Disable all digits
}
void displayNumber(int number) {
  volatile char *porta = (char *)0x22;
  int digits[4] = {
    number / 1000,
    (number / 100) % 10,
    (number / 10) % 10,
    number % 10
  };

  for (int i = 0; i < 4; i++) {
    enableDigit(i + 1);
    *porta = segPatterns[digits[i]];
    delay1();
    clearDisplay();
    delay1();
  }
}
void delay1(void)
{
  volatile long d;
  for (d = 0; d <= 100; d++);
}
