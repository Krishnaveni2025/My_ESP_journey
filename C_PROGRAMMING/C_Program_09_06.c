/*
  C LEVEL 09 Problem 06
            Use only int variables
            Use only decimals
            Use arrays
  Question: 
            Get 5 numbers from the user and arrange in ascending order and print the same
*/
#include<stdio.h>
#define size 5
void getnumbers(int a[]);
void arrange_descend(int a[]);
void print(int a[]);
int main()
{
    int numbers[size];
    getnumbers(numbers);
    arrange_descend(numbers);
    print(numbers);
}
void print(int a[])
{
    int i;
    for(i = 0; i<size; i++)
    {
        printf("%d ",a[i]);
    }
}
void arrange_descend(int a[])
{
    int i, j, temp;
    for(i = 0; i<size; i++)
    {
        for(j = i+1; j<size; j++)
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
void getnumbers(int a[])
{
    int i;
    for(i = 0; i<size; i++)
    {
        printf("Enter %d Number: ",i+1);
        scanf("%d",&a[i]);
    }
}
