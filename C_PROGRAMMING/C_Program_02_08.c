/* C LEVEL 02 Program 08
        Use only int variables
        Use only Decimals
        Use the following operations only
        +, -, /, *, %, ==, !=, <, >, <=, >=
        Do not use if, for, while, arrays, pointers, strings, etc.
   Question: 
        Get a two digit number from the user and 
        check if the digit 1 and digit 0 are not identical . 
        If yes then print 1, 
        Otherwise print 0.
   Example:
        Input: 55    Output: 0
        Input: 56    Output: 1
  */
#include<stdio.h>
int main()
{
  int number;
  printf("Enter a two digit number: ");
  scanf("%d",&number);
  //your code here
  printf("Result = %d",((number%10)!=(number/10)));
  return 0;
}
