#include <stdio.h>

// Function to reverse bits based on a specific bit-width
int reverse_bits(int num, int bit_size) {
    unsigned int reversed = 0;
    for (int i = 0; i < bit_size; i++) {
        // 1. Shift reversed left to make room for the next bit
        reversed <<= 1;
        
        // 2. If the rightmost bit of num is 1, set the rightmost bit of reversed to 1
        if (num & 1) {
            reversed |= 1;
        }
        
        // 3. Shift num right to process the next bit
        num >>= 1;
    }
    return reversed;
}

int main() {
    int input[5], output[5];
    int bits = 8; // Example: reversing within an 8-bit boundary

    for(int i = 0; i < 5; i++) {
        printf("Enter number %d: ", i + 1);
        scanf("%d", &input[i]);
        
        // Reverse the bits and store in the second array
        output[i] = reverse_bits(input[i], bits);
    }

    // Print results and sum
    int sum = 0;
    printf("\nReversed (Binary Logic):\n");
    for(int i = 0; i < 5; i++) {
        printf("%d -> %d\n", input[i], output[i]);
        sum += output[i];
    }
    printf("Total Sum: %d\n", sum);

    return 0;
}
