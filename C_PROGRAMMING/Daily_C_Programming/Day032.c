/*
Serialized Data Buffer
In firmware, you often need to assemble a communication packet as a byte array before sending it over UART/SPI.

You are given the following fields:

Field    	Size	  Description
Start    	1 byte	Always 0xA5
Command  	1 byte	User input
Value    	2 byte	16-bit data (uint16_t)
Status	  1 byte	Flags (0 or 1)
Checksum	4 byte	32-bit checksum (uint32_t)
End	      1 byte	Always 0x5A
Your task is to:

Fill a uint8_t buffer[10] with the data in this order
Use pointer casting or byte manipulation
Print the entire buffer contents as space-separated integers
 
Example-1

Input:
Command = 0x01
Value = 0x1234
Status = 1
Checksum = 0xAABBCCDD
Output:
165 1 52 18 1 221 204 187 170 90

 

Example-2

Input:
Command = 0xFF
Value = 0x00FF
Status = 0
Checksum = 0x01020304
Output:
165 255 255 0 0 4 3 2 1 90
  */

Code

#include <stdio.h>
#include <stdint.h>

void build_packet(uint8_t command, uint16_t value, uint8_t status, uint32_t checksum) {
    uint8_t buffer[10];

    buffer[0] = 0xA5;                     // Start byte
    buffer[1] = command;                  // Command byte
    buffer[2] = value & 0xFF;             // Value LSB
    buffer[3] = (value >> 8) & 0xFF;      // Value MSB
    buffer[4] = status;                   // Status byte

    buffer[5] = checksum & 0xFF;          // Checksum byte 0 (LSB)
    buffer[6] = (checksum >> 8) & 0xFF;   // Checksum byte 1
    buffer[7] = (checksum >> 16) & 0xFF;  // Checksum byte 2
    buffer[8] = (checksum >> 24) & 0xFF;  // Checksum byte 3 (MSB)

    buffer[9] = 0x5A;                     // End byte

    // Print buffer contents
    for (int i = 0; i < 10; i++) {
        printf("%d ", buffer[i]);
    }
    printf("\n");
}
int main() {
    uint8_t cmd, status;
    uint16_t val;
    uint32_t crc;

    scanf("%hhu %hu %hhu %u", &cmd, &val, &status, &crc);
    build_packet(cmd, val, status, crc);
    return 0;
}
/*
Solving Approach



✅ Step-by-Step Solving Approach

1️⃣ Initialize the buffer

Create a uint8_t buffer[10] to hold the serialized packet.

2️⃣ Assign fixed values

Set buffer[0] = 0xA5 (Start byte)

Set buffer[9] = 0x5A (End byte)

3️⃣ Insert Command

buffer[1] = command (1 byte)

4️⃣ Insert Value (2 bytes)

Use bit masking and shifting:buffer[2] = value & 0xFF → LSB

buffer[3] = (value >> 8) & 0xFF → MSB

5️⃣ Insert Status

buffer[4] = status (1 byte)

6️⃣ Insert Checksum (4 bytes)

Split 32-bit checksum into 4 bytes:buffer[5] = checksum & 0xFF

buffer[6] = (checksum >> 8) & 0xFF

buffer[7] = (checksum >> 16) & 0xFF

buffer[8] = (checksum >> 24) & 0xFF

7️⃣ Print the buffer

Loop through buffer[0] to buffer[9] and print each byte as an integer.
*/

