/*
  C LEVEL 09 Problem 07
        Use only int variables
        Use only decimals
        Use arrays
  Question: 
        Get 5 numbers from the user and arrange in descending order and print the same
*/
#include<stdio.h>

void get5numbers(int a[], int s);
void arrange_descend(int a[], int s);
void print_array(int a[], int s);
int main()
{
    int size = 5;
    int numbers[size];
    get5numbers(numbers, size);
    print_array(numbers, size);
    arrange_descend(numbers, size);
    print_array(numbers, size);
}
void print_array(int a[], int s)
{
    printf("\n");
    int i = 0;
    for(i = 0;i<s;i++)
    {
        printf("%d ",a[i]);
    }
}
void arrange_descend(int a[], int s)
{
    int i, j,temp;
    for(i=0; i<s; i++)
    {
        for(j = i+1; j< s; j++)
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
void get5numbers(int a[], int s)
{
    int i =0;
    for(i=0; i<s; i++)
    {
        printf("Enter %d Element: ",i+1);
        scanf("%d",&a[i]);
    }
}
