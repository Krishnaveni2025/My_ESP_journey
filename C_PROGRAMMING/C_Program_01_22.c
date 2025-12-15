/* C LEVEL 01 Program 22
  Question: Get a number from the user and subtract 5 from that number if the number's ten's digit position is odd then print the result. Do not use "if"
Example:
Input:685   Output:685
Input:89172 Output:89167
*/
#include<stdio.h.
int main()
{
  int x,y;
  //your code here
  printf("Enter a number: ");
  scanf("%d",&x);
  y = x - 5*(((x/10)%10)%2);
  printf("Result = %d", y);
  return 0;
}
