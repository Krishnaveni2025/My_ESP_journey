// Question: Get two 3-digit numbers from user. Add the one’s and hundred’s digits of both the
// numbers. Print the sum of all the digits of the number whose sum of one’s and
// hundred’s digits is bigger.
#include <stdio.h>

int main()
{
    int x1, x2, y;
    printf("Enter First Number: ");
    scanf("%d", &x1);
    printf("Enter second Number: ");
    scanf("%d", &x2);
    int sum1, sum2;
    sum1 = (x1 / 100) + (x1 % 10);
    sum2 = (x2 / 100) + (x2 % 10);
    while (sum1 > sum2)
    {
        y = sum1 + ((x1 % 100) / 10);
        printf("Result = %d", y);
        break;
    }
    while (sum1 < sum2)
    {
        y = sum2 + ((x2 % 100) / 10);
        printf("Result = %d", y);
        break;
    }
}