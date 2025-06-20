//EMBEDDED SYSTEMS PROGRAMMING - GPIO
//KEYPAD CONTROL PROBLEMS
//Use a 4x4 keypad and a quad seven segment display
//SET 10 PROBLEM 04
//perform two digit addition
//example: 61+72=133,19+42=61.

void delay1(void);
// Seven-segment patterns for digits 0-9 (common-cathode, active-high)
const unsigned char segPatterns[10] = {
  0x3F, // 0
  0x06, // 1
  0x5B, // 2
  0x4F, // 3
  0x66, // 4
  0x6D, // 5
  0x7D, // 6
  0x07, // 7
  0x7F, // 8
  0x6F  // 9
};



void setup() {
  volatile char *ddra = (char *)0x21;   // DDRA – Segments A-Dp
  volatile char *ddrb = (char *)0x24;   // DDRB – Digit control (PB4–PB7)
  volatile char *ddrf = (char *)0x30;   // DDRF – Rows (PF0–PF3)
  volatile char *ddrk = (char *)0x107;  // DDRK – Columns (PK0–PK3)

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

  volatile int count = 0, number1 = 0, number2 = 0, result = 0;
  int key;
  while (1) {
    for (int row = 0; row < 4; row++) {
      *portf = (1 << row);
      delay1();
      char columns = *pink & 0x0F;

      if (columns) {
        for (int col = 0; col < 4; col++) {
          if (columns & (1 << col)) {
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
            else if (row == 3 && col == 2) key = 14; // '='

            // Handle digit input for two-digit + two-digit
            if (key >= 0 && key <= 9) {
              // Show input briefly on D1
              *portb = 0xE0;
              *porta = segPatterns[key];
              delay1();
              *portb = 0xF0;
              *porta = 0x00;

              if (count < 2)
                number1 = number1 * 10 + key;
              else if (count < 4)
                number2 = number2 * 10 + key;

              count++;
            }

            // '=' key
            else if (key == 14 && count == 4) {
              result = number1 + number2;
              int h = result / 100;
              int t = (result / 10) % 10;
              int o = result % 10;
              volatile long i;

              while(key) { // Display for a while
                *portb = 0xD0; *porta = segPatterns[h]; 
                for(i=0;i<=100;i++);
                *portb = 0xF0;*porta = 0x00;
                for(i=0;i<=100;i++); 
                *portb = 0xB0; *porta = segPatterns[t]; 
                for(i=0;i<=100;i++);
                *portb = 0xF0;*porta = 0x00;
                for(i=0;i<=100;i++); 
                *portb = 0x70; *porta = segPatterns[o]; 
                *portb = 0xF0;*porta = 0x00; 
                for(i=0;i<=100;i++);
              }

              *portb = 0xF0; *porta = 0x00;
              number1 = number2 = result = 0;
              count = 0;
            }
          }
        }
      }
    }
  }
}
void delay1(void)
{
  volatile long i;
  for(i=0;i<=50000;i++);
}