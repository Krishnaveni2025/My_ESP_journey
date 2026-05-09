/*
   C LEVEL 11 Problem 02
                Use Pointers
   Question: 
                Pass an integer array to a function and 
                increment each array element in the function
*/
#include<stdio.h>
#define size 5
void increment(int a[], int s);
void print(int a[], int s);

int main()
{
    int array[size];
    for(int i = 0; i<size; i++)
    {
        scanf("%d",&array[i]);
    }
    increment(array,size);
    print(array, size);
}
void print(int a[], int s)
{
    for(int i = 0; i<size; i++)
    {
        printf("%d ",a[i]);
    }
}
void increment(int a[], int s)
{
    for(int i = 0; i<size; i++)
    {
        a[i] += 1;
    }
}
