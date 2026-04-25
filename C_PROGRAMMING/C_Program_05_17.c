/* 
   C LEVEL 05 Problem 17
            Use only int variables
            Use only Decimals
            Use "for" statements to solve the problems. "If" also can be used to decision making but not for loop.
            Don't use Arrays, pointers, strings,etc.
   Question: 
            Write a program to get a number from the user and print whether that number is prime or not and sum of the digits equal to 14.
   Answer:
            Input: 59 - Output: Prime & sum of the digits is 14
            Input: 77 - Output: Not prime but sum of digits is 14
            Input: 13 - Output: Prime & sum of digits is not 14
            Input: 27 - Output: Not prime & sum of digits is not 14
*/
#include<stdio.h>
int prime(int n);
int isSum14(int n);
int main()
{
    int number;
    printf("Input: ");
    scanf("%d",&number);
    if(prime(number))
    {
        if(isSum14(number))
                printf("Prime & sum of the digits is 14");
        else
                printf("Prime & sum of digits is not 14");
    }
    else
    {
        if(isSum14(number))
                printf("Not prime but sum of digits is 14");
        else
                printf("Not prime & sum of digits is not 14");
    }
}
int isSum14(int n)
{
    int sum =0;
    for(;;)
    {
        if(n)
        {
            sum += (n%10);
            n /= 10;
        }
        else
             break;
    }
    if(sum==14) return 1;
    return 0;
}
int prime(int n)
{
    int is_prime = 1, i = 2;
    for(;;)
    {
        if((i*i)<n)
        {
            if(!(n%i))
                is_prime = 0;
            i++;
        }
        else
                break;
    }
    return is_prime;
}
