/* 
   C LEVEL 06 Problem 12
            Use only int variables
            Use only Decimals
            Use "while" statements to solve the problems. "If" also can be used to decision making but not for loop.
            Don't use Arrays, pointers, strings,etc.
   Question: 
            Get a number from the user print the sum of all digits.
   Answer:
            Input:123456   Output:21
            Input:76895439 Output:51
            Input:675      Output:18
*/
#include<stdio.h>
int sumofalldigits(int n);
int main()
{
    int number;
    printf("Input: ");
    scanf("%d",&number);
    printf("Output: %d",sumofalldigits(number));
    return 0;
}
int sumofalldigits(int n)
{
    int sum = 0;
    while(1)
    {
        if(n)
        {
            sum += (n%10);
            n /= 10;
        }
        else return sum;
    }
}
