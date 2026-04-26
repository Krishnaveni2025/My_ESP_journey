/* 
   C LEVEL 06 Problem 22
            Use only int variables
            Use only Decimals
            Use "while" statements to solve the problems. "If" also can be used to decision making but not for loop.
            Don't use Arrays, pointers, strings,etc.
   Question: 
            Write a program to get a number from the user and 
            print the total number of two-digit odd numbers in the number
   Answer:
            Input: 12345678 Output: 3
            Input: 987531   Output: 4
*/
#include<stdio.h>
int twodigit_oddcount(int n);
int main()
{
    int number;
    printf("Input: ");
    scanf("%d",&number);
    printf("Output: %d",twodigit_oddcount(number));
    return 0;
}
int twodigit_oddcount(int n)
{
    int count = 0;
    while(1)
    {
        if(n>10)
        {
            if((n%100)%2)
                    count++;
            n /= 10;
        }
        else return count;
    }
}
