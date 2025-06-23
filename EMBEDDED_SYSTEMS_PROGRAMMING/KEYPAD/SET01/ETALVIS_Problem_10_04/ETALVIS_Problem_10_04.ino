//EMBEDDED SYSTEMS PROGRAMMING - GPIO
//KEYPAD CONTROL PROBLEMS
//Use a 4x4 keypad and a quad seven segment display
//SET 10 PROBLEM 04
//perform two digit addition
//example: 61+72=133,19+42=61.

//function prototypes
void clearDisplay(void);
void enableDigit(int digit);
int getKey(void);
void delay1(void);
void delay2(void);
const unsigned char segPatterns[10] = {
  0x3F, 0x06, 0x5B, 0x4F,
  0x66, 0x6D, 0x7D, 0x07,
  0x7F, 0x6F
};


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

void loop() {
  static int count = 0, number1 = 0, number2 = 0, result = 0;
  int key = getKey();

  if (key >= 0 && key <= 9) {
    if (count < 2) number1 = number1 * 10 + key;
    else if (count < 4) number2 = number2 * 10 + key;
    displayDigit(1, key);
    count++;
  }

  if (key == 14 && count == 4) { // '=' key
    result = number1 + number2;
    int h = result / 100;
    int t = (result / 10) % 10;
    int o = result % 10;

    for (int i = 0; i < 50; i++) {
      displayDigit(2, h);
      displayDigit(3, t);
      displayDigit(4, o);
    }

    number1 = number2 = result = count = 0;
    clearDisplay();
  }
}
void delay1(void) {
  volatile long i;
  for (i = 0; i <= 50000; i++);
}
void delay2(void) {
  volatile long i;
  for (i = 0; i <= 100; i++);
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
  delay2();
  clearDisplay();
  delay2();
}

int getKey(void) {
  volatile char *portf = (char *)0x31;
  volatile char *pink = (char *)0x106;

  const int keyMap[4][4] = {
    {1, 2, 3, -1},
    {4, 5, 6, -1},
    {7, 8, 9, -1},
    {-1, 0, 14, -1}
  };

  for (int row = 0; row < 4; row++) {
    *portf = (1 << row);
    delay1();
    char columns = *pink & 0x0F;
    if (columns) {
      for (int col = 0; col < 4; col++) {
        if (columns & (1 << col)) {
          while (*pink & (1 << col)); // wait for release
          return keyMap[row][col];
        }
      }
    }
  }
  return -1;
}
