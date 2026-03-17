/*
  C LEVEL 09 Problem 03
  Use only int variables
  Use ont decimals
  use arrays
Question: Get 5 numbers from the user and print the smallest number
*/
#include<stdio.h>
int main()
{
    int numbers[5], i,j, small, temp;
    for(i = 0; i<5; i++)
    {
        printf("Enter %d Element: ",i);
        scanf("%d",&numbers[i]);
    }
    small = numbers[0];
    for(i=1;i<5;i++)
    {
        if(small>numbers[i])
            small = numbers[i];
    }
    printf("Smallest Element: %d",small);
}
