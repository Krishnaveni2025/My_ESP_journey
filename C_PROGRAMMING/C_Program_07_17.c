/* 
   C LEVEL 07 Problem 17
                  Use only int variables
                  Use only Decimals
                  Use functions with not return value.
                  Don't use Arrays, pointers, strings,etc.
   Question: 
                  Write a program to get a number from the user and 
                  print whether that number is prime or not and sum of the digits equal to 14.
   Function Name: 
                  check_prime_and_sum14
   Answer:
                  Input: 59 - Output: Prime & sum of the digits is 14
                  Input: 77 - Output: Not prime but sum of digits is 14
                  Input: 13 - Output: Prime & sum of digits is not 14
                  Input: 27 - Output: Not prime & sum of digits is not 14
*/
#include<stdio.h>
void check_prime_and_sum14(int a);
int main()
{
    int number;
    printf("Input: ");
    scanf("%d",&number);
    check_prime_and_sum14(number);
    return 0;
}
void check_prime_and_sum14(int a)
{
    int sum = 0, i, is_prime = 1;
    for(i = 2; (i*i)<=a; i++)
    {
        if(!(a%i))
        {
            is_prime = 0;
            break;
        }
    }
    while(a)
    {
        sum += (a%10);
        a /= 10;
    }
    if(sum==14)
    {
        if(is_prime)
                    printf("Prime & sum of the digits is 14");
        else
                    printf("Not prime but sum of digits is 14");
    }
    else
    {
        if(is_prime)
                    printf("Prime & sum of digits is not 14");
        else
                    printf("Not prime & sum of digits is not 14");
    }
}
