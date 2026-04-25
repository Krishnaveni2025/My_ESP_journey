/* 
   C LEVEL 05 Problem 13
            Use only int variables
            Use only Decimals
            Use "for" statements to solve the problems. "If" also can be used to decision making but not for loop.
            Don't use Arrays, pointers, strings,etc.
   Question: 
            Write a program to get a number from the user print the reverse of the number.
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
    printf("Number: ");
    scanf("%d",&number);
    printf("%d",reverse(number));
}
int reverse(int n)
{
    int rev = 0;
    for(;;)
    {
        if(n)
        {
            rev = (rev*10)+(n%10);
            n /= 10;
        }
        else 
                break;
    }
    return rev;
}
