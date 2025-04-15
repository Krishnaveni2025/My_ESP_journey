//EMBEDDED SYSTEMS PROGRAMMING - GPIO
//SEVEN SEGMENT CONTROL PROBLEMS
//SET 07 PROBLEM 04
//connect two seven segment displays on port A
//share the eight port pins to all the displays
//connect the common pin of seven segment displays to bit 0 & bit 1 of port B.
//Display number 25
void delay1();
void delay2();
void setup() {
    volatile char *ddra, *ddrb;
    ddra = (char*)0x21; // DDRA register address
    *ddra = 0xFF; // Set Port A as output

    ddrb = (char*)0x24; // DDRB register address
    *ddrb = 0x03; // Set PB0 and PB1 as output
}

void delay1() {
    volatile long  i;
    for (i = 0; i < 500000; i++) ;
}
void delay2() {
    volatile long  k;
    for (k = 0; k < 50000; k++) ;
}

void loop() {
    volatile char *porta, *portb;
    porta = (char*)0x22; // PORTA register address
    portb = (char*)0x25; // PORTB register address

  while (1) {
        // Display '2' on the first digit (PB0)
        *portb = 0x01; // Set PB0 high, PB1 low
        *porta = 0x5B; // Segment code for '2'
        delay1(); // Short delay for multiplexing

        // Display '5' on the second digit (PB1)
        *portb = 0x02; // Set PB1 high, PB0 low
        *porta = 0x6D; // Segment code for '5'
        delay2(); // Short delay for multiplexing
        *porta = 0x00;
        delay1(); 
    }
}

int main() {
    setup();
    loop();
    return 0;
}
