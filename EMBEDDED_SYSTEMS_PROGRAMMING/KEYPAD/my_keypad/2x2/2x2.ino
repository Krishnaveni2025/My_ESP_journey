void setup() {
  volatile char *ddra = (char *)0x21;   // DDRA – PORTA as output (LEDs)
  volatile char *ddrf = (char *)0x30;   // DDRF – PF0, PF1 as output (rows)
  volatile char *ddrk = (char *)0x107;  // DDRK – PK0, PK1 as input (columns)

  *ddra = 0xFF;  // LEDs on PA0–PA3 as output
  *ddrf = 0x03;  // Rows (PF0, PF1) as output
  *ddrk = 0x00;  // Columns (PK0, PK1) as input
}

void loop() {
  volatile char *porta = (char *)0x22;  // PORTA – LEDs
  volatile char *portf = (char *)0x31;  // PORTF – row driver
  volatile char *pink  = (char *)0x106; // PINK – column reader
  volatile long d;
  char col;

  while (1) {
    for (int row = 0; row < 2; row++) {
      *portf = 0x03;             // Set both rows HIGH
      *portf &= ~(1 << row);     // Pull current row LOW
      for (d = 0; d < 1000; d++); // Debounce delay

      col = *pink & 0x03;        // Read PK0, PK1 (columns)

      if (row == 0 && (col & (1 << 0))) {
        *porta = 0x04; // LED3 (PA2)
      } else if (row == 0 && (col & (1 << 1))) {
        *porta = 0x08; // LED4 (PA3)
      } else if (row == 1 && (col & (1 << 0))) {
        *porta = 0x01; // LED1 (PA0)
      } else if (row == 1 && (col & (1 << 1))) {
        *porta = 0x02; // LED2 (PA1)
      }

      for (d = 0; d < 10000; d++); // Delay to visualize LED output
      *porta = 0x00; // Clear LEDs before next scan
    }
  }
}
