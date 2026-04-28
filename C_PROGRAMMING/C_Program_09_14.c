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
  Example:
            Input: 1 2 3 4 5  0     Output: 3
            Input: 10 20 30 40 0    Output: 25
*/
#include<stdio.h>
#define MAX 50
void result(int a[]);
int main()
{
    int numbers[MAX];
    result(numbers);
}
void result(int a[])
{
    int number, total = 0;
    printf("Input: ");
    while(1)
    {
        scanf("%d",&number);
        if(!(number)) break;
        a[total] = number;
        total++;
    }
    printf("Output: ");
    if(total%2)
    {
        printf("%d",a[total/2]);
    }
    else
    {
        printf("%d",((a[total/2])+(a[(total/2)-1]))/2);
    }
}
