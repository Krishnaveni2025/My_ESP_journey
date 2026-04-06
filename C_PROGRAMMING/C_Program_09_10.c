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
  Example:
            Input: 15 14 13 12 11
            Output: 15 14 12
*/

#include<stdio.h>

void getnumbers(int a[], int s);
void print_array(int a[], int s);
int removeprime(int a[], int b[], int s);
int prime(int a);

int main()
{
    int size = 5, composite_count;
    int numbers[size], composite_numbers[size];
    getnumbers(numbers, size);
    print_array(numbers, size);
    composite_count = removeprime(numbers, composite_numbers, size );
    print_array(composite_numbers, composite_count);
}
int prime(int a)
{
    int is_prime = 1, j = 2;
    for(j=2; j<a; j++)
    {
        if(!(a%j))
        {
            is_prime = 0;
            break;
        }
    }
    return is_prime;
}
int removeprime(int a[], int b[], int s)
{
    int cc = 0;
    for(int i = 0; i<s; i++)
    {
        if(!prime(a[i]))
        {
           b[cc] = a[i];
           cc++;
        }
    }
    return cc;
}
void getnumbers(int a[], int s)
{
    for(int i = 0; i<s; i++)
    {
        printf("Enter %d Number: ",i+1);
        scanf("%d",&a[i]);
    }
}
void print_array(int a[], int s)
{
    printf("\n");
    for(int i = 0; i<s; i++)
    {
        printf("%d ",a[i]);
    }
}
