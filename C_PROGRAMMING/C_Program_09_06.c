/*
  C LEVEL 09 Problem 06
        Use only int variables
        Use only decimals
        Use arrays
  Question: 
        Get 5 numbers from the user and arrange in ascending order and print the same
*/

#include<stdio.h>

void printaarray(int a[],int s);
void getnumbers(int a[], int s);
void arrange_ascend(int a[], int s);

int main()
{
    int size = 5;
    int numbers[size];
    getnumbers(numbers, size);
    printaarray(numbers,size);
    arrange_ascend(numbers,size);
    printaarray(numbers,size);
}
void arrange_ascend(int a[], int s)
{
    int temp;
    for(int i = 0; i<s; i++)
    {
        for(int j = i+1; j<s; j++)
        {
            if(a[j]<a[i])
            {
                temp = a[j];
                a[j] = a[i];
                a[i] = temp;
            }
        }
    }
}
void printaarray(int a[], int s)
{
    printf("\n");
    for(int i = 0; i<s; i++)
    {
        printf("%d ",a[i]);
    }
}
void getnumbers(int a[], int s)
{
    for(int i = 0; i<s; i++)
    {
        printf("Enter %d Number: ",i+1);
        scanf("%d",&a[i]);
    }
}
