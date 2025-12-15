/* C LEVEL 03 Program 07
  Question: Get a two digit number from the user and check if the digit 0 and digit 1 are identical. If yes then print "Success", otherwise "Failure".
  Example:
  Input:55 Output:"Success"
  Input:56 Output:"Failure"
*/
#include<stdio.h>
int main()
{
  int x;
  printf("Enter a two digit number: ");
  scanf("%d",&x);
  //your code here
  if(((x/10)==(x%10)))
  {
    printf("\"Success\"");
  }
  else
  {
    printf("\"Failure\"");
  }
}
