/* C LEVEL 02 Program 03
        Use only int variables
        Use only Decimals
        Use the following operations only
        +, -, /, *, %, ==, !=, <, >, <=, >=
        Do not use if, for, while, arrays, pointers, strings, etc.
   Question: 
        Get a number from the user and 
        check if the number is less than 50. 
        If yes then print 1, 
        otherwise print 0
   Example: 
        Input: 45    Output:1
        Input: 56789 Output:0
*/
#include<stdio.h>
int main()
{
  int number;
  printf("Enter a number: ");
  scanf("%d",&number);
  //your code here
  printf("Result = %d",number<50);
  return 0;
}
