/* 
   C LEVEL 07 Problem 12
                  Use only int variables
                  Use only Decimals
                  Use functions with not return value.
                  Don't use Arrays, pointers, strings,etc.
   Question: 
                  Get a number from the user print the sum of all digits.
   Function Name: 
                  disp_sum_all_digits
   Answer:
                  Input:123456   Output:21
                  Input:76895439 Output:51
                  Input:675      Output:18
  */
#include<stdio.h>
void disp_sum_all_digits(int n);
int main()
{
    int number;
    printf("Enter Number: ");
    scanf("%d",&number);
    disp_sum_all_digits(number);
}
void disp_sum_all_digits(int n)
{
    int sum_digits = 0;
    while(n)
    {
        sum_digits += n%10;
        n /= 10;
    }
    printf("%d",sum_digits);
}
