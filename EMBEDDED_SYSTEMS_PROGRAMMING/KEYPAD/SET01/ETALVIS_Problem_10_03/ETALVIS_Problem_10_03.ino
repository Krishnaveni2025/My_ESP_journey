//EMBEDDED SYSTEMS PROGRAMMING - GPIO
//KEYPAD CONTROL PROBLEMS
//Use a 4x4 keypad and a quad seven segment display
//SET 10 PROBLEM 03
//perform single digit addition
//example: 6+7=13,9+4=13.

//function prototypes
void clearDisplay(void);
void enableDigit(int digit);
int getKey(void);
void delay1(void);
// Segment patterns for digits 0–9 (common-cathode)
const unsigned char segPatterns[10] = {
  0x3F, 0x06, 0x5B, 0x4F,
  0x66, 0x6D, 0x7D, 0x07,
  0x7F, 0x6F
};

// --- Pin Initialization ---
void setup() {
  volatile char *ddra = (char *)0x21;
  volatile char *ddrb = (char *)0x24;
  volatile char *ddrf = (char *)0x30;
  volatile char *ddrk = (char *)0x107;
  *ddra = 0xFF;
  *ddrb = 0xF0;
  *ddrf = 0x0F;
  *ddrk = 0x00;
}

// --- Main Execution Loop ---
void loop() {
  static int number1 = 0, number2 = 0, count = 0;
  int key = getKey();

  if (key >= 0 && key <= 9) {
    if (count == 0) number1 = key;
    else if (count == 1) number2 = key;
    displayDigit(1, key);
  }

  if (key == 10 && count == 0) {  // '+' pressed
    count = 1;
  } else if (key == 14 && count == 1) {  // '=' pressed
    int result = number1 + number2;
    int tens = result / 10;
    int ones = result % 10;
    for (int i = 0; i < 20; i++) {
      displayDigit(3, tens);
      displayDigit(4, ones);
    }
    number1 = number2 = count = 0;
  }
}

void delay1(void) {
  volatile long d;
  for (d = 0; d <= 100; d++);
}

void clearDisplay(void) {
  volatile char *porta = (char *)0x22;
  volatile char *portb = (char *)0x25;
  *porta = 0x00;
  *portb = 0xF0;
}

void enableDigit(int digit) {
  volatile char *portb = (char *)0x25;
  switch (digit) {
    case 1: *portb = 0xE0; break;
    case 2: *portb = 0xD0; break;
    case 3: *portb = 0xB0; break;
    case 4: *portb = 0x70; break;
    default: *portb = 0xF0; break;
  }
}

void displayDigit(int digit, int value) {
  volatile char *porta = (char *)0x22;
  enableDigit(digit);
  *porta = segPatterns[value];
  delay1();
  clearDisplay();
  delay1();
}

// --- Keypad Scanner ---
int getKey(void) {
  volatile char *portf = (char *)0x31;
  volatile char *pink = (char *)0x106;
  const int keyMap[4][4] = {
    {1, 2, 3, 10},
    {4, 5, 6, 11},
    {7, 8, 9, 12},
    {13, 0, 14, 15}
  };

  for (int row = 0; row < 4; row++) {
    *portf = (1 << row);
    delay1();
    char cols = *pink & 0x0F;
    if (cols) {
      for (int c = 0; c < 4; c++) {
        if (cols & (1 << c)) {
          while (*pink & (1 << c)); // Wait for release
          return keyMap[row][c];
        }
      }
    }
  }
  return -1;
}
