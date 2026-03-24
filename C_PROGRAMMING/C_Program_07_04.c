/* C LEVEL 07 Problem 04
         Use only int variables
         Use only Decimals
         Use functions with not return value.
         Don't use Arrays, pointers, strings,etc.
   Question: 
         Write loop program to print sum from 6 to 1 
   Function Name: 
         disp_rsum
   Answer:
         21
*/
#include<stdio.h>
void disp_rsum(int n);
int main()
{
    int number = 6;
    disp_rsum(6);
}
void disp_rsum(int n)
{
    int rsum = 0;
    while(n)
    {
        rsum += n;
        n--;
    }
    printf("%d\n",rsum);
}
