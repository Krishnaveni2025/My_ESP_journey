/* C LEVEL 08 Problem 14
        Use only int variables
        Use only Decimals
        Use Functions with a return value
        Do not use arrays, strings, pointers, etc.
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
int disp_two_digit_square(int n);
int main()
{
    int number;
    printf("Enter Number: ");
    scanf("%d",&number);
    printf("%d",disp_two_digit_square(number));
}
int disp_two_digit_square(int n)
{
    int count = 0;
    while(n>10)
    {
        for(int i=4; i<10; i++)
        {
            if((n%100)==(i*i))
                    count++;
        }
        n /= 10;
    }
    return count;
}
