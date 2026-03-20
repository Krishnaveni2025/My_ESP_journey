/* C LEVEL 02 Program 13
        Use only int variables
        Use only Decimals
        Use the following operations only
        +, -, /, *, %, &, ==, !=, <, >, <=, >=
        Do not use if, for, while, arrays, pointers, strings, etc.
   Question: 
        Get a three digit number from the user and 
        check if the digit 0 and digit 1 are same and 
        if digit 1 and 2 are different. 
        If yes then print 1, Otherwise print 0.
   Example:
        Input: 988    Output: 1
        Input: 567    Output: 0
  */
#include<stdio.h>
int main()
{
  int number;
  printf("Enter a three digit number: ");
  scanf("%d",&number);
  //your code here
  printf("Result = %d", ( ( (number%10) == ((number/10)%10) ) & ( ((number/10)%10) != (number/100) ) ));
  return 0;
}
