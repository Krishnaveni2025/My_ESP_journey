/*
  C LEVEL 09 Problem 04
           Use only int variables
           Use only decimals
           Use arrays
  Question: 
           Get 5 numbers from the user and print the biggest number
*/
#include<stdio.h>
#define size 5
int disp_biggest(int a[]);
void get5numbers(int a[]);
int main()
{
    int numbers[size];
    get5numbers(numbers);
    printf("Output: %d",disp_biggest(numbers));
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
int disp_biggest(int a[])
{
    int big = a[0];
    int i;
    for(i = 1; i<size; i++)
    {
        if(big<a[i])
        {
            big = a[i];
        }
    }
    return big;
}
