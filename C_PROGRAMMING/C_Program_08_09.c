/* 
   C LEVEL 08 Problem 09
                    Use only int variables
                    Use only Decimals
                    Use Functions with a return value
                    Do not use arrays, strings, pointers, etc.
   Question: 
                    Write a program to get a number from the user and 
                    if the last digit of the number is even print the same number. 
                    If the last digit of the number is odd subtract 1 from the last digit and 
                    print the number.(Note: Last Digit - MSB)
   Function Name: 
                    check_last_digit_odd
   Answer:
                    Input:654324   Output:654324 (last digit = 6)
                    Input:76895439 Output:66895439 (last digit = 7)
                    Input:675      Output:675 (last digit = 6)
*/
#include<stdio.h>
int check_last_digit_odd(int n);
int main()
{
    int number;
    printf("Input: ");
    scanf("%d",&number);
    printf("Output: %d",check_last_digit_odd(number));
    return 0;
}
int check_last_digit_odd(int n)
{
    int last, multiplier = 1;
    last = n;
    while(last>9)
    {
        multiplier *= 10;
        last /= 10;
    }
    if(last%2)
            return (((last-1)*multiplier)+(n%multiplier));
    return n;
}
