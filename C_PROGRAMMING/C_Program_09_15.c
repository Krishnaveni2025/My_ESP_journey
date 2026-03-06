/*
  C LEVEL 09 Problem 15
  Use only int variables
  Use ont decimals
  use arrays
Question: Get multiple numbers from the user and store them in an array . Stop when the number is 0. 
Add each numbers digit and put them in an array and arrange the new array in the ascending order and print the same*/
#include<stdio.h>
int main()
{
    int input[200], i = 0, count = 0, number,j=0, temp;
    while(1)
    {
        printf("Enter %d Element: ",i);
        scanf("%d",&number);
        if(number)
        {
            input[i] = number;
            i++;
            count++;
        }
        else
        {
            break;
        }
        
    }
    printf("\nNew Array: ");
    for(i=0; i<count; i++)
    {
        printf("%d ",input[i]);
    }
    for(i=0; i<count; i++)
    {
        for(j=i+1; j<count; j++)
        {
            if(input[i]>input[j])
            {
                temp = input[j];
                input[j] = input[i];
                input[i] = temp;
            }
        }
    }
    printf("\nArranged Array in ascending order: ");
    for(i=0; i<count; i++)
    {
        printf("%d ",input[i]);
    }
}
