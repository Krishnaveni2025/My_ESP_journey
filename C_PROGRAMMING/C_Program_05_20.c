/* 
   C LEVEL 05 Problem 20
            Use only int variables
            Use only Decimals
            Use "for" statements to solve the problems. "If" also can be used to decision making but not for loop.
            Don't use Arrays, pointers, strings,etc.
   Question: 
            Write a program to print total number single digit prime numbers.
   Answer:
            4
*/
#include<stdio.h>
int main()
{
    int i,n = 2,is_prime = 1, count = 0;
    for(;;)
    {
        if(n<9)
        {
            is_prime = 1;
            i = 2;
            if((i*i)<=n)
            {
                if(!(n%i))
                is_prime = 0;
                i++;
            }
            if(is_prime)
                     count++;
            n++;
        }
        else
                break;
        
    }
    printf("%d",count);
}
