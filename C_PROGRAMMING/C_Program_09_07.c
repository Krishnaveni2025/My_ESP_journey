/*
  C LEVEL 09 Problem 07
            Use only int variables
            Use only decimals
            Use arrays
  Question: 
            Get 5 numbers from the user and arrange in descending order and print the same
*/
#include<stdio.h>
#define size 5
void print(int a[]);
void getnumbers(int a[]);
void arrange_descend(int a[]);
int main()
{
    int numbers[size];
    getnumbers(numbers);
    arrange_descend(numbers);
    print(numbers);
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
void arrange_descend(int a[])
{
    int i, j, temp;
    for(i = 0; i<size; i++)
    {
        for(j = i+1; j<size; j++)
        {
            if(a[i]<a[j])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
}
void print(int a[])
{
    int i;
    for(i = 0; i<size; i++)
    {
        printf("%d ",a[i]);
    }
}
