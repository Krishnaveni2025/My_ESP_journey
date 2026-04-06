/*
  C LEVEL 09 Problem 09
            Use only int variables
            Use only decimals
            Use arrays
  Question: Get 5 numbers from the user and 
            remove the even numbers and 
            create a new array and 
            then  print the same
  Example:
            Input:  15 14 13 12 11
            Output: 15 13 11
*/
#include<stdio.h>

void getnumbers(int a[], int s);
void print_array(int a[], int s);
int removeEvenNumbers(int a[], int b[], int s);

int main()
{
    int size = 5, oddcount;
    int numbers[size], oddNumbers[size];
    getnumbers(numbers,size);
    print_array(numbers, size);
    oddcount = removeEvenNumbers(numbers, oddNumbers, size);
    print_array(oddNumbers, oddcount);
}
int removeEvenNumbers(int a[], int b[], int s)
{
    int oc = 0;
    for(int i = 0; i<s; i++)
    {
        if(a[i]%2)
        {
            b[oc] = a[i];
            oc++;
        }  
    }
    return oc;
}
void print_array(int a[], int s)
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
