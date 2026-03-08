/* C LEVEL 10 Problem 02
  Don't use structures
  Question: Get a single number and print it's ASCII value
*/
#include <stdio.h>
int main()
{
    int number;
    printf("Enter Single Number: ");
    scanf("%d",&number);
    printf("ASCII Value: %d",number+48);//ACII in decimal of numbers start with 0->48
    return 0;
}
