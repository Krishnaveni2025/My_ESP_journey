/*
  C LEVEL 09 Problem 10
  Use only int variables
  Use only decimals
  use arrays
Question: Get 5 numbers from the user and 
remove the prime numbers and 
create a new array and 
then  print the same*/

#include<stdio.h>
int prime_check(int n);
int main()
{
    int input[5], output[5], compositecount = 0, i;
    for(i=0; i<5; i++)
    {
        printf("Enter Number %d: ",i+1);
        scanf("%d",&input[i]);
        if(!(prime_check(input[i])))
        {
            output[compositecount] = input[i];
            compositecount++;
        }
    }
    for(i=0; i<compositecount; i++)
    {
        printf("%d ",output[i]);
    }
}
int prime_check(int n)
{
    int i= 2, is_prime = 1;
    for(i=2; i<n; i++)
    {
        if(!(n%i))
        {
            is_prime = 0;
            break;
        }
    }
    if(is_prime)
        return 1;
    else
        return 0;
}
