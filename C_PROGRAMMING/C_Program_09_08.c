/*
  C LEVEL 09 Problem 08
    Use only int variables
    Use only decimals
    Use arrays
  Question: Get 5 numbers from the user and 
            remove the odd  numbers and 
            create a new array and 
            then  print the same
*/
#include<stdio.h>
int get5numbersremoveodd(int a[],int b[]);
void printresult(int n[], int e);
int main()
{
    int input[5], output[5], evencount;
    evencount = get5numbersremoveodd(input, output);
    printresult(output,evencount);
}
void printresult(int n[],int e)
{
    for(int i = 0; i<e; i++)
    {
        printf("%d ",n[i]);
    }
}
int get5numbersremoveodd(int a[],int b[])
{
    int i, evencount = 0;
    for(i=0; i<5; i++)
    {
        printf("Enter %d Element: ",i);
        scanf("%d",&a[i]);
        if(a[i]%2)
        {
            b[evencount] = a[i];
            evencount++;
        }
    }
    return evencount;
}
