/* 
   C LEVEL 06 Problem 15
            Use only int variables
            Use only Decimals
            Use "while" statements to solve the problems. "If" also can be used to decision making but not for loop.
            Don't use Arrays, pointers, strings,etc.
   Question: 
            Write a program to get a number from the user and 
            if the last digit of the number is even print the same number. 
            If the last digit of the number is odd subtract 1 from the last digit and 
            print the number.(Note: Last Digit - MSB)
  Answer:
            Input:654324   Output:654324 (last digit = 6)
            Input:76895439 Output:66895439 (last digit = 7)
            Input:675      Output:675 (last digit = 6)
*/
#include<stdio.h>
int even(int a);
int result(int a);
int main()
{
    int number;
    printf("Input: ");
    scanf("%d",&number);
    printf("Output: %d",result(number));
    return 0;
}
int result(int a)
{
    int multiplier = 1, last;
    last = a;
    while(1)
    {
        if(last>10)
        {
            multiplier *= 10;
            last /= 10;
        }
        else break;
    }
    if(even(last))
            return a;
    return (((last-1)*multiplier)+(a%multiplier));
}
int even(int a)
{
    return (!(a%2));
}
