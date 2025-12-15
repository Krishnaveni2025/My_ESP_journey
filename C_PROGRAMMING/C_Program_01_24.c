/* C LEVEL 01 Program 24
  Question: Get a three digit number from the user and subtract 5 from that number if one's digit number and 100's digit number are odd, then print the result. Do not use "if"
Example:
Input:795  Output:790
Input:372  Output:372
*/
#include<stdio.h>
int main()
{
  int x,y;
  printf("Enter a three digit number: ");
  scanf("%d",&x);
  //your code here
  y = x - (5*((x%10)%2)*((x/100)%2));
  printf("Result = %d",y);
  return 0;
}
