/*
  C LEVEL 09 Problem 08
             Use only int variables
             Use only decimals
             Use arrays
  Question: 
             Get 5 numbers from the user and 
             remove the odd  numbers and 
             create a new array and 
             then  print the same
  Example:
             Input:  15 14 13 12 11
             Output: 14 12
*/
#include<stdio.h>
#define size 5
int remove_odd(int a[], int r[]);
int odd(int a);
void print(int a[], int s);
void getnumbers(int a[]);
int main()
{
    int numbers[size], result[size], even;
    getnumbers(numbers);
    even = remove_odd(numbers, result);
    print(result, even);
}
int remove_odd(int a[], int r[])
{
    int i, count = 0;
    for(i = 0; i<size; i++)
    {
        if(!(odd(a[i])))
        {
            r[count] = a[i];
            count++;
        }
    }
    return count;
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
int odd(int a)
{
    return (a%2);
}
void getnumbers(int a[])
{
    int i;
    printf("Input: ");
    for(i = 0; i<size; i++)
    {
        scanf("%d",&a[i]);
    }
}
