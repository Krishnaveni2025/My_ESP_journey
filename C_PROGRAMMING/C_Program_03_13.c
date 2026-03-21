/* C LEVEL 03 Program 13
      Use int variables
      Use only Decimals
      Use "if/else" statements 
   Question: 
      Get a three digit number from the user and 
      check if the digit 1 and digit 0 are identical and digit 1 and digit 2 are different . 
      If yes then print "Success", otherwise "Failure".
   Example:
     Input:988 Output:"Success"
     Input:567 Output:"Failure"
*/
#include<stdio.h>
int main()
{
  int number;
  printf("Enter a three digit number: ");
  scanf("%d",&number);
  //your code here
  if((((number/10)%10)==(number%10))&(((number/10)%10)!=(number/100)))
  {
    printf("\"Success\"");
  }
  else
  {
    printf("\"Failure\"");
  }
}
