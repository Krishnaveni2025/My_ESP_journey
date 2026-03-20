/* C LEVEL 02 Program 06
        Use only int variables
        Use only Decimals
        Use the following operations only
        +, -, /, *, %, ==, !=, <, >, <=, >=
        Do not use if, for, while, arrays, pointers, strings, etc.
  Question: Get a number from the user and check if the number is greater than or equal to 50. If yes then print 1, Otherwise print 0.
Example:
Input: 45    Output: 0
Input: 56789 Output: 1
  */
#include<stdio.h>
int main()
{
  int x,y;
  printf("Enter a number: ");
  scanf("%d",&x);
  //your code here
  y = x>=50;
  printf("Result = %d",y);
  return 0;
}
