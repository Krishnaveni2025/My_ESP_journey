/*
  C LEVEL 09 Problem 06
  Use only int variables
  Use only decimals
  use arrays
Question: Get 5 numbers from the user and arrange in ascending order and print the same
*/
#include<stdio.h>

int main()
{
    int numbers[5], i = 0, j = 0,temp;
    for(i=0; i<5; i++)
    {
        printf("Enter Number %d: ",i+1);
        scanf("%d",&numbers[i]);
    }
    for(i = 0; i<5; i++)
    {
        for(j=i+1; j<5; j++)
        {
            if(numbers[i]>numbers[j])
            {
                temp = numbers[j];
                numbers[j] = numbers[i];
                numbers[i] = temp;
            }
        }
    }
    for(i=0; i<5; i++)
    {
        printf("%d ",numbers[i]);
    }
    return 0;
}
