/* 
   C LEVEL 07 Problem 24
                    Use only int variables
                    Use only Decimals
                    Use functions with not return value.
                    Don't use Arrays, pointers, strings,etc.
   Question: 
                    Write a program to get a number from the user and 
                    print the total number of two digit perfect square numbers in the number
   Function Name: 
                    disp_two_digit_square
   Answer:
                    Input: 163496481 Output: 4
                    Input: 364925    Output: 4
*/
#include<stdio.h>
void disp_two_digit_square(int a);
int main()
{
    int number;
    printf("Input: ");
    scanf("%d",&number);
    disp_two_digit_square(number);
    return 0;
}
void disp_two_digit_square(int a)
{
    int count = 0, i;
    while(a>15)
    {
        for(i = 4; i<10; i++)
        {
            if((i*i)==(a%100))
                    count++;
        }
        a /= 10;
    }
    printf("Output: %d",count);
}
