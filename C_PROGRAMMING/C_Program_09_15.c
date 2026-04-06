/*
  C LEVEL 09 Problem 15
            Use only int variables
            Use only decimals
            Use arrays
  Question: 
            Get multiple numbers from the user and store them in an array . 
            Stop when the number is 0.
            Add each numbers digit and put them in an array and 
            arrange the new array in the ascending order and 
            print the same
*/
#include<stdio.h>

void getnumbers(int a[]);
void addDigits(int a[], int b[]);
void arrange_ascend(int a[]);
void print(int a[]);
int sum(int n);
int total;

int main()
{
    int numbers[50],result[50];
    getnumbers(numbers);
    print(numbers);
    addDigits(numbers,result);
    print(result);
    arrange_ascend(result);
    print(result);
}
void arrange_ascend(int a[])
{
    int temp;
    for(int i = 0; i<total; i++)
    {
        for(int j = i+1; j<total; j++)
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
void print(int a[])
{
    printf("\n");
    for(int i = 0; i<total; i++)
    {
        printf("%d ",a[i]);
    }
}
int sum(int n)
{
    int sumofdigits = 0;
    while(n)
    {
        sumofdigits += (n%10);
        n /= 10;
    }
    return sumofdigits;
}
void addDigits(int a[], int b[])
{
    for(int i = 0; i<total; i++)
    {
        b[i] = sum(a[i]);
    }
}
void getnumbers(int a[])
{
    int number;
    while(1)
    {
        printf("Enter %d Number: ",total+1);
        scanf("%d",&number);
        if(!(number))
                break;
        a[total] = number;
        total++;
    }
}
