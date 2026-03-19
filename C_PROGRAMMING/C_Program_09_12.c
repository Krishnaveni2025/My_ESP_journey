/*
  C LEVEL 09 Problem 12
  Use only int variables
  Use only decimals
  use arrays
Question: Get multiple numbers from the user and 
store them in an array . 
Stop when the number is 0. 
Print the total numbers entered by the user and 
print the sum of numbers*/
#include<stdio.h>
int main()
{
    int numbers[100], i = 0, number, total = 0, sum = 0;
    while(1)
    {
        printf("Enter %d Number: ",i+1);
        scanf("%d",&number);
        if(!number)
            break;
        numbers[i] = number;
        sum += numbers[i];
        i++;
        total++;
    }
    printf("Total Numbers: %d",total);
    printf("\nSum of Numbers: %d",sum);
}
