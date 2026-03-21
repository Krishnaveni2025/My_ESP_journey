/* C LEVEL 03 Program 14
      Use int variables
      Use only Decimals
      Use "if/else" statements 
   Question: 
      Get a four digit number from the user and 
      check if the first two digits and last two digits are same. 
      If yes then print "Success", otherwise "Failure".
   Example:
      Input:1919 Output:"Success"
      Input:6567 Output:"Failure"
*/
#include<stdio.h>
int main()
{
  int number;
  printf("Enter a three digit number: ");
  scanf("%d",&number);
  //your code here
  if((number/100)==(number%100))
  {
    printf("\"Success\"");
  }
  else
  {
    printf("\"Failure\"");
  }
}
