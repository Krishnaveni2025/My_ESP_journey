/*
  C LEVEL 09 Problem 11
            Use only int variables
            Use only decimals
            Use arrays
  Question: 
            Get 5 numbers from the user and 
            reverse each number and 
            create a new array and then  
            print the sum of all numbers in the new array 
  Example:
            Input:  7 7 7 7 7
            Output: 5 5 5 5 5 (14  14  14  14  14)
*/
#include<stdio.h>
void getnumbers(int a[], int s);
void reverse(int a[], int b[], int s);
void print_array(int a[], int s);
int getbitwidth(int n);
int sum(int a);
int main()
{
    int size = 5;
    int numbers[size], result[size];
    getnumbers(numbers, size);
    print_array(numbers, size);
    reverse(numbers, result, size);
    print_array(result, size);
}
int sum(int a)
{
    int sum = 0;
    while(a)
    {
        sum += (a%10);
        a /= 10;
    }
    return sum;
}
int getbitwidth(int n)
{
    int size = 1;
    while(n)
    {
        size++;
        n >>= 1;
    }
    return size;
}
void reverse(int a[], int b[], int s)
{
    int rev , bits;
     int num;
    for( int i = 0; i<s; i++)
    {
        rev = 0;
        num = a[i];
        bits = getbitwidth(num);
        for(int j = 0; j<bits; j++)
        {
            rev<<=1;
            if(num&1)
                    rev |= 1;
            num >>= 1;
        }
        b[i] = sum(rev);
        
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
void print_array(int a[], int s)
{
    printf("\n");
    for(int i = 0; i<s; i++)
    {
        printf("%d ",a[i]);
    }
}
