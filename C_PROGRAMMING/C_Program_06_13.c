/* 
   C LEVEL 06 Problem 13
            Use only int variables
            Use only Decimals
            Use "while" statements to solve the problems. "If" also can be used to decision making but not for loop.
            Don't use Arrays, pointers, strings,etc.
   Question: 
            Write a program to get a number from the user 
            print the reverse of the number.
   Answer:
            Input:123456   Output:654321
            Input:76895439 Output:93453867
            Input:675      Output:576
*/
#include<stdio.h>
int reverse(int n);
int main()
{
    int number;
    printf("Input: ");
    scanf("%d",&number);
    printf("Output: %d",reverse(number));
    return 0;
}
int reverse(int n)
{
    int rev = 0;
    while(1)
    {
        if(n)
        {
            rev = (rev*10) + (n%10);
            n /= 10;
        }
        else return rev;
    }
}
