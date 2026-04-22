/* 
    C LEVEL 01 Problem 04
            Use only int variables
            Use only Decimals
            Use the following operations only
            +,-,/,*,%
            Do not use any other operations
   Question: 
            Get a number from the user and 
            divide the number by 6 and  
            print the result
   Example: 
            Input: 45, Output: 7
            Input: 143, Output: 23
*/
#include<stdio.h>
int divideby6(int n);
int main()
{
    int number;
    printf("Input: ");
    scanf("%d",&number);
    printf("Output: %d",divideby6(number));
}
int divideby6(int n)
{
    return n/6;
}
