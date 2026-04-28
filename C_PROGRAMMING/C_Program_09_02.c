/*
  C LEVEL 09 Problem 02
            Use only int variables
            Use only decimals
            Use arrays
  Question: 
            Get 5 numbers from user and print average of all numbers
*/
#include<stdio.h>
#define size 5
int disp_avg(int a[]);
int main()
{
    int numbers[size];
    printf("Output: %d",disp_avg(numbers));
    return 0;
}
int disp_avg(int a[])
{
    int sum = 0, i;
    for(i = 0; i<size; i++)
    {
        printf("Enter %d Number: ", i+1);
        scanf("%d",&a[i]);
        sum += a[i];
    }
    return (sum/size);
}
