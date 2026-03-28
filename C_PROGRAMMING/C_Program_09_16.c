/*
  C LEVEL 09 Problem 16
    Use only int variables
    Use only decimals
    Use arrays
  Question: 
    Add two integer arrays upto 50 digits and store the result in an 51 digit array
*/
#include<stdio.h>
int integer1[50], integer2[50], result[51];
int i, j, total = 50;
void getinteger(int a[], int s);
void printarray(int a[], int s);
void addintegers(int a[], int b[]);
int main()
{
    getinteger(integer1, total);
    getinteger(integer2, total);
    printarray(integer1, total);
    printarray(integer2, total);
    addintegers(integer1, integer2);
    printarray(result, 51);
}
void addintegers(int a[], int b[])
{
    for(i=49; i>=0; i--)
    {
        result[i+1] = a[i] + b[i];
    }
}
void getinteger(int a[], int s)
{
    printf("\n");
    for(i=0; i<s; i++)
    {
        printf("Enter %d Number: ",i+1);
        scanf("%d",&a[i]);
    }
}
void printarray(int a[], int s)
{
    printf("\n");
    for(i=0; i<s; i++)
    {
        printf("%d ",a[i]);
    }
}
