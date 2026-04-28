/*
  C LEVEL 09 Problem 01
            Use only int variables
            Use only decimals
            Use arrays
  Question: 
            Get 5 numbers from the user and print the sum of all numbers
*/
#include<stdio.h>
#define size 5
int disp_sum(int a[]);
int main()
{
    int numbers[size];
    printf("Output: %d",disp_sum(numbers));
    return 0;
}
int disp_sum(int a[])
{
    int i, sum = 0;
    for(i = 0; i<size; i++)
    {
        printf("Enter %d Number: ",i+1);
        scanf("%d",&a[i]);
        sum += a[i];
    }
    return sum;
}
