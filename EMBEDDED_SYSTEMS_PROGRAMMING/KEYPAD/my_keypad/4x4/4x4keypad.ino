void setup() {
  volatile char *ddra = (char *)0x21;   // DDRA – PORTA as output (LEDs)
  volatile char *ddrb = (char *)0x24;   // DDRB – PORTB as output (LEDs)
  volatile char *ddrf = (char *)0x30;   // DDRF – PF0, PF1 as output (rows)
  volatile char *ddrk = (char *)0x107;  // DDRK – PK0, PK1 as input (columns)

  *ddra = 0xFF;  // LEDs on PA0–PA7 as output
  *ddrb = 0xFF;  // LEDs on PB0–PB7 as output
  *ddrf = 0x0F;  // Rows (PF0 TO PF3) as output
  *ddrk = 0x00;  // Columns (PK0 TO PK3) as input
}

void loop() {
  volatile char *porta = (char *)0x22;  // PORTA – LEDs
  volatile char *portb = (char *)0x25;  // PORTB – LEDs
  volatile char *portf = (char *)0x31;  // PORTF – row driver
  volatile char *pink  = (char *)0x106; // PINK – column reader
  volatile long d;

  while (1) {
    // Turn off all LEDs initially
    *porta = 0x00;
    *portb = 0x00;

    // Scan each row (0 to 3)
    for (int row = 0; row < 4; row++) {
      // Activate one row at a time by setting the corresponding bit in PORTF
      *portf = (1 << row);

      // Small delay to allow the signal to stabilize
      for (d = 0; d < 1000; d++);

      // Read the column states from PINK (PK0-PK3)
      char columns = *pink & 0x0F; // Mask to read only PK0-PK3

      // Check each column (0 to 3)
      for (int col = 0; col < 4; col++) {
        if (columns & (1 << col)) { // If button in this column is pressed
          // Calculate the LED index (0 to 15) based on row and column
          int ledIndex = row * 4 + col;

          // Map the LED index to PORTA (0-7) or PORTB (8-15)
          if (ledIndex < 8) {
            // LED is on PORTA (PA0-PA7)
            *porta |= (1 << ledIndex); // Turn on the corresponding LED
          } else {
            // LED is on PORTB (PB0-PB7)
            *portb |= (1 << (ledIndex - 8)); // Turn on the corresponding LED
          }
        }
      }

      // Deactivate the row
      *portf = 0x00;

      // Small delay before scanning the next row
      for (d = 0; d < 1000; d++);
    }
  }
}