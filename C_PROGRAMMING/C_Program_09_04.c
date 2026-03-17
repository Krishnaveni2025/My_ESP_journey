/*
  C LEVEL 09 Problem 04
  Use only int variables
  Use ont decimals
  use arrays
Question: Get 5 numbers from the user and print the biggest number
*/
#include<stdio.h>
int main()
{
    int numbers[5], i,biggest;
    for(i = 0; i<5; i++)
    {
        printf("Enter %d Element: ",i);
        scanf("%d",&numbers[i]);
    }
    biggest = numbers[0];
    for(i=1;i<5;i++)
    {
        if(biggest<numbers[i])
            biggest = numbers[i];
    }
    printf("Biggest Element: %d",biggest);
}
