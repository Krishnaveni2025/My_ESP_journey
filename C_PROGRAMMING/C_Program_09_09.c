/*
  C LEVEL 09 Problem 09
  Use only int variables
  Use only decimals
  use arrays
Question: Get 5 numbers from the user and 
remove the even numbers and 
create a new array and 
then  print the same*/
#include<stdio.h>
int main()
{
    int input[5], output[5], oddcount = 0, i;
    for(i=0; i<5; i++)
    {
        printf("Enter Number %d: ",i+1);
        scanf("%d",&input[i]);
        if(input[i]%2)
        {
            output[oddcount] = input[i];
            oddcount++;
        }
    }
    for(i=0; i<oddcount; i++)
    {
        printf("%d ",output[i]);
    }
    
}
