/*
  C LEVEL 09 Problem 03
          Use only int variables
          Use ont decimals
          Use arrays
  Question: 
          Get 5 numbers from the user and print the smallest number
*/
#include<stdio.h>
void print_small_number(int a[]);
int main()
{
    int numbers[5];
    print_small_number(numbers);
}
void print_small_number(int a[])
{
    int small,i;
    for(i=0; i<5; i++)
    {
        printf("Enter %d Number:",i);
        scanf("%d",&a[i]);
    }
    small = a[0];
    for(i=1; i<5; i++)
    {
        if(small>a[i])
                small = a[i];
    }
    printf("%d",small);
}
