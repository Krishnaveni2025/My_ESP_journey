/* C LEVEL 01 Program 23
  Question: Get a two digit number from the user and subtract 5 from that number, if the sum of the digits of the number is odd, then print the result.
Example:
Input:95 Output:95
Input:72 Output:67
*/
#include<stdio.h>
int main()
{
  int x,y;
  printf("Eneter a two - digit number: ");
  scanf("%d",&x);
  //your code here
  y = x - (5*(((x%10)+(x/10))%2));
  printf("Result = %d",y);
}
