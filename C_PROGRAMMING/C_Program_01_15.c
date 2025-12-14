/* C LEVEL 01 Program 15
  Question: Write a program to get a four number from the user and only reverse the first two digits of the number then print the number
Example:
Input:9561 Output:9516
Input:3859 Output:3895
*/
#include<stdio.h>
int main()
{
  int x,y;
  //your code here
  printf("Enter a four digit number: ");
  scanf("%d",&x);
  y = ((x/100)*100)+((x%10)*10)+((x/10)%10);
  printf("Result = %d",y);
  return 0;
}
