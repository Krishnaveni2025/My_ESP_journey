// Get a number from thr=e user and check whether the digits are in the ascending order.
#include <stdio.h>
int check_ascending(int no1);/*function Declaration */
int main()
{
    int number, result;
    scanf("%d", &number);
    result = check_ascending(number);/*Calling Function*/
    if (result == 1)
        printf("Yes");
    else
        printf("No");
    return 0;
}
/*Function Defination*/
int check_ascending(int no1) // 1234
{
    int result;
    // Your Program Here
    result = 1;
    int previous_digit = 10; 
    while (no1)                    // t
    {
        int present_digit = no1 % 10;       // 3 2 1 1
        no1 = no1 / 10;                     // 123 12 1 0
        if (present_digit < previous_digit) // t t t t f
        {
            previous_digit = present_digit; // 3 2 1
            continue;
        }
        else
        {
            result = 0;
            break;
        }
    }
    return result;
}