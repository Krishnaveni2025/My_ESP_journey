//EMBEDDED SYSTEMS PROGRAMMING - GPIO
//KEYPAD CONTROL PROBLEMS
//Use a 4x4 keypad and a quad seven segment display
//SET 10 PROBLEM 06
//perform  addition.
//If the tota; exceeds 9999 then display EEEE.
//Ex: 1561+2 = 1563,8765+987=9752.

void delay1(void);
void delay2(void);
const unsigned char segPatterns[11] = {
  0x3F, // 0
  0x06, // 1
  0x5B, // 2
  0x4F, // 3
  0x66, // 4
  0x6D, // 5
  0x7D, // 6
  0x07, // 7
  0x7F, // 8
  0x6F, // 9
  0x79  // E
};

void setup() {
  volatile char *ddra = (char *)0x21;   // SEGMENT OUTPUTS
  volatile char *ddrb = (char *)0x24;   // DIGIT CONTROL
  volatile char *ddrf = (char *)0x30;   // KEYPAD ROWS
  volatile char *ddrk = (char *)0x107;  // KEYPAD COLS

  *ddra = 0xFF;
  *ddrb = 0xF0;
  *ddrf = 0x0F;
  *ddrk = 0x00;
}

void loop() {
  volatile char *porta = (char *)0x22;
  volatile char *portb = (char *)0x25;
  volatile char *portf = (char *)0x31;
  volatile char *pink  = (char *)0x106;

  int count = 0, number1 = 0, number2 = 0, result = 0;
  int key;

  while (1) {
    for (int row = 0; row < 4; row++) {
      *portf = (1 << row);
      delay1();
      char columns = *pink & 0x0F;

      if (columns) {
        for (int col = 0; col < 4; col++) {
          if (columns & (1 << col)) {
            volatile long i;
            key = -1;

            if (row == 0 && col == 0) key = 1;
            else if (row == 0 && col == 1) key = 2;
            else if (row == 0 && col == 2) key = 3;
            else if (row == 1 && col == 0) key = 4;
            else if (row == 1 && col == 1) key = 5;
            else if (row == 1 && col == 2) key = 6;
            else if (row == 2 && col == 0) key = 7;
            else if (row == 2 && col == 1) key = 8;
            else if (row == 2 && col == 2) key = 9;
            else if (row == 3 && col == 1) key = 0;
            else if (row == 3 && col == 2) key = 14; // '=' key

            if (key >= 0 && key <= 9) {
              *portb = 0xE0;
              *porta = segPatterns[key];
              delay1();
              *portb = 0xF0;
              *porta = 0x00;

              if (count < 4)
                number1 = number1 * 10 + key;
              else if (count < 8)
                number2 = number2 * 10 + key;

              count++;
            }

            else if (key == 14 && count == 8) {
              result = number1 + number2;

              if (result > 9999) {
                for (int j = 0; j < 50; j++) {
                  *portb = 0xE0; *porta = segPatterns[10]; delay2();
                  *portb = 0xF0; *porta = 0x00;
                  *portb = 0xD0; *porta = segPatterns[10]; delay2();
                  *portb = 0xF0; *porta = 0x00;
                  *portb = 0xB0; *porta = segPatterns[10]; delay2();
                  *portb = 0xF0; *porta = 0x00;
                  *portb = 0x70; *porta = segPatterns[10]; delay2();
                  *portb = 0xF0; *porta = 0x00;delay2();
                }
              } else {
                int th = result / 1000;
                int h  = (result / 100) % 10;
                int t  = (result / 10) % 10;
                int o  = result % 10;

                for (int j = 0; j < 50; j++) {
                  *portb = 0xE0; *porta = segPatterns[th]; delay2();
                  *portb = 0xF0; *porta = 0x00;
                  *portb = 0xD0; *porta = segPatterns[h]; delay2();
                  *portb = 0xF0; *porta = 0x00;
                  *portb = 0xB0; *porta = segPatterns[t]; delay2();
                  *portb = 0xF0; *porta = 0x00;
                  *portb = 0x70; *porta = segPatterns[o]; delay2();
                  *portb = 0xF0; *porta = 0x00;delay2();
                }
              }

              number1 = number2 = result = 0;
              count = 0;
            }
          }
        }
      }
    }
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
