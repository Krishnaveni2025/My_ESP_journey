/*
  C LEVEL 09 Problem 03
  Use only int variables
  Use ont decimals
  use arrays
Question: Get 5 numbers from the user and print the smallest number
*/
#include <stdio.h>

int main()
{
    int size,arr[size],i,small;
    printf("Enter the size: ");
    scanf("%d",&size);
    for(i = 0; i<size; i++)
    {
        printf("Enter %d Element: ",i);
        scanf("%d",&arr[i]);
        
    }
    small = arr[0];//assume first element is small
    for(i = 1; i<size; i++)
    {
        if(small>arr[i])
        {
            small = arr[i];
        }
    }
    printf("small = %d",small);
    return 0;
}
