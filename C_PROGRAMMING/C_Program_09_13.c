/*
  C LEVEL 09 Problem 13
            Use only int variables
            Use ont decimals
            Use arrays
  Question: 
            Get multiple numbers from the user and 
            store them in an array . 
            Stop when the number is 0. 
            If  numbers entered  if first and last numbers are equal, 
            print "Success" else "Failure"
  Example:
            Input: 8 1 5 4 3 6 2 7 8 0    Output: Success
            Input: 1 2 3 4 5 0            Output: Failure
*/
#include<stdio.h>
void result(int a[]);
#define MAX 50
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
    if(a[0]==a[total-1])
            printf("Success");
    else
            printf("Failure");
}
