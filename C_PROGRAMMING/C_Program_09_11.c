/*
  C LEVEL 09 Problem 11
            Use only int variables
            Use only decimals
            Use arrays
  Question: 
            Get 5 numbers from the user and 
            reverse each number and 
            create a new array and then  
            print the sum of all numbers in the new array 
  Example:
            Input:  7 7 7 7 7
            Output: 70 (14  14  14  14  14)
*/
#include<stdio.h>
#define size 5
void reverse(int a[], int r[]);
int getbitwidth(int n);
int sum(int a[]);
void print(int a[]);
void getnumbers(int a[]);
int main()
{
    int numbers[size], result[size];
    getnumbers(numbers);
    reverse(numbers, result);
    //print(result);
    printf("Output: %d", sum(result));
    return 0;
}
void print(int a[])
{
    int i;
    for(i = 0; i<size; i++)
    {
        printf("%d ",a[i]);
    }
}
int sum(int a[])
{
    int i, sum = 0;
    for(i = 0; i<size; i++)
    {
        sum += a[i];
    }
    return sum;
}
void reverse(int a[], int r[])
{
    int rev, i, j, bits, num;
    for(i = 0; i<size; i++)
    {
        rev = 0;
        num = a[i];
        bits = getbitwidth(num);
        for(j = 0; j<bits; j++)
        {
            rev<<=1;
            if(num&1)
                    rev|=1;
            num>>=1;
        }
        r[i] = rev;
    }
}
int getbitwidth(int n)
{
    int b = 1;
    while(n)
    {
        b++;
        n>>=1;
    }
    return b;
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
