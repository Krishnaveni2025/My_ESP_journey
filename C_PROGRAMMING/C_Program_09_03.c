/*
  C LEVEL 09 Problem 03
           Use only int variables
           Use only decimals
           Use arrays
  Question: 
           Get 5 numbers from the user and print the smallest number
*/
#include<stdio.h>
#define size 5
int disp_small(int a[]);
void get5numbers(int a[]);
int main()
{
    int numbers[size];
    get5numbers(numbers);
    printf("Output: %d",disp_small(numbers));
    return 0;
}
void get5numbers(int a[])
{
    int i;
    for(i = 0; i<size; i++)
    {
        printf("Enter %d Number: ",i+1);
        scanf("%d",&a[i]);
    }
}
int disp_small(int a[])
{
    int i, small = a[0];
    for(i = 1; i<size; i++)
    {
        if(small>a[i])
        {
            small = a[i];
        }
    }
    return small;
}
