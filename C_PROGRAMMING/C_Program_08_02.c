/* C LEVEL 08 Problem 02
        Use only int variables
        Use only Decimals
        Use Functions with a return value
        Do not use arrays, strings, pointers, etc.
   Question: 
        Write a loop program to print sum of 6 to 1
   Function Name: 
        disp_rsum
   Answer:
        21
*/
#include<stdio.h>
int disp_rsum(int n);
int main()
{
    printf("%d",disp_rsum(6));
}
int disp_rsum(int n)
{
    int rsum = 0;
    while(n>0)
    {
        rsum += n;
        n--;
    }
    return rsum;
}
