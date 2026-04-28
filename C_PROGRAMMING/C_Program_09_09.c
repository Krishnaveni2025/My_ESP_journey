/*
  C LEVEL 09 Problem 09
            Use only int variables
            Use only decimals
            Use arrays
  Question: 
            Get 5 numbers from the user and 
            remove the even numbers and 
            create a new array and 
            then  print the same
  Example:
            Input:  15 14 13 12 11
            Output: 15 13 11
*/
#include<stdio.h>
#define size 5
int even(int a);
int remove_even(int a[], int r[]);
void print(int a[], int s);
void getnumbers(int a[]);
int main()
{
    int numbers[size], result[size], odd;
    getnumbers(numbers);
    odd = remove_even(numbers, result);
    print(result,odd);
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
int even(int a)
{
    return (a%2);
}
int remove_even(int a[], int r[])
{
    int i, count = 0;
    for(i = 0; i<size; i++)
    {
        if(even(a[i]))
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
