/* C LEVEL 01 Problem 02
Question: 
Get a number from the user and  
subtract 5 from that number and  
print the result
Example: 
Input: 45, Output: 40
Input:56789, Output: 56784
*/
#include<stdio.h>
int main()
{
  int number;
  printf("Input: ");
  scanf("%d",&number);
  printf("Output: %d",number-5);
  return 0;
}
