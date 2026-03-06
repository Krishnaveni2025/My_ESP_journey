/*
  C LEVEL 09 Problem 14
  Use only int variables
  Use ont decimals
  use arrays
Question: Get multiple numbers from the user and store them in an array . Stop when the number is 0. 
If total number is odd then print middle number, otherwise print the average of middle two numbers */

#include<stdio.h>
int main()
{
    int input[300],i=0,number,count=0,avg=0;
    while(1)
    {
        printf("Enter %d Element: ",i);
        scanf("%d",&number);
        input[i] = number;
        i++;
        count++;
        if(!number)
            break;
    }
    printf("Entered Array:\n");
    for(i=0; i<count; i++)
    {
        printf("%d ",input[i]);
        avg += input[i];
    }
    count--;
    if(count%2)
    {
        int middle = count/2;
        printf("\nMiddle = %d",input[middle]);
    }
    else
    {
        avg /= count;
        printf("\nAverage = %d",avg);
    }
}
