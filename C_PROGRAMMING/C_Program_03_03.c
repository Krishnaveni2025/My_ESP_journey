/* 
   C LEVEL 03 Program 03
            Use int variables
            Use only Decimals
            Use "if/else" statements 
   Question: 
            Get a number from the user and 
            check if the number is less than 50. 
            If yes then print "Success", otherwise print "Failure".
   Example:
            Input:56789    Output: Failure
            Input:45       Output: Success
*/
#include<stdio.h>
int islessthan50(int n);
int main()
{
    int number;
    printf("Input: ");
    scanf("%d",&number);
    if(islessthan50(number))
            printf("Output: Success");
    else
            printf("Output: Failure");
}
int islessthan50(int n)
{
    if(n<50) return 1;
    return 0;
}
