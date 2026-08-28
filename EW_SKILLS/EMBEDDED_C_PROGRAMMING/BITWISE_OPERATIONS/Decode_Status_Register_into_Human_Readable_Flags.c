/*
11. Decode Status Register into Human-Readable Flags
In embedded systems, status registers often represent multiple flags using each bit. You are given an 8-bit status register. Each bit corresponds to a different condition.

Bit-to-Flag Mapping

Bit	Meaning
0	Power On
1	Error
2	Tx Ready
3	Rx Ready
4	Overheat
5	Undervoltage
6	Timeout
7	Reserved
You must write a function that:

Accepts a uint8_t status_reg
Decodes which flags are set (bits = 1)
Prints only the enabled flag names, one per line, in the order of bits from LSB to MSB (0 to 7)
 
Example-1

Input: 

13
Output:

Power On
Tx Ready
Rx Ready
Example-2

Input: 

48
Output:

Overheat
Undervoltage
Example-3

Input: 

255
Output:

Power On
Error
Tx Ready
Rx Ready
Overheat
Undervoltage
Timeout
Reserved
 */
#include <stdio.h>
#include <stdint.h>

const char *flag_names[8] = {
    "Power On",
    "Error",
    "Tx Ready",
    "Rx Ready",
    "Overheat",
    "Undervoltage",
    "Timeout",
    "Reserved"
};

void decode_status(uint8_t status_reg) {
    for (int i = 0; i < 8; i++) {
        if ((status_reg >> i) & 1) {
            printf("%s\n", flag_names[i]);
        }
    }
}

int main() {
    uint8_t reg;
    scanf("%hhu", &reg);
    decode_status(reg);
    return 0;
}
