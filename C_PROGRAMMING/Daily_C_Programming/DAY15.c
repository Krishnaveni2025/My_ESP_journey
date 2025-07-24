//c program for converting
//binary to decimal
#include <stdio.h>

int main()
{
    int binary, decimal = 0, base = 1, rem;
    printf("Enter a binary number: ");
    scanf("%d", &binary);// Input binary number
    // Convert binary to decimal
    while (binary > 0)// Loop until binary is 0
    {
        rem = binary % 10;// Get the last digit
        decimal = decimal + rem * base;// Add the digit to the decimal
        binary = binary / 10;// Remove the last digit
        base = base * 2;// Multiply the base by 2
    }
    printf("Decimal equivalent: %d\n", decimal);// Print the decimal equivalent
    return 0;
}
