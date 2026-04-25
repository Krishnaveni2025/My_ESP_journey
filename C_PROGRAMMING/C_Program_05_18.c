/* 
   C LEVEL 05 Problem 18
            Use only int variables
            Use only Decimals
            Use "for" statements to solve the problems. "If" also can be used to decision making but not for loop.
            Don't use Arrays, pointers, strings,etc.
   Question: 
            Write a program to get a number from the user and 
            print whether the first two digits(1's & ten's) of that number is prime or not.
   Answer:
            Input: 359 - Output: Prime
            Input: 3577 - Output: Not prime
*/
#include<stdio.h>
int prime(int n);
int onestens(int n);
int main()
{
    int number;
    printf("Input: ");
    scanf("%d",&number);
    if( prime(onestens(number)) )
            printf("Output: Prime");
    else
            printf("Output: Not Prime");
}
int prime(int n)
{
    int is_prime = 1, i = 2;
    for(;;)
    {
        if((i*i)<=n)
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
int onestens(int n)
{
    return (n%100);
}
