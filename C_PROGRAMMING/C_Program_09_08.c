/*
  C LEVEL 09 Problem 08
  Use only int variables
  Use ont decimals
  use arrays
Question: Get 5 numbers from the user and remove the odd  numbers and create a new array and then  print the same*/
/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

/*
  C LEVEL 09 Problem 07
  Use only int variables
  Use ont decimals
  use arrays
Question: Get 5 numbers from the user and arrange in descending order and print the same*/
#include <stdio.h>

int main()
{
    int size = 5, input[size],output[size],i,evencount=0;
    for(i = 0; i<size; i++)
    {
        printf("Enter Array %d Element: ",i);
        scanf("%d",&input[i]);
    }
    printf("Array Before Removing Odd Numbers\n");
    for(i = 0; i<size; i++)
    {
        printf("%d ",input[i]);
    }
    for(i = 0; i<size; i++)
    {
        if(!(input[i]%2))
        {
            output[evencount] = input[i];
            evencount++;
        }
    }
    if(!(evencount))
    {
        printf("All are ODD Numbers");
    }
    else
    {
        printf("\nArray After Removing Odd Numbers\n");
        for(i = 0; i<evencount; i++)
        {
            printf("%d ",output[i]);
        }
    }
    
}
