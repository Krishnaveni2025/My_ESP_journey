/*
  C LEVEL 09 Problem 08
    Use only int variables
    Use only decimals
    Use arrays
  Question: Get 5 numbers from the user and 
            remove the odd  numbers and 
            create a new array and 
            then  print the same
  Example:
        Input:  15 14 13 12 11
        Output: 14 12
*/
#include<stdio.h>

void getnumbers(int a[], int s);
void print_array(int a[], int s);
int removeOddNumbers(int a[], int b[], int s);

int main()
{
    int size = 5, evencount;
    int numbers[size], evenNumbers[size];
    getnumbers(numbers,size);
    print_array(numbers, size);
    evencount = removeOddNumbers(numbers, evenNumbers, size);
    print_array(evenNumbers, evencount);
}
int removeOddNumbers(int a[], int b[], int s)
{
    int ec = 0;
    for(int i = 0; i<s; i++)
    {
        if(!(a[i]%2))
        {
            b[ec] = a[i];
            ec++;
        }  
    }
    return ec;
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
