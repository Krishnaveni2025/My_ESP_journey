/*
  C LEVEL 09 Problem 04
          Use only int variables
          Use only decimals
          Use arrays
  Question: 
          Get 5 numbers from the user and print the biggest number
*/
#include<stdio.h>

void get5numbers(int a[]);
int findbigg(int a[],int b);
void print(int b);

int main()
{
    int number[5], biggest;
    get5numbers(number);
    biggest = findbigg(number, biggest);
    print(biggest);
}
int findbigg(int a[], int b)
{
    b = a[0];
    for(int j = 1; j<5; j++)
    {
        if(b<a[j])
                b = a[j];
    }
    return b;
}
void get5numbers(int a[])
{
    for(int i = 0; i<5; i++)
    {
        printf("Enter %d Number: ",i+1);
        scanf("%d",&a[i]);
    }
}
void print(int b)
{
    printf("Biggest Number: %d",b);
}
