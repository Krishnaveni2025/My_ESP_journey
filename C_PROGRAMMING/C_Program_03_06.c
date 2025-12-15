/* C LEVEL 03 Program 06
  Question: Get a number from the user and check if the number is greater than or equal to 50. If yes then print "Success", otherwise print "Failure".
Example:
Input:45    Output: Failure
Input:56789 Output: Success
*/
#include<stdio.h>
int main()
{
  int x,y;
  printf("Enter a number: ");
  scanf("%d",&x);
  //your code here
  if(x>=50)
  {
    printf("Success");
  }
  else
  {
    printf("Failure");
  }
  return 0;
}
