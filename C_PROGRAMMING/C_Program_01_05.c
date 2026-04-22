/* 
 C LEVEL 01 Problem 05
            Use only int variables
            Use only Decimals
            Use the following operations only
            +,-,/,*,%
            Do not use any other operations
 Question: 
            Get a number from the user and 
            the divide number by 8 and  
            print the remainder
 Example: 
           Input: 45, Output: 5
           Input: 143, Output: 7
*/
#include<stdio.h>
int divideby8(int n);
int main()
{
    int number;
    printf("Input: ");
    scanf("%d",&number);
    printf("Output: %d",divideby8(number));
}
int divideby8(int n)
{
    return n%8;
}
