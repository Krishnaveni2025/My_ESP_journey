/* 
   C LEVEL 07 Problem 15
                  Use only int variables
                  Use only Decimals
                  Use functions with not return value.
                  Don't use Arrays, pointers, strings,etc.
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
void check_last_digit_odd(int a);
int main()
{
    int number;
    printf("Input: ");
    scanf("%d",&number);
    check_last_digit_odd(number);
    return 0;
}
void check_last_digit_odd(int a)
{
    int temp, multiplier = 1;
    temp = a;
    while(temp >10)
    {
        multiplier *= 10;
        temp /= 10;
    }
    if(temp%2)
            printf("Output: %d",(((temp-1)*multiplier)+(a%multiplier)));
    else
            printf("Output: %d", a);
}
