/* 
   C LEVEL 07 Problem 02
                  Use only int variables
                  Use only Decimals
                  Use functions with not return value.
                  Don't use Arrays, pointers, strings,etc.
   Question: 
                  Write a loop program to print 5 to 1 on one by one
   Function Name: 
                  disp_descend
   Answer:
                  5
                  4
                  3
                  2
                  1
*/
#include<stdio.h>
void disp_descend(int n);
int main()
{
    int number = 5;
    while(number)
    {
        disp_descend(number);
        number--;
    }
}
void disp_descend(int n)
{
    if(n)
            printf("%d\n",n);
}
