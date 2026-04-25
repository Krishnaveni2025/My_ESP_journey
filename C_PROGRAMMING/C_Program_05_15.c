/* 
   C LEVEL 05 Problem 15
            Use only int variables
            Use only Decimals
            Use "for" statements to solve the problems. "If" also can be used to decision making but not for loop.
            Don't use Arrays, pointers, strings,etc.
   Question: 
            Write a program to get a number from the user and 
            If the last digit of the number is even print the same number. 
            If the last digit of the number is odd subtract 1 from the last digit and 
            print the number.(Note: Last Digit - MSB)
   Answer:
            Input:654324   Output:654324 (last digit = 6)
            Input:76895439 Output:66895439 (last digit = 7)
            Input:675      Output:675 (last digit = 6)
*/
#include<stdio.h>
int result(int n);
int main()
{
    int number;
    printf("Number: ");
    scanf("%d",&number);
    printf("%d",result(number));
}
int result(int n)
{
    int last, temp, multiplier = 1;
    temp = n;
    for(;;)
    {
        if(temp>9)
        {
            multiplier *= 10;
            temp /= 10;
        }
        else
            break;
    }
    last = temp;
    if(last%2)
            return (((last-1)*multiplier)+(n%multiplier));
    return n;
}
