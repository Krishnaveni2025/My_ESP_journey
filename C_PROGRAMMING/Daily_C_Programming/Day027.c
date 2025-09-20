/*
 Checksum Validation
You are given a block of memory (array of n bytes) which includes n-1 data bytes and the last byte as checksum.

Your task is to verify whether the last byte equals the XOR of all previous bytes (excluding itself).

Return:

1 if the checksum is valid
0 if the checksum is incorrect
Checksum: It’s a simple error-detection method that ensures data hasn’t been corrupted during storage or transmission.

The sender calculates based on specific algorithm and sends it with the data; the receiver recalculates it similarly from the received data—if both match, the data is intact, otherwise it’s likely corrupted.

Some methods used are 

Simple Sum Add all bytes, keep only the lowest 8 or 16 bits.
XOR Checksum: XOR all bytes of data.
CRC (Cyclic Redundancy Check): more accurate, etc
 
Example-1

Input: n = 5, mem = [10, 20, 30, 40, 60]
Output: 1
Copy code
(XOR = 10 ^ 20 ^ 30 ^ 40 = 60)


Example-2

Input: n = 4, mem = [5, 9, 1, 3]
Output: 0
Copy code
(XOR = 5 ^ 9 ^ 1 = 13, checksum = 3)


Example-3

Input: n = 3, mem = [7, 3, 4]
Output: 1
Copy code
(XOR = 7 ^ 3 = 4)*/
Code

#include <stdio.h>

int validate_checksum(int *mem, int n) {
    int x = 0;
    for (int i = 0; i < n - 1; i++) {
        x ^= mem[i];  // XOR all data bytes
    }
    return x == mem[n - 1] ? 1 : 0;  // Compare with checksum
}

int main() {
    int n, arr[100];
    scanf("%d", &n);
    
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int result = validate_checksum(arr, n);
    printf("%d", result);

    return 0;
}
/*
Solving Approach



XOR all bytes except the last one to compute the expected checksum.

Compare the computed checksum with the last byte in the array.

Return 1 if they match (valid), else return 0 (corrupted).

Simple, fast, and perfect for embedded integrity checks.



*/
