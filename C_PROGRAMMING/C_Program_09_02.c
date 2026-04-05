/*
  C LEVEL 09 Problem 02
        Use only int variables
        Use only decimals
        Use arrays
Question: 
        Get 5 numbers from user and print average of all numbers
*/
#include<stdio.h>
int number[5], result = 0;

void get5numbers(int a[]);
void print(int avg);

int main()
{
    get5numbers(number);
    print(result);
}
void get5numbers(int a[])
{
    for(int i = 0; i<5; i++)
    {
        printf("Enter %d Number: ",i+1);
        scanf("%d",&a[i]);
        result += a[i];
    }
}
void print(int avg)
{
    avg /= 5;
    printf("Average = %d",avg);
}
