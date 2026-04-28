/* 
   C LEVEL 07 Problem 19
                    Use only int variables
                    Use only Decimals
                    Use functions with not return value.
                    Don't use Arrays, pointers, strings,etc.
   Question: 
                    Write a program to get a four digit number from the user and 
                    print whether the middle two digits(10's & 100's) of that number is prime or not.
   Function Name: 
                    middle_2digits_prime
   Answer:
                    Input: 6359 - Output: Not Prime
                    Input: 3537 - Output: Prime
*/
#include<stdio.h>
void middle_2digits_prime(int a);
int main()
{
    int number;
    printf("Input: ");
    scanf("%d",&number);
    middle_2digits_prime((number/10)%100);
}
void middle_2digits_prime(int a)
{
    int is_prime = 1, i;
    for(i = 2; (i*i)<=a; i++)
    {
        if(!(a%i))
        {
            is_prime = 0;
            break;
        }
    }
    if(is_prime)
            printf("Output: Prime");
    else
            printf("Output: Not Prime");
}
