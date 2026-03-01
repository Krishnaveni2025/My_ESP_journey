/*
  C LEVEL 09 Problem 07
  Use only int variables
  Use ont decimals
  use arrays
Question: Get 5 numbers from the user and arrange in descending order and print the same*/
#include <stdio.h>

int main()
{
    int size = 5, arr1[size],i,temp,j;
    for(i = 0; i<size; i++)
    {
        printf("Enter Array %d Element: ",i);
        scanf("%d",&arr1[i]);
    }
    printf("Array Before Arrangement\n");
    for(i = 0; i<size; i++)
    {
        printf("%d ",arr1[i]);
    }
    printf("\nArray After Arrangement\n");
    for(i = 0; i<size; i++)
    {
        for(j=i+1;j<size;j++)
        {
            if(arr1[i]<arr1[j])
            {
                temp = arr1[j];
                arr1[j] = arr1[i];
                arr1[i] = temp;
            }
        }
    }
    for(i = 0; i<size; i++)
    {
        printf("%d ",arr1[i]);
    }
    
}
