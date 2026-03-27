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
int main()
{
    int numbers[100], number, i=0, total = 0;
    while(1)
    {
        printf("Enter %d Element: ",i+1);
        scanf("%d",&number);
        if(!number)
                break;
        numbers[i] = number;
        total++;
        i++;
    }
    if(numbers[0]==numbers[total-1])
        printf("Success");
    else
        printf("Failure");
}
