/* 
   C LEVEL 03 Program 01
            Use int variables
            Use only Decimals
            Use "if/else" statements 
   Question: 
            Get a number from the user and 
            check if the number is equals to 50. 
            If yes then print "Success", otherwise print "Failure".
   Example:
            Input:50    Output: Success
            Input:56789 Output: Failure
*/
#include<stdio.h>
int main()
{
  int number;
  printf("Enter a number: ");
  scanf("%d",&number);
  //your code here
  if(number==50)
  {
    printf("Success");
  }
  else
  {
    printf("Failure");
  }
}
