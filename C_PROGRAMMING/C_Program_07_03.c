/* C LEVEL 07 Problem 03
                 Use only int variables
                 Use only Decimals
                 Use functions with not return value.
                 Don't use Arrays, pointers, strings,etc.
   Question: 
                 Write a loop program to print sum from 1 to 5
   Function Name: 
                 disp_sum
   Answer:
                 15
*/
#include<stdio.h>
void disp_sum(int n);
int main()
{
    int number = 1;
    disp_sum(1);
}
void disp_sum(int n)
{
    int sum = 0;
    while(n<6)
    {
        sum += n;
        n++;
    }
    printf("%d",sum);
}
