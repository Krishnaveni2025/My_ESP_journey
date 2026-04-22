/* 
    C LEVEL 01 Problem 01
            Use only int variables
            Use only Decimals
            Use the following operations only
            +,-,/,*,%
            Do not use any other operations
   Question: 
            Get a number from the user and 
            add 2 to that number and  
            print the result
   Example: 
            Input: 45, Output: 47
            Input:56789, Output: 56791
*/
#include<stdio.h>
int add2(int n);
int main()
{
    int number;
    printf("Input: ")
    scanf("%d",&number);
    printf("Output: %d",add2(number));
}
int add2(int n)
{
    return n+2;
}
