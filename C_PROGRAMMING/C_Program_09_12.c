/*
  C LEVEL 09 Problem 12
  Use only int variables
  Use only decimals
  use arrays
Question: Get multiple numbers from the user and store them in an array . Stop when the number is 0. Print the total numbers entered by the user and print the sum of numbers*/
#include <stdio.h>
int main()
{
    int input[200],num,i=0,count=0,sum = 0;
    while(1)
    {
        printf("Enter %d Element: ",i);
        scanf("%d",&num);
        input[i]=num;
        i++;
        count++;
        if(num==0)
            break;
    }
    printf("Entered Array Elements are:\n");
    for(i=0; i<count; i++)
    {
        printf("%d ",input[i]);
       sum += input[i];
    }
    printf("\nSum of array Elements: %d",sum);
    return 0;
}
