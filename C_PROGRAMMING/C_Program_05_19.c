/* 
   C LEVEL 05 Problem 19
            Use only int variables
            Use only Decimals
            Use "for" statements to solve the problems. "If" also can be used to decision making but not for loop.
            Don't use Arrays, pointers, strings,etc.
   Question: 
            Write a program to get a four digit number from the user and 
            print whether the middle two digits(10's & 100's) of that number is prime or not.
   Answer:
            Input: 6359 - Output: Not Prime
            Input: 3537 - Output: Prime
*/
#include<stdio.h>
int prime(int n);
int middle(int n);
int main()
{
    int four_dn;
    printf("Input: ");
    scanf("%d",&four_dn);
    if(prime(middle(four_dn)))
            printf("Output: Prime");
    else
            printf("Output: Not Prime");
}
int middle(int n)
{
    return ((n/10)%100);
}
int prime(int n)
{
    int is_prime =1, i = 2;
    for(;;)
    {
        if((i*i)<=n)
        {
            if(!(n%i))
            {
                is_prime = 0;
            }
            i++;
        }
        else
                break;
    }
    return is_prime;
}
