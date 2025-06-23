//EMBEDDED SYSTEMS PROGRAMMING - GPIO
//KEYPAD CONTROL PROBLEMS
//Use a 4x4 keypad and a quad seven segment display
//SET 10 PROBLEM 09
//perform  division.
//display on;y quotient.
//Ex: 1561/6=260,765/9=85.
// === FUNCTION PROTOTYPES ===
void delay1(void);
void delay2(void);
int getKey(void);
void clearDisplay(void);
void enableDigit(int digit);
void displayDigit(int digit, int value);
void showResult(int result);

// === SEGMENT PATTERNS (Index 10 = '-') ===
const unsigned char segPatterns[11] = {
  0x3F, 0x06, 0x5B, 0x4F,
  0x66, 0x6D, 0x7D, 0x07,
  0x7F, 0x6F, 0x40  // '-'
};

// === SETUP ===
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
  static int number1 = 0, number2 = 0;
  static int buildingSecond = 0;
  int key = getKey();

  if (key >= 0 && key <= 9) {
    if (!buildingSecond)
      number1 = number1 * 10 + key;
    else
      number2 = number2 * 10 + key;
  }

  if (key == 15) {  // '/' key
    buildingSecond = 1;
  }

  if (key == 14) {  // '=' key
    int result = 0;
    if (number2 != 0) {
      result = number1 / number2;
    }
    showResult(result);
    number1 = number2 = buildingSecond = 0;
    clearDisplay();
  }
}

// === RESULT DISPLAY ===
void showResult(int result) {
  int negative = 0;
  int value = result;
  int d[4] = {0};

  if (result < 0) {
    negative = 1;
    value = -value;
  }

  d[0] = value / 1000;
  d[1] = (value / 100) % 10;
  d[2] = (value / 10) % 10;
  d[3] = value % 10;

  for (int i = 0; i < 100; i++) {
    if (negative) {
      int start = (d[0]) ? 0 : (d[1]) ? 1 : (d[2]) ? 2 : 3;
      displayDigit(1, 10); // '-'
      displayDigit(2, d[start]);
      displayDigit(3, (start + 1 <= 3) ? d[start + 1] : 0);
      displayDigit(4, (start + 2 <= 3) ? d[start + 2] : 0);
    } else {
      int start = (d[0]) ? 0 : (d[1]) ? 1 : (d[2]) ? 2 : (d[3]) ? 3 : 3;
      int digitsToShow = 4 - start;
      for (int j = 0; j < 4; j++) {
        if (j < 4 - digitsToShow)
          displayDigit(j + 1, 0);
        else
          displayDigit(j + 1, d[start++]);
      }
    }
  }
}

// === DISPLAY CONTROL ===
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

// === TIMING ===
void delay1(void) {
  volatile long i; for (i = 0; i < 50000; i++);
}
void delay2(void) {
  volatile long i; for (i = 0; i < 200; i++);
}

// === KEYPAD SCAN ===
int getKey(void) {
  volatile char *portf = (char *)0x31;
  volatile char *pink = (char *)0x106;

  const int keyMap[4][4] = {
    {1, 2, 3, 10},
    {4, 5, 6, 11},
    {7, 8, 9, 12},
    {13, 0, 14, 15}  // '=' = 14, '/' = 15
  };

  for (int row = 0; row < 4; row++) {
    *portf = 0x00;
    *portf = (1 << row);
    delay2();
    char cols = *pink & 0x0F;
    if (cols) {
      for (int col = 0; col < 4; col++) {
        if (cols & (1 << col)) {
          while (*pink & (1 << col));
          return keyMap[row][col];
        }
      }
    }
  }
  return -1;
}