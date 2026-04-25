/* 
   C LEVEL 05 Problem 11
            Use only int variables
            Use only Decimals
            Use "for" statements to solve the problems. "If" also can be used to decision making but not for loop.
            Don't use Arrays, pointers, strings,etc.
   Question: 
            Get a number from the user print the total number of digits in that number.
   Answer:
            Input:123456   Output:6
            Input:76895439 Output:8
            Input:675      Output:3
  */
#include<stdio.h>
int total_digits(int n);
int main()
{
    int number;
    printf("Number: ");
    scanf("%d",&number);
    printf("%d",total_digits(number));
}
int total_digits(int n)
{
    int count = 0;
    for(;;)
    {
        if(n)
        {
            count++;
            n /= 10;
        }
        else
                break;
    }
    return count;
}
