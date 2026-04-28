/* 
   C LEVEL 07 Problem 23
                    Use only int variables
                    Use only Decimals
                    Use functions with not return value.
                    Don't use Arrays, pointers, strings,etc.
   Question: 
                    Write a program to get a number from the user and 
                    print the total number of single digit perfect square numbers in the number
   Function Name: 
                    disp_single_digit_square
   Answer:
                    Input: 123456789 Output: 3
                    Input: 987531    Output: 2
*/
#include<stdio.h>
void disp_single_digit_square(int a);
int main()
{
    int number;
    printf("Input: ");
    scanf("%d",&number);
    disp_single_digit_square(number);
    return 0;
}
void disp_single_digit_square(int a)
{
    int count = 0, i;
    while(a)
    {
        for(i = 1; i<4; i++)
        {
            if((i*i)==(a%10))
                count++;
        }
        a /= 10;
    }
    printf("Output: %d",count);
}
