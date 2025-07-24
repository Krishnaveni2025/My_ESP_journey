// C Program to check
// Maximum and Minimum
// Between two numbers
// Without any condition or loop
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a = 55, b = 23;

    // return maximum among the two numbers
    printf("max = %d\n", ((a + b) + abs(a - b)) / 2);

    // return minimum among the two numbers
    printf("min = %d", ((a + b) - abs(a - b)) / 2);

    return 0;
}
