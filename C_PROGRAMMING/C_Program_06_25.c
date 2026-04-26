/* 
   C LEVEL 06 Problem 25
            Use only int variables
            Use only Decimals
            Use "while" statements to solve the problems. "If" also can be used to decision making but not for loop.
            Don't use Arrays, pointers, strings,etc.
   Question: 
            Write a program to get a number from the user and 
            print the total number of single digit prime numbers in the number
   Answer:
            Input: 163496481 Output: 1
            Input: 364925    Output: 3
*/
#include<stdio.h>
int single_PrimeCount(int n);
int prime(int n);
int main()
{
    int number;
    printf("Input: ");
    scanf("%d",&number);
    printf("Output: %d",single_PrimeCount(number));
    return 0;
}
int prime(int n)
{
    if(n==1)    return 0;
    int i = 2, is_prime = 1;
    while(1)
    {
        if((i*i)<=n)
        {
            if(!(n%i))
                    is_prime = 0;
            i++;
        }
        else return is_prime;
    }
}
int single_PrimeCount(int n)
{
    int count = 0;
    while(1)
    {
        if(n)
        {
            if(prime(n%10))
                    count++;
            n /= 10;
        }
        else return count;
    }
}
