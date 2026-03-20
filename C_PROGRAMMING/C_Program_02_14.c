/* C LEVEL 02 Program 14
        Use only int variables
        Use only Decimals
        Use the following operations only
        +, -, /, *, %, ==, !=, <, >, <=, >=
        Do not use if, for, while, arrays, pointers, strings, etc.
  Question: 
        Get a four digit number from the user and 
        check if first two digits and last two digits are same. 
        If yes then print 1, Otherwise print 0.
  Example:
        Input: 1919    Output: 1
        Input: 6567    Output: 0
  */
#include<stdio.h>
int main()
{
  int number;
  printf("Enter a four digit number: ");
  scanf("%d",&number);
  //your code here
  printf("Result = %d",((number%100) == (number/100)));
  return 0;
}
