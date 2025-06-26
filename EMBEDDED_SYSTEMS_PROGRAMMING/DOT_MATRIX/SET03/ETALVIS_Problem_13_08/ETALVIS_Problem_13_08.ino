//Embedded Systems programming - GPIO
//Dot Matrix Control Problems
//use PORT A for ROWS and PORTB for COLUMNs
//self Assessment set -13 Problem 08
//Display Revolving text "Welcome" bottom to top.

volatile char *porta = (volatile char *)0x22; // PORT A for rows (pins 22–29)
volatile char *portb = (volatile char *)0x25; // PORT B for columns (pins 10–13, 50–53)

// Font data for "Welcome" (0 = LED on, 1 = LED off for columns)
static char font[7][8] = {
  // W
  {0xFF, 0xBD, 0xBD, 0xBD, 0xA5, 0xA5, 0x81, 0xFF},
  // e
  {0xFF, 0xFF, 0xC7, 0xBB, 0x83, 0xBF, 0xC7, 0xFF},
  // l
  {0xCF, 0xEF, 0xEF, 0xEF, 0xEF, 0xEF, 0x83, 0xFF},
  // c
  {0xFF, 0xC7, 0xBB, 0xBF, 0xBF, 0xBB, 0xC7, 0xFF},
  // o
  {0xFF, 0xFF, 0xCF, 0xB7, 0xB7, 0xCF, 0xFF, 0xFF},
  // m
  {0xFF, 0xD7, 0xAB, 0xAB, 0xAB, 0xAB, 0xAB, 0xFF},
  // e
  {0xFF, 0xFF, 0xC7, 0xBB, 0x83, 0xBF, 0xC7, 0xFF}
};

// Display buffer for scrolling
static char display_buffer[8];

void setup() {
  volatile char *ddra = (volatile char *)0x21; // DDRA for PORT A
  volatile char *ddrb = (volatile char *)0x24; // DDRB for PORT B
  *ddra = 0xFF; // Set PORT A as output (rows)
  *ddrb = 0xFF; // Set PORT B as output (columns)
  displayoff(); // Initialize display off
}

void loop() {
  static int current_letter = 0; // Current letter index (0 to 6)
  static int scroll_pos = 0;    // Scroll position (0 to 7)

  // Load the current letter into the buffer, shifted for bottom-to-top scrolling
  for (int i = 0; i < 8; i++) {
    if (i <= 7 - scroll_pos) {
      display_buffer[i] = font[current_letter][scroll_pos + i];
    } else {
      display_buffer[i] = 0xFF; // Blank (all LEDs off) for rows below the letter
    }
  }

  // Display the buffer for a short duration
  for (int frame = 0; frame < 50; frame++) { // Show for ~50ms
    for (int row = 0; row < 8; row++) {
      *porta = (1 << row);          // Select row
      *portb = display_buffer[row]; // Set columns
      delay1();                     // Multiplexing delay
      displayoff();                 // Clear display
      delay1();
    }
  }

  // Update scroll position
  scroll_pos++;
  if (scroll_pos > 7) { // After scrolling one letter
    scroll_pos = 0;     // Reset scroll position
    current_letter = (current_letter + 1) % 7; // Move to next letter
  }
}

void displayoff(void) {
  *porta = 0x00; // All rows off
  *portb = 0xFF; // All columns off (HIGH for cathodes)
}

void delay1(void) {
  volatile long d;
  for (d = 0; d <= 300; d++); // Short delay for multiplexing
}

void delay2(void) {
  volatile long d;
  for (d = 0; d <= 500000; d++); // Longer delay (not used in scrolling)
}