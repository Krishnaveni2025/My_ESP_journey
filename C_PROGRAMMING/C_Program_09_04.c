/*
  C LEVEL 09 Problem 04
  Use only int variables
  Use ont decimals
  use arrays
Question: Get 5 numbers from the user and print the biggest number
*/
#include<stdio.h>
void get5numbers(int a[]);
void print_biggest(int a[]);
int main()
{
    int numbers[5];
    get5numbers(numbers);
    print_biggest(numbers);
}
void print_biggest(int a[])
{
    int i = 0, big = a[0];
    for(i=1; i<5; i++)
    {
        if(big<a[i])
                big =  a[i];
    }
    printf("%d",big);
}
void get5numbers(int a[])
{
    int i = 0;
    for(i=0; i<5; i++)
    {
        printf("Enter %d Number: ",i);
        scanf("%d",&a[i]);
    }
}
