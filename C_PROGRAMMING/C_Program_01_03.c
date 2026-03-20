/* C LEVEL 01 Problem 03
        Use only int variables
        Use only Decimals
        Use the following operations only
        +,-,/,*,%
        Do not use any other operations
Question: 
    Get a number from the user and  
    multiply 3 to that number and  
    print the result
Example: 
    Input: 45, Output: 135
    Input: 1200, Output: 3600
*/
#include<stdio.h>
int main()
{
  int number;
  printf("Input: ");
  scanf("%d",&number);
  printf("Output: %d",number*3);
  return 0;
}
