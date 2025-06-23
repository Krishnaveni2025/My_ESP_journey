//EMBEDDED SYSTEMS PROGRAMMING - GPIO
//KEYPAD CONTROL PROBLEMS
//Use a 4x4 keypad and a quad seven segment display
//SET 10 PROBLEM 05
//perform three digit addition
//example: 161+656=817,659+765=1425.
// === FUNCTION PROTOTYPES ===
void delay1(void);
void delay2(void);
int getKey(void);
void clearDisplay(void);
void enableDigit(int digit);
void displayDigit(int digit, int value);
void showResult(int result);

// === SEGMENT PATTERNS ===
// 7-segment codes for 0–9 (common-cathode)
const unsigned char segPatterns[10] = {
  0x3F, 0x06, 0x5B, 0x4F,
  0x66, 0x6D, 0x7D, 0x07,
  0x7F, 0x6F
};

// === SETUP FUNCTION ===
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

// === MAIN LOOP ===
void loop() {
  static int count = 0, number1 = 0, number2 = 0;
  int key = getKey();

  if (key >= 0 && key <= 9) {
    if (count < 3) number1 = number1 * 10 + key;
    else if (count < 6) number2 = number2 * 10 + key;

    displayDigit(4, key); // Flash last keypress on DIG4
    count++;
  }

  if (key == 14 && count >= 2 && count <= 6) {  // '=' key
    int result = number1 + number2;
    showResult(result);
    number1 = number2 = count = 0;
    clearDisplay();
  }
}

// === DISPLAY RESULT WITH ZERO SUPPRESSION ===
void showResult(int result) {
  int d[4];
  d[0] = result / 1000;
  d[1] = (result / 100) % 10;
  d[2] = (result / 10) % 10;
  d[3] = result % 10;

  for (int cycle = 0; cycle < 100; cycle++) {
    int started = 0;

    if (d[0] > 0) {
      displayDigit(1, d[0]); started = 1;
    }
    if (started || d[1] > 0) {
      displayDigit(2, d[1]); started = 1;
    }
    if (started || d[2] > 0) {
      displayDigit(3, d[2]); started = 1;
    }

    displayDigit(4, d[3]);
  }
}

// === LOW-LEVEL DISPLAY ===
void displayDigit(int digit, int value) {
  volatile char *porta = (char *)0x22;
  enableDigit(digit);
  *porta = segPatterns[value];
  delay2();
  clearDisplay();
  delay2();
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

void clearDisplay(void) {
  volatile char *porta = (char *)0x22;
  volatile char *portb = (char *)0x25;
  *porta = 0x00;
  *portb = 0xF0;
}

// === DELAYS ===
void delay1(void) {
  volatile long i;
  for (i = 0; i < 50000; i++);
}
void delay2(void) {
  volatile long i;
  for (i = 0; i < 200; i++);
}

// === KEYPAD SCANNER ===
int getKey(void) {
  volatile char *portf = (char *)0x31;
  volatile char *pink = (char *)0x106;

  const int keyMap[4][4] = {
    {1, 2, 3, -1},
    {4, 5, 6, -1},
    {7, 8, 9, -1},
    {-1, 0, 14, -1}  // '=' as key 14
  };

  for (int row = 0; row < 4; row++) {
    *portf = (1 << row);
    delay1();
    char cols = *pink & 0x0F;
    if (cols) {
      for (int col = 0; col < 4; col++) {
        if (cols & (1 << col)) {
          while (*pink & (1 << col)); // Wait for release
          return keyMap[row][col];
        }
      }
    }
  }
  return -1;
}
