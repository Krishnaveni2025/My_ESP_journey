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
*/
#include <stdio.h>
void get5numbers(int a[]);
int reverse(int a[], int b[]);
int getbitwidth(int n);
int main()
{
    int input[5], output[5];
    get5numbers(input);
    printf("\n%d",reverse(input, output));
}
int reverse(int a[], int b[])
{
    int rev =0, bit, sum = 0;
    unsigned int r;
    for(int i = 0; i<5; i++)
    {
        rev = 0;
        r = (unsigned int)a[i];
        bit = getbitwidth(a[i]);
        for(int j = 0; j<bit; j++)
        {
            rev <<= 1;
            if(r&1)
                 rev |= 1;
            r>>=1;
        }
        b[i] = (int)rev;
        printf("%d->%d ",a[i],b[i]);
        sum += b[i];
    }
    return sum;
}
int getbitwidth(int n)
{
    int count = 1;
    while(n)
    {
        count++;
        n>>=1;
    }
    return count;
}
void get5numbers(int a[])
{
    for(int i = 0; i<5; i++)
    {
        printf("Enter %d Number: ",i+1);
        scanf("%d",&a[i]);
    }
}
