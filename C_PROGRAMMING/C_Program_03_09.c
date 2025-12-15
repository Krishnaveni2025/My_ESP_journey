/* C LEVEL 03 Program 09
  Question: Get a two digit number from the user and check if the digit 0 is less than digit 1. If yes then print "Success", otherwise "Failure".
  Example:
  Input:54 Output:"Success"
  Input:45 Output:"Failure"
*/
#include<stdio.h>
int main()
{
  int x;
  printf("Enter a two digit number: ");
  scanf("%d",&x);
  //your code here
  if(((x%10)<(x/10)))
  {
    printf("\"Success\"");
  }
  else
  {
    printf("\"Failure\"");
  }
}
