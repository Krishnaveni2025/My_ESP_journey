// Get a number from the user and count the no of zerosin it and Print it.
#include <stdio.h>
int find_no_of_zeros(int no);/*Funciton Declaration*/
int main()
{
    int number, result;
    scanf("%d", &number);
    result = find_no_of_zeros(number);/*Calling Function*/
    printf("%d", result);
    return 0;
}
int find_no_of_zeros(int no1)/*Funciton Defination*/
{
    int result;
    // Your Program Here
    int digit;
    result = 0;
    while (no1 != 0)
    {
        digit = no1 % 10;
        if (digit == 0)
        {
            result = result + 1;
        }
        no1 = no1 / 10;
    }
    return result;
}