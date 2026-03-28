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
int number,total, input[500];
int getnumbers(int a[]);
int main()
{
    printf("%d",getnumbers(input));
}
int getnumbers(int a[])
{
    while(1)
    {
        printf("Enter %d Number: ",total+1);
        scanf("%d",&number);
        if(!number)
             break;
        input[total] = number;
        total++;
    }
    if(total%2)
            return input[total/2];
    else
            return ((input[total/2]+(input[(total/2)-1]))/2);
}
