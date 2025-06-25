//Embedded Systems programming - GPIO
//Dot Matrix Control Problems
//use PORT A for ROWS and PORTB for COLUMNs
//self Assessment set -13 Problem 05
//Display Revolving text "Welcome" Right to Left.


volatile char *porta = (char *)0x22;
volatile char *portb = (char *)0x25;

void delay1(void) {
  for (volatile long i = 0; i < 1000; i++);
}

void setup() {
  volatile char *ddra = (char *)0x21;
  volatile char *ddrb = (char *)0x24;
  *ddra = 0xFF;
  *ddrb = 0xFF;
  *porta = 0x00;
  *portb = 0xFF;
}

// Letter bitmaps (8x8 row-wise)
char W[8] = {0xFF, 0xBD, 0xBD, 0xBD, 0xA5, 0xA5, 0x81, 0x99}; // 'W'
char E[8] = {0xFF, 0xFF, 0xC7, 0xBB, 0x83, 0xBF, 0xC7, 0xFF};  // 'e'
char L[8] = {0xcf, 0xef, 0xef, 0xef, 0xef, 0xef, 0x83, 0xff}; // 'l'
char C[8] = {0xff, 0xc7, 0xbb, 0xBF, 0xBF, 0xbb, 0xc7, 0xFF};  // 'c'
char O[8] = {0xFF, 0xFF, 0xCF, 0xB7, 0xB7, 0xCF, 0xFF, 0xFF}; // 'o'
char M[8] = {0xFF, 0xD7, 0xAB, 0xAB, 0xAB, 0xAB, 0xAB, 0xFF};// 'm

void revolveWELCOME() {
  char* letters[7] = {W, E, L, C, O, M, E};
  char columns[80];  // Enough for 7 chars × 8 cols + spacing
  int index = 0;

  // Flatten all characters into vertical columns
  for (int ch = 0; ch < 7; ch++) {
    for (int col = 0; col < 8; col++) {
      char colByte = 0x00;
      for (int row = 0; row < 8; row++) {
        if ((letters[ch][row] & (1 << (7 - col))) == 0)
          colByte |= (1 << row); // set pixel ON
      }
      columns[index++] = colByte;
    }
    columns[index++] = 0x00; // spacer column
  }

  int totalCols = index;

  while (1) {
    for (int shift = 0; shift < totalCols; shift++) {
      for (int frame = 0; frame < 80; frame++) {
        for (int col = 0; col < 8; col++) {
          *portb = ~(1 << (7 - col));  // flip scan direction
          *porta = columns[(shift + col) % totalCols];  // regular left-to-right lookup
          delay1();
          *porta = 0x00;
          delay1();
        }
      }
    }
  }
}

void loop() {
  setup();
  revolveWELCOME();
}