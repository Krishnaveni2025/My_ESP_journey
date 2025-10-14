/*
Construct UART Data Frame with Parity Bit
You are implementing UART data transmission logic. A control register configures parity settings for data framing. The control register is defined as an 8-bit register:
 

typedef struct {
    uint8_t parity_enable : 1;   // 0 = Disabled, 1 = Enabled
    uint8_t parity_type   : 1;   // 0 = Even parity, 1 = Odd parity
    uint8_t reserved      : 6;   // Reserved bits
} UART_Control;
Copy
 

You’re given a 7-bit data (0–127). Your task is to create an 8-bit UART frame using the control register:

If parity is disabled, the MSB (bit 7) is 0, and the remaining 7 bits are data.
If parity is enabled:
Count the number of 1s in the 7-bit data.
Add a parity bit at the MSB (bit 7):
Even parity ➝ parity bit = 0 if 1s are even, 1 if odd.
Odd parity  ➝ parity bit = 1 if 1s are even, 0 if odd.
 

Parity in Simple Terms

Parity is an error-detection bit added to the data:

Even parity → total number of 1s (including parity) must be even
(e.g., data = 1011 → has 3 ones → parity = 1 → 10001011)
 
Odd parity  → total number of 1s (including parity) must be odd
(e.g., data = 1010 → has 2 ones → parity = 1 → 10001010)

 
Example-1

Input: data = 85, parity_enable = 1, parity_type = 0
Output: frame = 0x55


Example-2

Input: data = 3, parity_enable = 1, parity_type = 1
Output: frame = 0x83


Example-3

Input: data = 25, parity_enable = 0, parity_type = 0
Output: frame = 0x19

*/

#include <stdio.h>
#include <stdint.h>

typedef struct {
    uint8_t parity_enable : 1;
    uint8_t parity_type   : 1;
    uint8_t reserved      : 6;
} UART_Control;

uint8_t create_uart_frame(uint8_t data, UART_Control *ctrl) {
    if (ctrl->parity_enable == 0) {
        // Parity disabled → MSB = 0, keep 7-bit data
        return data & 0x7F;
    }

    // Count number of 1s in 7-bit data
    int ones = 0;
    for (int i = 0; i < 7; i++) {
        if (data & (1 << i))
            ones++;
    }

    uint8_t parity_bit;
    if (ctrl->parity_type == 0) {
        // Even parity → parity bit = 1 if ones are odd
        parity_bit = (ones % 2 == 0) ? 0 : 1;
    } else {
        // Odd parity → parity bit = 1 if ones are even
        parity_bit = (ones % 2 == 0) ? 1 : 0;
    }

    // Construct frame: parity_bit as MSB + 7-bit data
    return (parity_bit << 7) | (data & 0x7F);
}

int main() {
    uint8_t data;
    scanf("%hhu", &data);  // 7-bit input

    uint8_t parity_enable, parity_type;
    scanf("%hhu %hhu", &parity_enable, &parity_type);

    UART_Control ctrl;
    ctrl.parity_enable = parity_enable;
    ctrl.parity_type = parity_type;

    uint8_t frame = create_uart_frame(data, &ctrl);//
    printf("frame = 0x%02X", frame);

    return 0;
}
