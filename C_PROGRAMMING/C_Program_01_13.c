/* C LEVEL 01 Program 13
  Question: Write a program to get a two-digit number from the user and print the reverse of the number
Example:
Input:56 Output:65
Input:59 Output:95
*/
#include<stdio.h>
int main()
{
  int x,y;
  //your code here
  printf("Enter a three digit number: ");
  scanf("%d",&x);
  y = ((x%10)*10)+(x/10);
  printf("Result = %d",y);
  return 0;
}
