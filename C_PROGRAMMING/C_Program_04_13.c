/* 
   C LEVEL 04 Program 13
            Use only int variables
            Use only Decimals
            Use only "if/else", goto statements. Don't use  "for/while"
            Don't use arrays, pointers, strings, etc.
   Question: 
            Write a program to get a number from the user and print the reverse of the number
   Answer:
            Input:123456   Output:654321
            Input:76895439 Output:93459867
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
    loop:
        if(n)
        {
            rev = (rev*10)+(n%10);
            n /= 10;
            goto loop;
        }
    return rev;
}
