/* C LEVEL 02 Program 11
        Use only int variables
        Use only Decimals
        Use the following operations only
        +, -, /, *, %, ==, !=, <, >, <=, >=
        Do not use if, for, while, arrays, pointers, strings, etc.
   Question: 
        Get a two digit number from the user and 
        check if the digit 1 is less than or equal to digit 0. 
        If yes then print 1, Otherwise print 0.
   Example:
        Input: 66    Output: 1
        Input: 67    Output: 1
        Input: 98    Output: 0
  */
#include<stdio.h>
int main()
{
  int number;
  printf("Enter a two digit number: ");
  scanf("%d",&number);
  //your code here
  printf("Result = %d",( (number/10) <= (number%10) ));
  return 0;
}
