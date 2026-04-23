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
int is50(int n);
int main()
{
    int number;
    printf("Input: ");
    scanf("%d",&number);
    if(is50(number))
            printf("Output: Success");
    else
            printf("Output: Failure");
}
int is50(int n)
{
    if(n==50)
            return 1;
    return 0;
}
