/* 
 C LEVEL 01 Program 07
            Use only int variables
            Use only Decimals
            Use the following operations only
            +,-,/,*,%
            Do not use any other operations
 Question: 
            Write a program to get a two - digit number from the user and 
            print the ten's digit
 Example: 
            Input:45   Output:4
            Input:56   Output:5
  */
#include<stdio.h>
int tensdisgit(int n);
int main()
{
    int number;
    printf("Input: ");
    scanf("%d",&number);
    printf("Output: %d",tensdisgit(number));
}
int tensdisgit(int n)
{
    return n/10;
}
