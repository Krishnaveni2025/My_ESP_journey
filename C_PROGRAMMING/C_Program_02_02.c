/* C LEVEL 02 Program 02
        Use only int variables
        Use only Decimals
        Use the following operations only
        +, -, /, *, %, ==, !=, <, >, <=, >=
        Do not use if, for, while, arrays, pointers, strings, etc.
   Question: 
        Get a number from the user and 
        check if the number is not equals to 50. 
        If yes print 1, 
        otherwise print 0.
   Example:
        Input:50    Output:0
        Input:56789 Output:1
  */
#include<stdio.h>
int main()
{
  int number;
  printf("Enter a number: ");
  scanf("%d",&number);
  //your code here
  printf("Result = %d",number!=50);
  return 0;
}
