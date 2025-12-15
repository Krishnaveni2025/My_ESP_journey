/* C LEVEL 01 Program 21
Question: Get a number from the user and subtract 5 from that number if the number is odd, then print the result. Do not use "if".
Example:
Input:695 Output:690
Input:182 Output:182
*/
#include<stdio.h>
int main()
{
  int x,y;
  //your code here
  printf("Enter a number: ");
  scanf("%d',&x);
  y = (x - 5*(x%2));
  printf("Result = %d",y);
  return 0;
}
