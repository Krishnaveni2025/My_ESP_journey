/*    
 C LEVEL 01 Problem 06
           Use only int variables
           Use only Decimals
           Use the following operations only
           +,-,/,*,%
           Do not use any other operations
 Question: 
           Get a two-digit number from the user and print the ones digit
 Example: 
           Input: 45  Output: 5
           Input: 56  Output: 6
  */
#include<stdio.h>
int ones(int n);
int main()
{
    int number;
    printf("Input: ");
    scanf("%d",&number);
    printf("Output: %d",ones(number));
}
int ones(int n)
{
    return n%10;
}
