/*
  C LEVEL 09 Problem 07
        Use only int variables
        Use only decimals
        Use arrays
  Question: 
        Get 5 numbers from the user and arrange in descending order and print the same
*/
#include<stdio.h>
void get5numbers(int a[]);
void arrange_descend(int a[]);
void print_descend(int a[]);
int main()
{
    int numbers[5];
    get5numbers(numbers);
    arrange_descend(numbers);
    print_descend(numbers);
}
void print_descend(int a[])
{
    int i = 0;
    for(i = 0;i<5;i++)
    {
        printf("%d ",a[i]);
    }
}
void arrange_descend(int a[])
{
    int i, j,temp;
    for(i=0; i<5; i++)
    {
        for(j = i+1; j< 5; j++)
        {
            if(a[j]>a[i])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
}
void get5numbers(int a[])
{
    int i =0;
    for(i=0; i<5; i++)
    {
        printf("Enter %d Element: ",i);
        scanf("%d",&a[i]);
    }
}
