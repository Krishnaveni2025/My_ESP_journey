/* C LEVEL 01 Program 11
  Question: Write a program to get a two digit number from the user and print it's sum of digits
Example:
Input: Output:
Input: output:
*/
#include<stdio.h>
int main()
{
  int x,y;
  //your code here
  printf("Enter a two - digit number: ");
  scanf("%d",&x);
  y = (x%10)+(x/10);
  printd("Result = %d",y);
  return 0;
}
