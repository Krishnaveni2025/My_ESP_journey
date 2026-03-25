/* C LEVEL 07 Problem 23
         Use only int variables
         Use only Decimals
         Use functions with not return value.
         Don't use Arrays, pointers, strings,etc.
   Question: 
         Write a program to get a number from the user and 
         print the total number of single digit perfect square numbers in the number
   Function Name: disp_single_digit_square
   Answer:
         Input: 123456789 Output: 3
         Input: 987531    Output: 2
  */

#include<stdio.h>
void disp_single_digit_square(int n);
int main()
{
    int number;
    printf("Enter Number: ");
    scanf("%d",&number);
    disp_single_digit_square(number);
}
void disp_single_digit_square(int n)
{
    int sps_count = 0;
    while(n)
    {
        for(int i = 1; i<4; i++)
        {
            if((n%10)==(i*i))
                sps_count++;
        }
        n/=10;
    }
    printf("%d",sps_count);
}
