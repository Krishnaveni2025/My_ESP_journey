/* 
   C LEVEL 03 Program 14
            Use int variables
            Use only Decimals
            Use "if/else" statements 
   Question: 
            Get a four digit number from the user and 
            check if the first two digits and last two digits are same. 
            If yes then print "Success", otherwise "Failure".
   Example:
            Input:1919 Output: Success
            Input:6567 Output: Failure
*/
#include<stdio.h>
int is1st2dsequaltolast2ds(int n);
int main()
{
    int four_dn;
    printf("Input: ");
    scanf("%d",&four_dn);
    if(is1st2dsequaltolast2ds(four_dn))
            printf("Output: Success");
    else
            printf("Output: Failure");
}
int is1st2dsequaltolast2ds(int n)
{
    return ((n%100)==(n/100));
}
