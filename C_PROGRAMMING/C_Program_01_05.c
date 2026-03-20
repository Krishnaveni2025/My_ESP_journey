/* C LEVEL 01 Problem 05
Question: 
    Get a number from the user and 
    the number by 8 and  
    print the remainder
Example: 
    Input: 45, Output: 5
    Input: 143, Output: 7
*/
#include<stdio.h>
int main()
{
  int number;
  printf("Input: ");
  scanf("%d",&number);
  printf("Output: %d",number%8);
  return 0;
}
