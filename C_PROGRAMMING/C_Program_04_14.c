/* 
   C LEVEL 04 Program 14
            Use only int variables
            Use only Decimals
            Use only "if/else", goto statements. Don't use  "for/while"
            Don't use arrays, pointers, strings, etc.
   Question: 
            Write a program to get a number from the user and 
            interchange the first and last digits and print the result
   Answer:
            Input:123456   Output:623451
            Input:76895439 Output:73459869
            Input:675      Output:576
  */
#include<stdio.h>
int swap_1std_lastd(int n);
int main()
{
    int number;
    printf("Number: ");
    scanf("%d",&number);
    printf("%d",swap_1std_lastd(number));
}
int swap_1std_lastd(int n)
{
    int temp, last, middle, multiplier = 1;
    temp = n;
    loop:
        if(temp>9)
        {
            temp /= 10;
            multiplier *= 10;
            goto loop;
        }
    last = temp;
    middle = (n%multiplier)/10;
    n = ((n%10)*multiplier) + (middle*10) + last;
    return n;
}
