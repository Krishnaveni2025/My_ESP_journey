/* C LEVEL 11 Problem 01
            Use Pointers
   Question: 
            Get a number from the user and print the same. 
            Change the the value without directly 
            changing it and print the same
*/
#include<stdio.h>
int main()
{
    int *number, value;
    printf("Enter Number: ");
    scanf("%d",number);
    number = &value;
    value = 10;
    printf("%d",*number);
}
