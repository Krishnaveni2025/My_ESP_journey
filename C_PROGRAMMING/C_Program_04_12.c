/* 
   C LEVEL 04 Program 12
            Use only int variables
            Use only Decimals
            Use only "if/else", goto statements. Don't use  "for/while"
            Don't use arrays, pointers, strings, etc.
   Question: 
            Write a program to get a number from the user and print the sum of all digits 
   Answer:
            Input:123456   Output:21
            Input:76895439 Output:51
            Input:675      Output:18
  */
#include<stdio.h>
int sumofdigits(int n);
int main()
{
    int number;
    printf("Number: ");
    scanf("%d",&number);
    printf("%d",sumofdigits(number));
}
int sumofdigits(int n)
{
    int sum = 0;
    loop:
        if(n)
        {
            sum += (n%10);
            n /= 10;
            goto loop;
        }
    return sum;
}
