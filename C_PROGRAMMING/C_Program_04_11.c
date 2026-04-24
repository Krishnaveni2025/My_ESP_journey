/* 
  C LEVEL 04 Program 11
            Use only int variables
            Use only Decimals
            Use only "if/else", goto statements. Don't use  "for/while"
            Don't use arrays, pointers, strings, etc.
   Question: 
            Write a program to get a number from the user and 
            print the total number of digits in that number 
   Answer:
            Input:123456   Output:6
            Input:76895439 Output:8
            Input:675      Output:3
  */
#include<stdio.h>
void print_total_digits(int n);
int main()
{
    int number;
    printf("Number: ");
    scanf("%d",&number);
    print_total_digits(number);
}
void print_total_digits(int n)
{
    int c = 0;
    loop:
        if(n)
        {
            c++;
            n /= 10;
            goto loop;
        }
    printf("%d",c);
}
