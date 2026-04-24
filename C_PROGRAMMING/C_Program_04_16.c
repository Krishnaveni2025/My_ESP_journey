/* 
   C LEVEL 04 Program 16
            Use only int variables
            Use only Decimals
            Use only "if/else", goto statements. Don't use  "for/while"
            Don't use arrays, pointers, strings, etc.
   Question: 
            Write a program to get a number from the user and 
            print whether the number is prime or not
   Answer:
           Input:31   Output:prime
           Input:27   Output:not prime
*/
#include<stdio.h>
int prime(int n);
int main()
{
    int number;
    printf("Number: ");
    scanf("%d",&number);
    if(prime(number))
            printf("Prime");
    else
            printf("Not Prime");
}
int prime(int n)
{
    int is_prime = 1, i = 2;
    loop:
            if((i*i)<=n)
            {
                if(!(n%i))
                {
                    is_prime = 0;
                    
                }
                i++;
                goto loop;
            }
    return is_prime;
}
