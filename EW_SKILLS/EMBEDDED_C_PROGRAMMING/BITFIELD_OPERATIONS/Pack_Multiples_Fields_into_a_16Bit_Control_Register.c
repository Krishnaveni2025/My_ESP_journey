/*
25. Pack Multiple Fields into a 16-bit Control Register
In embedded systems, multiple configuration fields are often packed into a single register using bit-level operations.

You are given the following field specifications to be packed into a 16-bit control register:

Field	Bits	Position (LSB-first)
Mode	3	Bits 0–2
Speed	5	Bits 3–7
Reserved	2	Bits 8–9 (must be 0)
Status	6	Bits 10–15
Your task is to:

Read mode, speed, and status from input
Pack them into a uint16_t register following the given bit layout
Ensure reserved bits (8–9) remain 0
Print the resulting packed value
 
Example-1

Input: mode = 3, speed = 10, status = 12
Output: 12371
(Hex: 0x3053, Binary: 0011000001010011)
Example-2

Input: mode = 7, speed = 31, status = 63
Output: 64767
(Hex: 0xFCFF, Binary: 1111110011111111)
Example-3

Input: mode = 4, speed = 16, status = 8
Output: 8324
(Hex: 0x2084, Binary: 0010000010000100)

*/
