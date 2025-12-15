/* C LEVEL 01 Program 25
  Question: Get a three digit number from the user. If the sum of the digits is less than 10, print the same, otherwise add the digits of sum. 
  If the sum of the digits is less than 10 then print the sum, otherwise add the digits of the sum, and print the sum.
  Note: the result of the sum should always be single digit only
Example:
Input:123 Output:6
Input:149 Output:5(14,5)
Input:991 Output:1(19;10;1)
*/
#include<stdio.h>
int main()
{
  int x,y;
  printf("Enter a three digit number: ");
  scanf("%d",&x);
  //your code here
  int sum = ((x/100)+(x%10)+((x/10)%10));
  y = sum * (1 - sum/10) + (sum/10) * (sum/10 + sum%10);
  printf("%d",y);
  return 0;
}
