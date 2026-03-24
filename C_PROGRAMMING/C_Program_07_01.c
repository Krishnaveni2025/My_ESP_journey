/* C LEVEL 07 Problem 01
         Use only int variables
         Use only Decimals
         Use functions with not return value.
         Don't use Arrays, pointers, strings,etc.
   Question: 
         Write a loop program to print 1 to 5 on one by one
   Function Name: 
         disp_assend
   Answer:
         1
         2
         3
         4
         5
*/
#include<stdio.h>
void disp_assend(int);
int main()
{
    int number = 1;
    while(number<6)
    {
        disp_assend(number);
        number++;
    }
    return 0;
}
void disp_assend(int n)
{
    if(n<6)
            printf("%d\n",n);
}
