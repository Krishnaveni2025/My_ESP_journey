/* 
  C LEVEL 01 Program 10
            Use only int variables
            Use only Decimals
            Use the following operations only
            +,-,/,*,%
            Do not use any other operations
  Question: 
            Write a c program to get a three digit number from the user and 
            print the ten's digit
  Example:
            Input:456 Output:5
            Input:569 Output:6
*/
#include<stdio.h>
int tensdigit(int n);
int main()
{
    int number;
    printf("Input: ");
    scanf("%d",&number);
    printf("%d",tensdigit(number));
}
int tensdigit(int n)
{
    return ((n/10)%10);
}
