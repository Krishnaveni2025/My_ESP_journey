/* C LEVEL 11 Problem 01
  Use Pointers
Question: Get a number from the user and print the same. Change the the value without directly changing it and print the same
*/
#include <stdio.h>

int main()
{
    int *number1, *number2, temp;
    printf("Enter Two Numbers:");
    scanf("%d %d",number1,number2);
    temp = *number1;
    number1 = number2;
    number2 = &temp;
    printf("number1 = %d number2 = %d",*number1,*number2);
    return 0;
}
