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
#define size 5
int prime(int a);
int remove_prime(int a[], int r[]);
void print(int a[], int s);
void getnumbers(int a[]);
int main()
{
    int numbers[size], result[size], composite;
    getnumbers(numbers);
    composite = remove_prime(numbers, result);
    print(result,composite);
    return 0;
}
void print(int a[], int s)
{
    int i;
    printf("Output: ");
    for(i = 0; i<s; i++)
    {
        printf("%d ",a[i]);
    }
}
int prime(int a)
{
    int i, is_prime = 1;
    if(a<2) return 0;
    for(i = 2; i<a; i++)
    {
        if(!(a%i))
        {
            return 0;
        }
    }
    return 1;
}
int remove_prime(int a[], int r[])
{
    int i, count = 0;
    for(i = 0; i<size; i++)
    {
        if(!(prime(a[i])))
        {
            r[count] = a[i];
            count++;
        }
    }
    return count;
}
void getnumbers(int a[])
{
    int i;
    printf("Input: ");
    for(i = 0; i<size; i++)
    {
        scanf("%d", &a[i]);
    }
}
