//EMBEDDED SYSTEMS PROGRAMMING - GPIO
//KEYPAD CONTROL PROBLEMS SET 10 - PROBLEM 02
//Use 4 x 4 Keypad and Quad 7 Segment Display
//Press 4 DIGITs & display that number.
//Ex: 1234, 6754,9870.
void delay1(void);
void display_number(void);
void keypad_scan(void);
char get_number(char row, char col);
void setup() {
    // Configure PORTF (Keypad Rows) as output
    volatile char *dirf = (volatile char *)0x30;
    *dirf = 0xFF;

    // Configure PORTK (Keypad Columns) as input with pull-ups
    volatile char *dirk = (volatile char *)0x107;
    *dirk = 0x00;
    volatile char *portk = (volatile char *)0x108;
    *portk = 0x0F;

    // Configure PORTA (7-Segment Data) as output
    volatile char *dira = (volatile char *)0x21;
    *dira = 0xFF;

    // Configure PORTC (Digit Selection) as output
    volatile char *dirc = (volatile char *)0x27;
    *dirc = 0x0F;
}

volatile char digits[4] = {0, 0, 0, 0}; // Store 4-digit input
volatile char current_digit = 0; // Index for storing next digit

void loop() {
    volatile char *outc = (volatile char *)0x28;
    *outc = 0x0F; // Enable first digit

    keypad_scan(); // Read keypad input
    display_number(); // Refresh quad display
    delay1();
}

// **Keypad Scanning & Number Storage**
void keypad_scan() {
    volatile char *ink = (volatile char *)0x106;
    volatile char *outf = (volatile char *)0x31;

    for (volatile char row = 0; row < 4; row++) {
        *outf = ~(1 << row);
        volatile char x = *ink;

        if (x != 0) { // If a key is pressed
            digits[current_digit] = get_number(row, x); // Store keypress as number
            current_digit = (current_digit + 1) % 4; // Cycle through buffer (4 digits)
            delay1(); // Debounce
            while (*ink != 0); // Wait for key release
        }
    }
}

// **Extract Number from Keypad Press**
char get_number(char row, char col) {
    volatile char num_map[4][4] = { 
        {1, 2, 3, 'A'}, 
        {4, 5, 6, 'B'}, 
        {7, 8, 9, 'C'}, 
        {0, '*', '#', 'D'} 
    };
    return num_map[row][col / 2]; // Extract digit from row/col press
}

// **Display 4-Digit Number Using Multiplexing**
void display_number() {
    volatile char *outa = (volatile char *)0x22;
    volatile char *outc = (volatile char *)0x28;
    
    volatile char segment_map[10] = {0x3F, 0x06, 0x5B, 0x4F, 0x66, 
                                     0x6D, 0x7D, 0x07, 0x7F, 0x6F};

    for (volatile char digit = 0; digit < 4; digit++) {
        *outc = ~(1 << digit); // Activate corresponding digit
        *outa = segment_map[digits[digit]]; // Load segment data
        delay1(); // Refresh delay for proper multiplexing
    }
}

// **Delay Function**
void delay1() {
    for (volatile long i = 0; i < 10000; i++);
}