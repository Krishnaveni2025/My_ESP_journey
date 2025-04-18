//EMBEDDED SYSTEMS PROGRAMMING - GPIO
//SEVEN SEGMENT CONTROL PROBLEMS
//SET 07 PROBLEM 07
//connect a seven segment displays on port A
//connect a seven segment displays on port B
//connect a seven segment displays on port F
//connect a seven segment displays on port K
//Display number "0000" to "9999"  one by one with delay of 0.1 sec
#define outa(*(volatile char *)0x22)
#define outb(*(volatile char *)0x25)
#define outf(*(volatile char *)0x31)
#define outk(*(volatile char *)0x108)

#define ddra(*(volatile char *)0x21)
#define ddrb(*(volatile char *)0x24)
#define ddrf(*(volatile char *)0x30)
#define ddrk(*(volatile char *)0x107)

void delay01(void);

void setup() {
    ddra = 0xFF; // Set Port A as output
    ddrb = 0xFF; // Set Port B as output
    ddrf = 0xFF; // Set Port F as output
    ddrk = 0xFF; // Set Port K as output
}

void loop() {
    unsigned char num[10] = {0x3F, 0x06, 0x5B, 0x4F, 0x66, 0x6D, 0x7C, 0x7F, 0x67, 0x6F}; // Added digit 9

    for (int a = 0; a < 10; a++) {
        for (int b = 0; b < 10; b++) {
            for (int f = 0; f < 10; f++) {
                for (int k = 0; k < 10; k++) {
                    outa = num[a];
                    outb = num[b];
                    outf = num[f];
                    outk = num[k];
                    delay01();
                }
            }
        }
    }
}

void delay01(void) {
    volatile long d;
    for (d = 0; d < 40000; d++); 
}