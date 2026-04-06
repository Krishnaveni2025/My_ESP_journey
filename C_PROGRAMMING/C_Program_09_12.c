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
*/
#include<stdio.h>

void getnumbers(int a[]);
void print(int n);
int total , sum;

int main()
{
    int numbers[50];
    getnumbers(numbers);
    print(total);
    print(sum);
}
void getnumbers(int a[])
{
    int number;
    while(1)
    {
        printf("Enter %d Number: ",total+1);
        scanf("%d",&number);
        if(!(number))
                break;
        a[total] = number;
        sum += a[total];
        total++;
    }
}
void print(int n)
{
    printf("\n%d",n);
}
