/*
  C LEVEL 09 Problem 14
            Use only int variables
            Use only decimals
            Use arrays
  Question: 
            Get multiple numbers from the user and store them in an array . 
            Stop when the number is 0. 
            If total number is odd then print middle number, 
            otherwise print the average of middle two numbers 
*/
#include<stdio.h>

void getnumbers(int a[]);
int total;
int main()
{
    int numbers[50];
    getnumbers(numbers);
    if(total%2)
            printf("Total number is odd\nMiddle = %d",numbers[total/2]);
    else
            printf("Total number is Even\nAverage = %d",((numbers[total/2])+(numbers[(total/2)-1]))/2);
}
void getnumbers(int a[])
{
    int number;
    while(1)
    {
        printf("Enter %d Number: ",total+1);
        scanf("%d",&number);
        if(!number)
                break;
        a[total] = number;
        total++;
    }
}
