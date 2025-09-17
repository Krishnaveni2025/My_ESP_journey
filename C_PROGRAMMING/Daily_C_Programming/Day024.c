/*C program to represent a number into binary
#include <stdio.h>
void printBinary(int n);
int main() {
    int num;
    printf("Enter a decimal number: ");
    scanf("%d", &num);//15
    printf("Binary representation: ");
    printBinary(num);
    printf("\n");
    return 0;
}
void printBinary(int n) {
    //another method
    //for(int i=31;i>=0;i--){//for 16 bit use i=15
    //    printf("%d",(n>>i)&1);//it will print leading zeros too
    //}
    //we can print using char array
    //char binary[33];
    //binary[32]='\0';
    //for(int i=31;i>=0;i--){
    //    binary[i]=(n&1)+'0';
    //    n>>=1;
    //}
    //printf("%s", binary);
    
    //we use recursion
    if (n > 1) {//t
        printBinary(n / 2);//n=15,7,3,1
    }
    printf("%d", n % 2);//1,1,1,1,0
}*/
/*C program to convert binary to decimal with out using any built-in libraries
#include <stdio.h>
int binaryToDecimal(long long n);
int main() {
    long long binary;
    printf("Enter a binary number: ");
    scanf("%lld", &binary);//101111
    printf("Decimal representation: %d\n", binaryToDecimal(binary));
    return 0;
}
int binaryToDecimal(long long n) {
    int decimal = 0, base = 1, last_digit;
    while (n > 0) {
        last_digit = n % 10;//last_digit=1,1,1,1,0,1
        n = n / 10;//n=10111,1011,101,10,1,0
        decimal += last_digit * base;//decimal=1,3,7,15,15,47
        base = base * 2;//base=2,4,8,16,32,64
    }
    return decimal;//47
}*/
/*C program to convert decimal to hexadecimal without using any built-in libraries
#include <stdio.h>
void decimalToHexadecimal(int n);
int main() {
    int num;
    printf("Enter a decimal number: ");
    scanf("%d", &num);
    printf("Hexadecimal representation: ");
    decimalToHexadecimal(num);
    printf("\n");
    return 0;
}
void decimalToHexadecimal(int n) {
    char hex[20];
    int i = 0;
    while (n != 0) {
        int temp = n % 16;
        if (temp < 10) {
            hex[i] = temp + '0';
        } else {
            hex[i] = temp - 10 + 'A';
        }
        i++;
        n = n / 16;
    }
    for (int j = i - 1; j >= 0; j--) {
        printf("%c", hex[j]);
    }
}*/
/*Check If a Number Is a Power of Two
Write a function to check if a given positive integer is a power of 2. Do not use loops, multiplication, division, or library functions.
You must solve it using bitwise logic only.

 

Example-1

Input:  n = 8  
Output: YES

Example-2

Input:  n = 7  
Output: NO

Example-3

Input:  n = 1  
Output: YES*/
#include <stdio.h>
#include <stdint.h>

// Complete the function
const char* is_power_of_two(uint32_t n) {
    // Your logic here
    if (n && !(n & (n - 1))) {//n!=0 and n&(n-1)==0
        return "YES";
    }
    return "NO";
}

int main() {
    uint32_t n;
    scanf("%u", &n);

    const char* result = is_power_of_two(n);
    printf("%s", result);
    return 0;
}