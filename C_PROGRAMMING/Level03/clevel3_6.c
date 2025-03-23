// Get a number from user & revrse it and then Print it.
#include <stdio.h>
int reverse_number(int no);/*Funciton Declaration*/
int main()
{
    int number, result;
    scanf("%d", &number);
    result = reverse_number(number);/*Calling function*/
    printf("%d", result);
    return 0;
}
int reverse_number(int no1)/*funciton Defination*/
{
    int result;
    // Your Program Here
    result = 0;
    
    while (no1 != 0) // t t t t f
    {
        int digit = no1 % 10;               // 4 3 2 1
        result = ((result * 10) + digit); // 4 43 432 4321
        no1 = no1 / 10;                 // 123 12 1 0
    }
    return result;
}