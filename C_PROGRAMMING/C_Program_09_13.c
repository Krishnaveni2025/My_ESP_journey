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
int input[], number, total;
int main()
{
    getnumbers(input);
    if(input[0]==input[total-1])
            printf("Success");
    else
            printf("Failure");
}
void getnumbers(int a[])
{
    while(1)
    {
        printf("Enter %d Element: ",total+1);
        scanf("%d",&number);
        if(!number)
            break;
        input[total] = number;
        total++;
    }
}
