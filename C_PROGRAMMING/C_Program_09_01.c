/*
  C LEVEL 09 Problem 01
        Use only int variables
        Use ont decimals
        Use arrays
Question: 
        Get 5 numbers from the user and print all the sum of all numbers
*/
#include<stdio.h>
void print_sum5(int a[]);
int main()
{
    int numbers[5];
    print_sum5(numbers);
}
void print_sum5(int a[])
{
    int i = 0, sum = 0;
    for(i=0;i<5;i++)
    {
        printf("Enter %d Element: ",i);
        scanf("%d",&a[i]);
        sum += a[i];
    }
    printf("%d",sum);
}
