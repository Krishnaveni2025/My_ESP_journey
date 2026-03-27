/*
  C LEVEL 09 Problem 10
        Use only int variables
        Use only decimals
        Use arrays
  Question: 
        Get 5 numbers from the user and 
        remove the prime numbers and 
        create a new array and 
        then  print the same
*/

#include<stdio.h>
int removeprime(int a[],int b[], int s);
void get5numbers(int a[], int s);
void printresult(int b[],int c);
int main()
{
    int s = 5,input[s], output[s], non_prime ;
    get5numbers(input,s);
    non_prime = removeprime(input, output, s);
    printresult(output, non_prime);
}
void get5numbers(int a[], int s)
{
    for(int i = 0; i<s; i++)
    {
        printf("Enter %d Element: ",i);
        scanf("%d",&a[i]);
    }
}
int removeprime(int a[], int b[], int s)
{
    int comp_count = 0, divider, is_prime;
    for(int i = 0; i<s; i++)
    {
        is_prime = 1;
        for(divider = 2; divider<a[i]; divider++)
        {
            if(!(a[i]%divider))
                {
                    is_prime = 0;
                    break;
                }
        }
        if(!(is_prime))
            {
                b[comp_count] = a[i];
                comp_count++;
            }
    }
    return comp_count;
}
void printresult(int b[],int c)
{
    for(int i = 0; i<c; i++)
    {
        printf("%d ",b[i]);
    }
}
