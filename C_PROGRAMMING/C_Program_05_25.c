/* 
   C LEVEL 05 Problem 25
            Use only int variables
            Use only Decimals
            Use "for" statements to solve the problems. "If" also can be used to decision making but not for loop.
            Don't use Arrays, pointers, strings,etc.
   Question: 
            Write a program to get a number from the user and 
            print the total number of single digit prime numbers in the number
   Answer:
            Input: 163496481 Output: 1
            Input: 364925    Output: 3
*/
#include<stdio.h>
int singlePrime_count(int n);
int prime(int n);
int main()
{
    int number;
    printf("Input: ");
    scanf("%d",&number);
    printf("Output: %d",singlePrime_count(number));
    return 0;
}
int singlePrime_count(int n)
{
    int count = 0;
    for(;;)
    {
        if(n)
        {
            if(prime(n%10))
                        count++;
            n /= 10;
        }
        else    
                break;
    }
    return count;
}
int prime(int n)
{
    int i = 2,is_prime = 1;
    if(n<=1)    return 0;
    for(;;)
    {
        if((i*i)<=n)
        {
            if(!(n%i))
            {
                is_prime = 0;
                break;
            }
            i++;
        }
        else
                break;
    }
    return is_prime;
}
