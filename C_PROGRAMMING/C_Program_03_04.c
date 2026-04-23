/* 
   C LEVEL 03 Program 04
            Use int variables
            Use only Decimals
            Use "if/else" statements 
   Question: 
            Get a number from the user and 
            check if the number is greater than 50. 
            If yes then print "Success", otherwise print "Failure".
   Example:
            Input:45          Output: Failure
            Input:56789       Output: Success
*/
#include<stdio.h>
int isgreaterthan50(int n);
int main()
{
    int number;
    printf("Input: ");
    scanf("%d",&number);
    if(isgreaterthan50(number))
                printf("Output: Success");
    else
                printf("Output: Failure");
}
int isgreaterthan50(int n)
{
    if(n>50) return 1;
    return 0;
}
