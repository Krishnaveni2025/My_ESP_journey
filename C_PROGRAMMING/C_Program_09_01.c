/*
  C LEVEL 09 Problem 01
        Use only int variables
        Use only decimals
        Use arrays
Question: 
        Get 5 numbers from the user and print the sum of all numbers
*/

#include<stdio.h>

int arr[5], result;
void get5numbers(int a[]);
void print(int sum);
int main()
{
    get5numbers(arr);
    print(result);
}
void get5numbers(int a[])
{
    for(int i = 0 ; i<5; i++)
    {
        printf("Enter %d Number: ",i+1);
        scanf("%d",&a[i]);
        result += a[i];
    }
}
void print(int sum)
{
    printf("Sum = %d",sum);
}
