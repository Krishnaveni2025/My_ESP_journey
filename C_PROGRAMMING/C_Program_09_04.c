/*
  C LEVEL 09 Problem 04
  Use only int variables
  Use ont decimals
  use arrays
Question: Get 5 numbers from the user and print the biggest number
*/
#include <stdio.h>

int main()
{
    int size,arr[size],i,big;
    printf("Enter the size: ");
    scanf("%d",&size);
    for(i = 0; i<size; i++)
    {
        printf("Enter %d Element: ",i);
        scanf("%d",&arr[i]);
        
    }
    big = arr[0];
    for(i = 1; i<size; i++)
    {
        if(big<arr[i])
        {
            big = arr[i];
        }
    }
    printf("Big = %d",big);
}
