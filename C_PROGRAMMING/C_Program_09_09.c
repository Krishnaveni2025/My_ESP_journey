/*
  C LEVEL 09 Problem 09
    Use only int variables
    Use only decimals
    Use arrays
  Question: Get 5 numbers from the user and 
            remove the even  numbers and 
            create a new array and 
            then  print the same
*/
#include<stdio.h>
int get5numbersremoveeven(int a[],int b[]);
void printresult(int n[], int o);
int main()
{
    int input[5], output[5], oddcount;
    oddcount = get5numbersremoveeven(input, output);
    printresult(output,oddcount);
}
void printresult(int n[],int o)
{
    for(int i = 0; i<o; i++)
    {
        printf("%d ",n[i]);
    }
}
int get5numbersremoveeven(int a[],int b[])
{
    int i, oddcount = 0;
    for(i=0; i<5; i++)
    {
        printf("Enter %d Element: ",i);
        scanf("%d",&a[i]);
        if(a[i]%2)
        {
            b[oddcount] = a[i];
            oddcount++;
        }
    }
    return oddcount;
}
