/* C LEVEL 03 Program 14
  Question: Get a four digit number from the user and check if the first two digits and last two digits are same. If yes then print "Success", otherwise "Failure".
  Example:
  Input:1919 Output:"Success"
  Input:6567 Output:"Failure"
*/
#include<stdio.h>
int main()
{
  int x;
  printf("Enter a three digit number: ");
  scanf("%d",&x);
  //your code here
  if((x/100)==(x%100))
  {
    printf("\"Success\"");
  }
  else
  {
    printf("\"Failure\"");
  }
}
