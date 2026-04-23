/* 
   C LEVEL 03 Program 05
            Use int variables
            Use only Decimals
            Use "if/else" statements 
   Question: 
            Get a number from the user and 
            check if the number is less than or equal to 50. 
            If yes then print "Success", otherwise print "Failure".
   Example:
            Input:56789    Output: Failure
            Input:45       Output: Success
*/
#include<stdio.h>
int islessthanequalto50(int n);
int main()
{
    int number;
    printf("Input: ");
    scanf("%d",&number);
    if(islessthanequalto50(number))
            printf("Output: Success");
    else
            printf("Output: Failure");
}
int islessthanequalto50(int n)
{
    if(n<=50)   return 1;
    return 0;
}
