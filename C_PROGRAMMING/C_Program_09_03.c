/*
  C LEVEL 09 Problem 03
          Use only int variables
          Use only decimals
          Use arrays
  Question: 
          Get 5 numbers from the user and print the smallest number
*/
#include<stdio.h>

void get5numbers(int a[]);
int findsmall(int a[],int s);
void print(int s);

int main()
{
    int number[5], small;
    get5numbers(number);
    small = findsmall(number, small);
    print(small);
}
int findsmall(int a[], int s)
{
    s = a[0];
    for(int j = 1; j<5; j++)
    {
        if(s>a[j])
                s = a[j];
    }
    return s;
}
void get5numbers(int a[])
{
    for(int i = 0; i<5; i++)
    {
        printf("Enter %d Number: ",i+1);
        scanf("%d",&a[i]);
    }
}
void print(int s)
{
    printf("Smallest Number: %d",s);
}
