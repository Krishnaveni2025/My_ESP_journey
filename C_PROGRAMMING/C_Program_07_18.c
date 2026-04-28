/* 
   C LEVEL 07 Problem 18
                 Use only int variables
                 Use only Decimals
                 Use functions with not return value.
                 Don't use Arrays, pointers, strings,etc.
   Question: 
                 Write a program to get a number from the user and print whether the first two digits(1's & ten's) of that number is prime or not.
   Function Name: 
                 check_first_2digits_prime
   Answer:
                 Input: 359 - Output: Prime
                 Input: 3577 - Output: Not prime
*/
#include<stdio.h>
void check_first_2digits_prime(int a);
int main()
{
    int number;
    printf("Input: ");
    scanf("%d",&number);
    check_first_2digits_prime(number);
    return 0;
}
void check_first_2digits_prime(int a)
{
    int is_prime = 1, i;
    for(i = 2; (i*i)<=(a%100); i++)
    {
        if(!((a%100)%i))
        {
            is_prime = 0;
            break;
        }
    }
    if(is_prime)
                printf("Output: prime");
    else
                printf("Output: Not prime");
}
