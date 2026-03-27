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
int main()
{
    int number, numbers[100], total = 0, sum = 0, i = 0;
    while(1)
    {
        printf("Enter %d Number: ",i+1);
        scanf("%d",&number);
        if(!number)
        {
            break;
        }
        numbers[i] = number;
        total++;
        sum += numbers[i];
        i++;
    }
    printf("%d",total);
    printf("\n%d",sum);
}
