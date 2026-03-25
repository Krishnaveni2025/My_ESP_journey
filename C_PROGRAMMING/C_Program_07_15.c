/* C LEVEL 07 Problem 15
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
void check_last_digit_odd(int n);
int main()
{
    int number;
    printf("Enter Number: ");
    scanf("%d",&number);
    check_last_digit_odd(number);
}
void check_last_digit_odd(int n)
{
    int num,multiplier = 1, last, result;
    num = n;
    while(num>9)
    {
        multiplier *= 10;
        num /= 10;
    }
    last = num;
    if(last%2)
            last -= 1;
    result = (last*multiplier)+(n%multiplier);
    printf("%d",result);
}
