/*
  C LEVEL 09 Problem 12
            Use only int variables
            Use only decimals
            Use arrays
  Question: 
            Get multiple numbers from the user and 
            store them in an array . 
            Stop when the number is 0. 
            Print the total numbers entered by the user and 
            print the sum of numbers
  Answer:
            Input: 1 2 3 4 5 0
            Total Number: 5
            Sum of all Numbers: 15
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
    int number, total = 0, sum = 0;
    printf("Input: ");
    while(1)
    {
        scanf("%d",&number);
        if(!(number))
                break;
        a[total] = number;
        sum += a[total];
        total++;
    }
    printf("Total Number: %d\nSum of all Numbers: %d",total,sum);
}
