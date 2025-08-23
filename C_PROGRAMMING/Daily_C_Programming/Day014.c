Use bit masking (`& 0x0F`) to extract the lower nibble and right-shift by 4 bits (`>> 4`) followed by masking to get the upper nibble.  
Control the logic using `pos`: if `pos == 0`, return lower nibble; if `pos == 1`, return upper nibble.
#include <stdio.h>

unsigned char extractNibble(unsigned char reg, int pos) {
    // Write your code here
    if(pos==0)//lower nibble
    {
        return (reg & 0x0F);
    }
    else if(pos==1)//upper nibble
    {
        return ((reg>>4)&0x0F);
    }
    else
    {
        return 0;
    }
}

int main() {
    unsigned char reg;
    int pos;
    scanf("%hhu %d", &reg, &pos);
    printf("%d", extractNibble(reg, pos));
    return 0;
}


TOGGLE 5th bit of a number by XOR operation by mask value 0010 0000
for toggling any bit mask value is set the perticular bit as 1 then perform XOR
#include <stdio.h>

int toggleFifthBit(int n) {
    // Write your code here
    return (n^(1<<5));
}

int main() {
    int n;
    scanf("%d", &n);
    printf("%d", toggleFifthBit(n));
    return 0;
}
