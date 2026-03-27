/*
  C LEVEL 09 Problem 14
    Use only int variables
    Use only decimals
    Use arrays
  Question: 
    Get multiple numbers from the user and store them in an array . 
    Stop when the number is 0. 
    If total number is odd then print middle number, 
    otherwise print the average of middle two numbers */
#include<stdio.h>
int main()
{
    int numbers[100], i = 0, number, total = 0,middle, average = 0;
    while(1)
    {
        printf("Enter %d Number: ",i+1);
        scanf("%d",&number);
        if(!number)
            break;
        numbers[i] = number;
        i++;
        total++;
    }
    middle = total/2;
    if(total%2)
    {
        printf("Middle = %d",numbers[middle]);
    }
    else
    {
        average = ((numbers[middle])+(numbers[middle-1]));
        average /= 2;
        printf("Average = %d",average);
    }
}
