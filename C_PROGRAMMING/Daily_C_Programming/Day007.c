/*Bit Manipulation
1. Check if ith bit is set or not
#include <stdio.h>
void checkithbit(int number, int bit);
int main()
{
    int N, i;
    printf("Enter the Number: ");
    scanf("%d", &N);
    printf("\nEnter the bit position: ");
    scanf("%d", &i);
    checkithbit(N, i);
    return 0;
}
void checkithbit(int number, int bit)
{
    int mask = (1 << (bit - 1));
    if(number & mask)
        printf("\nSET");
    else
        printf("\nNOT SET");
}
        2.SET ith bit of a number.
#include<stdio.h>
int setkthbit(int n,int k);
int main()
{
    int number,bit,result;
    printf("Enter a Number: ");
    scanf("%d",&number);
    printf("Enter the bit position to set: ");
    scanf("%d",&bit);
    result = setkthbit(number,bit);
    printf("After Setting bit %d of %d the result is %d",bit,number,result);
}
int setkthbit(int n,int k)
{
    int mask = (1<<(k-1));
    return (n|mask);
}
    3. Clear ith bit of a number.
#include <stdio.h>
int clearkthbit(int n, int k);
int main()
{
    int number, bit, result;
    printf("Enter a Number: ");
    scanf("%d", &number);
    printf("Enter the bit position to set: ");
    scanf("%d", &bit);
    result = clearkthbit(number, bit);
    printf("After clearing bit %d of %d the result is %d", bit, number, result);
}
int clearkthbit(int n, int k)
{
    int mask = (1 << (k - 1));
    mask = ~mask;
    return (n & mask);
}
    4. Remove last Set bit(rigthtmost set bit) of a number.
#include<stdio.h>
int fun(unsigned int n);
int main()
{
    int number,result;
    printf("Enter a Number: ");
    scanf("%d", &number);
    result = fun(number);
    printf("After removing last SET bit of %d the result is %d", number, result);
    return 0;
}
int fun(unsigned int n)
{
    return n&(n-1);
}*/