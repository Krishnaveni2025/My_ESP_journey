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
int total, all_sum, input[], i;
int main()
{
    getnumbers(input);
    printf("\nTotal = %d, Sum = %d",total,all_sum);
}
void getnumbers(int a[])
{
    int number;
    while(1)
    {
        printf("Enter %d Element: ",total+1);
        scanf("%d",&number);
        if(!number)
            break;
        a[total] = number;
        all_sum += a[total];
        total++;
    }
}
