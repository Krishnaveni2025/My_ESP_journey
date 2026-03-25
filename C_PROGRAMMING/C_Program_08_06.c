/* C LEVEL 08 Problem 06
        Use only int variables
        Use only Decimals
        Use Functions with a return value
        Do not use arrays, strings, pointers, etc.
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
int disp_sum_all_digits(int n);
int main()
{
    int number;
    printf("Enter Number: ");
    scanf("%d",&number);
    printf("%d",disp_sum_all_digits(number));
}
int disp_sum_all_digits(int n)
{
    int sum = 0;
    while(n)
    {
        sum += (n%10);
        n /= 10;
    }
    return sum;
}
