/* 
   C LEVEL 07 Problem 21
                    Use only int variables
                    Use only Decimals
                    Use functions with not return value.
                    Don't use Arrays, pointers, strings,etc.
   Question: 
                    Write a program to get a number from the user and 
                    print the total number of digits which are odd in that number
   Function Name: 
                    disp_total_odd_digits
   Answer:
                    Input: 12345678 Output: 4
                    Input: 987531   Output:5
*/
#include<stdio.h>
void disp_total_odd_digits(int a);
int main()
{
    int number;
    printf("Input: ");
    scanf("%d",&number);
    disp_total_odd_digits(number);
}
void disp_total_odd_digits(int a)
{
    int total = 0;
    while(a)
    {
        if((a%10)%2)
                total++;
        a /= 10;
    }
    printf("Output: %d",total);
}
