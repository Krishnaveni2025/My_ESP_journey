/*
  C LEVEL 09 Problem 09
  Use only int variables
  Use ont decimals
  use arrays
Question: Get 5 numbers from the user and remove the even  numbers and create a new array and then  print the same*/
#include<stdio.h>
int main()
{
    int size = 5, input[size],output[size],i,oddcount=0;
    for(i = 0; i<size; i++)
    {
        printf("Enter Array %d Element: ",i);
        scanf("%d",&input[i]);
    }
    printf("Array Before Removing EVEN Numbers\n");
    for(i = 0; i<size; i++)
    {
        printf("%d ",input[i]);
    }
    for(i = 0; i<size; i++)
    {
        if(input[i]%2)
        {
            output[oddcount] = input[i];
            oddcount++;
        }
    }
    if(!(oddcount))
    {
        printf("All are EVEN Numbers");
    }
    else
    {
        printf("\nArray After Removing EVEN Numbers\n");
        for(i = 0; i<oddcount; i++)
        {
            printf("%d ",output[i]);
        }
    }
    
}

