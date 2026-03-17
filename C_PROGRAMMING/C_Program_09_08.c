/*
  C LEVEL 09 Problem 08
  Use only int variables
  Use only decimals
  use arrays
Question: Get 5 numbers from the user and 
remove the odd  numbers and 
create a new array and 
then  print the same*/
#include<stdio.h>
int main()
{
    int input[5], output[5], evencount = 0, i;
    for(i=0; i<5; i++)
    {
        printf("Enter Number %d: ",i+1);
        scanf("%d",&input[i]);
        if(!(input[i]%2))
        {
            output[evencount] = input[i];
            evencount++;
        }
    }
    for(i=0; i<evencount; i++)
    {
        printf("%d ",output[i]);
    }
    
}
