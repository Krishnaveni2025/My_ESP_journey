/*
Validate Configuration Register Layout
You are given a ConfigRegister struct that simulates a 16-bit configuration register.
Each bit in the register has a specific meaning:

Bit Position	Meaning
0	Enable (1 = ON)
1	Mode (0 = Normal, 1 = Safe)
2–3	Priority (00 = Low, 01 = Medium, 10 = High, 11 = Invalid)
4–15	Reserved (must be 0)
Your task is to validate the register:

Return 1 if:
Bit 0 is set (Enable ON)
Bits 2–3 contain a valid priority (not 11)
All bits 4–15 are 0
Return 0 otherwise
Use pointer logic (-> or (*ptr).field) to access the data.
 

Example-1

Input: reg = 0x0005 (binary: 0000000000000101)
Output: 1

(Enable = 1, Mode = 0, Priority = 01 → Valid)


Example-2

Input: reg = 0x000B (binary: 0000000000001011)
Output: 1


Example-3

Input: reg = 0x0015 (binary: 0000000000010101)
Output: 0

(Bit 4 is set → Reserved violation)

*/

#include <stdio.h>

typedef struct {
    unsigned short reg;
} ConfigRegister;

int validate_config(ConfigRegister *cfg) {
    // Write logic using pointer 
    if(cfg->reg&0x1)
    {
        if((cfg->reg >> 2) < 3)
        {
            if((cfg->reg >> 4)==0)
            {
                return 1;
            }
        }
    }
    return 0;
}

int main() {
    ConfigRegister cfg;
    scanf("%hx", &cfg.reg);

    int result = validate_config(&cfg);
    printf("%d", result);

    return 0;
}
/*
Solving Approach

Return 1 if:Bit 0 is set (Enable ON)

Bits 2–3 contain a valid priority (not 11)

All bits 4–15 are 0

Return 0 otherwise
*/
/*
 Struct Padding
You are given a struct with the following fields in order:

char a
int b
short c
Your task is to:

Declare a variable of this struct
Compute the offset (in bytes) of each field from the base address of the struct (i.e., &s)
Print:
 
Offset of a
Offset of b
Offset of c
Total size of the struct
 
Example Output

Offset of a: 0  
Offset of b: 4  
Offset of c: 8  
Size: 12*/
/*
Code

#include <stdio.h>
#include <stddef.h>  // For offsetof

typedef struct {
    char a;
    int b;
    short c;
} MyStruct;

void print_offsets() {
    printf("Offset of a: %zu\n", offsetof(MyStruct, a));
    printf("Offset of b: %zu\n", offsetof(MyStruct, b));
    printf("Offset of c: %zu\n", offsetof(MyStruct, c));
    printf("Size: %zu\n", sizeof(MyStruct));
}

int main() {
    print_offsets();
    return 0;
}

*/
/*
Register Bitfields Using Struct Overlay
You are implementing a simulated 8-bit control register where each bit controls a feature. Rather than using masks, you’ll use a bitfield struct to access individual bits.

The register layout is as follows:

Bit	Field	Size
0	enable	1
1–2	mode	2
3	interrupt	1
4–7	reserved	4
Your task is to:

Define a union that overlays:
A struct with bitfields: enable, mode, interrupt
A raw uint8_t register
Read values for enable, mode, interrupt from input
Construct the struct, and print the final register as an 8-bit unsigned value
Assume:

enable is 0 or 1
mode ranges from 0–3
interrupt is 0 or 1
 
Example-1

Input: 1 2 1
Output: 13

Explanation:

Binary = 00001101 → enable=1, mode=10, interrupt=1
 
Example-2

Input: 0 0 1
Output: 8

Binary = 00001000
Code

#include <stdio.h>
#include <stdint.h>

typedef union {
    struct {//a struct with bit fields
        uint8_t enable    : 1;
        uint8_t mode      : 2;
        uint8_t interrupt : 1;
        uint8_t reserved  : 4;
    } bits;
    uint8_t reg;//a raw 1 byte register
} ControlRegister;//union

int main() {
    uint8_t e, m, i;
    scanf("%hhu %hhu %hhu", &e, &m, &i);//read values for enable, mode, interrupt

    // Construct and print register value
    ControlRegister *p;
    p->bits.enable = e;
    p->bits.mode = m;
    p->bits.interrupt = i;
    p->bits.reserved = 0;
    printf("%d",p->reg);
    return 0;
}

Solving Approach

Define a union that overlays:A struct with bitfields: enable, mode, interrupt

A raw uint8_t register

Read values for enable, mode, interrupt from input

Construct the struct, and print the final register as an 8-bit unsigned value

Filter Structs by Field Value for example Sensor Threshold
In real embedded systems, you often store device status or sensor data in arrays of structs. You might need to filter only the relevant records based on a field — for example, sensors above a certain threshold.

Your task is to:

Read n sensor records (each having a name and a value)
Print only those records whose value >= threshold
Struct Format

Each record contains:

char name[10]
uint8_t value
 
Example-1

Input:
n = 4, threshold = 50  
Sensors:  
T1 45  
T2 67  
T3 10  
T4 90

Output:
T2 67  
T4 90
Copy

Example-2

Input:
n = 3, threshold = 100  
Sensors:  
A1 99  
A2 100  
A3 101

Output:
A2 100  
A3 101

Code

#include <stdio.h>
#include <stdint.h>

struct Sensor {
    char name[10];
    uint8_t value;
};

void print_above_threshold(struct Sensor sensors[], uint8_t n, uint8_t threshold) {
    // Your logic here
    for(uint8_t i=0;i<n;i++)
    {
        if(sensors[i].value>=threshold)
        {
            printf("%s %hhu\n",sensors[i].name,sensors[i].value);
            
        }
    }
}

int main() {
    uint8_t n, threshold;
    scanf("%hhu %hhu", &n, &threshold);

    struct Sensor sensors[100];
    for (uint8_t i = 0; i < n; i++) {
        scanf("%s %hhu", sensors[i].name, &sensors[i].value);
    }

    print_above_threshold(sensors, n, threshold);
    return 0;
}

Solving Approach

Read n sensor records (each having a name and a value)

Print only those records whose value >= threshold

*/



