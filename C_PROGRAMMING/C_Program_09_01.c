/*
  C LEVEL 09 Problem 01
  Use only int variables
  Use ont decimals
  use arrays
Question: Get 5 numbers from the user and print all the sum of all numbers
*/
#include<stdio.h>
int main()
{
    int numbers[5], i, sum = 0;
    for(i = 0; i<5; i++)
    {
        printf("Enter %d Element: ",i);
        scanf("%d",&numbers[i]);
        sum+=numbers[i];
    }
    printf("Sum = %d",sum);
}
