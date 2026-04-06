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
*/
#include<stdio.h>

void getnumbers(int a[]);
int equal(int f, int l);
int total;

int main()
{
    int numbers[50];
    getnumbers(numbers);
    int first = numbers[0];
    int last = numbers[total-1];
    if(equal(first,last))
            printf("Success");
    else
            printf("Failure");
}
int equal(int f, int l)
{
    if(f==l)
            return 1;
    return 0;
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
