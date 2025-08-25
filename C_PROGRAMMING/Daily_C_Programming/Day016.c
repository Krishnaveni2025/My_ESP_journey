/*Detect Circular Pattern Match
You are given a 16-bit register and a target pattern (also 16-bit). Check if the target pattern can be matched by any circular rotation of the register.
 

Example 1

Input: reg = 0b1011 0000 0000 0000, target = 0b0000 0000 0000 1011  
Output: 1 (matches after left rotation by 13)

Example 2 

Input: reg = 0b1000 0000 0000 0001, target = 0b0000 0000 0000 1100  
Output: 1

Example 3 

Input: reg = 0b1111 1111 1111 1111, target = 0b1111 1111 1111 0111  
Output: 0 */
Code

#include <stdio.h>
#include <stdint.h>

uint8_t is_circular_match(uint16_t reg, uint16_t target) {
    for (int i = 0; i < 16; i++) {
        uint16_t rotated = (reg << i) | (reg >> (16 - i));
        if (rotated == target)
            return 1;
    }
    return 0;
}

int main() {
    uint16_t reg, target;
    scanf("%hu %hu", &reg, &target);
    printf("%hhu", is_circular_match(reg, target));
    return 0;
}
/*

Solving Approach

Great — let’s break down the solving approach for detecting a circular pattern match between two 16-bit values: reg and target.

🧠 Problem Understanding

You’re given:

A 16-bit register value (reg)

A 16-bit target value (target)

You need to check whether any circular left rotation of reg results in a value equal to target.

🔁 What Is Circular Rotation?

A circular left rotation by i bits means:

Bits shifted out from the left end are wrapped around to the right end.

For example, rotating 0b1011000000000000 left by 13 bits gives 0b0000000000001011.

✅ Step-by-Step Approach

Loop through all 16 possible rotations:Since it's a 16-bit value, rotating by 0 to 15 bits covers all unique circular shifts.

Perform circular left rotation:Use bitwise operations:

rotated = (reg << i) | (reg >> (16 - i));


This wraps the bits around correctly.

Mask to 16 bits:Ensure the result stays within 16 bits:

rotated &= 0xFFFF;


Compare with target:If rotated == target, return 1 (match found).

After loop ends:If no match is found, return 0.

🧪 Time Complexity

O(1): Only 16 iterations, constant time.

Efficient even for embedded systems or microcontroller firmware.*/

/*--------------------
  Count Set Bits in an 8-bit Register
You are given an 8-bit register. Count how many bits are set to 1 (i.e., high) in the register.


Example 1

Input: reg = 0b0000 1111 
Output: 4

Example 2

Input: reg = 0b1111 0000 
Output: 4

Example 3

Input: reg = 0b0000 0000 
Output: 0
-------------------------
  Code

#include <stdio.h>
#include <stdint.h>

uint8_t count_set_bits(uint8_t reg) {
    // Your code here
    uint8_t count = 0;
    while(reg!=0)
    {
        if(reg&1 == 1)
        {
            count ++;
        }
        reg>>=1;//shift right
    }
    return count;
}

int main() {
    uint8_t reg;
    scanf("%hhu", &reg);
    printf("%u", count_set_bits(reg));
    return 0;
}

Solving Approach
Count Set Bits in an 8-bit Register
#include <stdio.h>
#include <stdint.h>

uint8_t count_set_bits(uint8_t reg) {
    uint8_t count = 0;
    while (reg) {
        count += reg & 1;   // Add 1 if LSB is set
        reg >>= 1;          // Shift right
    }
    return count;
}

int main() {
    uint8_t reg;
    scanf("%hhu", &reg);
    printf("%u", count_set_bits(reg));
    return 0;
}
 

Loop through all 8 bits using right shift. At each step, check LSB and increment the count.

 */
/*Data Transmission
You are preparing a 32-bit value to send over a communication bus. To ensure compatibility across platforms, you must convert the value into 4 bytes (big-endian order) and store them into a byte array.

 
Example 1

Input: value = 0x12345678
Output: arr[0] = 0x12, arr[1] = 0x34, arr[2] = 0x56, arr[3] = 0x78
 
Example 2 

Input: value = 0x01020304
Output: arr[0] = 1, arr[1] = 2, arr[2] = 3, arr[3] = 4
*/
Absolutely, Krishnaveni! Let's walk through the **detailed explanation** of how to convert a 32-bit value into a 4-byte array in **big-endian format**, which is essential for consistent data transmission across platforms.

---

### 🧩 What Is Big-Endian?

In **big-endian** format, the **most significant byte (MSB)** comes first. This is the standard used in many network protocols (like TCP/IP) and some processors.

For example, if you have a 32-bit value:

```
value = 0x12345678
```

The bytes are:
- MSB = `0x12`
- Next = `0x34`
- Next = `0x56`
- LSB = `0x78`

So in big-endian order, the byte array should be:
```
arr[0] = 0x12
arr[1] = 0x34
arr[2] = 0x56
arr[3] = 0x78
```

---

### 🛠️ Bitwise Extraction Logic

To extract each byte from a 32-bit value, we use **bitwise shifting** and **masking**:

```c
arr[0] = (value >> 24) & 0xFF; // Extract bits 31–24
arr[1] = (value >> 16) & 0xFF; // Extract bits 23–16
arr[2] = (value >> 8)  & 0xFF; // Extract bits 15–8
arr[3] = value & 0xFF;         // Extract bits 7–0
```

#### Why `& 0xFF`?
- It ensures that only the **lowest 8 bits** are kept.
- Even after shifting, we mask to isolate the byte cleanly.

---

### 📦 Real-World Use Case

Imagine you're sending sensor data from an ESP32 to a Raspberry Pi over UART or SPI. If the Pi expects big-endian format, but the ESP32 is little-endian, you must convert the data before transmission. Otherwise, the Pi will misinterpret the bytes.

---

### 🔍 Example Walkthrough

Let’s say:
```c
uint32_t value = 0x01020304;
```

Binary representation:
```
00000001 00000010 00000011 00000100
```

Using the function:
```c
arr[0] = (value >> 24) & 0xFF; // 0x01
arr[1] = (value >> 16) & 0xFF; // 0x02
arr[2] = (value >> 8)  & 0xFF; // 0x03
arr[3] = value & 0xFF;         // 0x04
```

Output:
```
arr = {1, 2, 3, 4}
```










