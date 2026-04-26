/* 
   C LEVEL 06 Problem 14
            Use only int variables
            Use only Decimals
            Use "while" statements to solve the problems. "If" also can be used to decision making but not for loop.
            Don't use Arrays, pointers, strings,etc.
   Question: 
            Write a program to get a number from the user and 
            interchange the first and last digits and 
            print the result .
   Answer:
            Input:123456   Output:623451
            Input:76895439 Output:96895437
            Input:675      Output:576
*/
#include<stdio.h>
int interchange_1stlastds(int a);
int main()
{
    int number;
    printf("Input: ");
    scanf("%d",&number);
    printf("Output: %d",interchange_1stlastds(number));
    return 0;
}
int interchange_1stlastds(int a)
{
    int last, temp, middle, multiplier = 1;
    temp = a;
    while(1)
    {
        if(temp>9)
        {
            multiplier *= 10;
            temp /= 10;
        }
        else break;
    }
    last = temp;
    middle = (a%multiplier)/10;
    return (((a%10)*multiplier)+(middle*10)+last);
}
