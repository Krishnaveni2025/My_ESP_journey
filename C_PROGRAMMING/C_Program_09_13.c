/*
  C LEVEL 09 Problem 13
  Use only int variables
  Use ont decimals
  use arrays
Question: Get multiple numbers from the user and store them in an array . Stop when the number is 0. If  numbers entered  if first and last numbers are equal, print "Success" else "Failure"*/
#include<stdio.h>
int main()
{
    int input[200],i=0,number,count=0;
    while(1)
    {
        printf("Enter %d Element: ",i);
        scanf("%d",&number);
        input[i] = number;
        i++;
        count++;
        if(!(number))
            break;
    }
    printf("Entered Array :\n");
    for(i=0; i<count; i++)
    {
        printf("%d ",input[i]);
    }
    if(input[0]==input[count-2])
    {
        printf("\nSuccess");
    }
    else
    {
        printf("\nFailure");
    }
}
