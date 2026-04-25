/* 
   C LEVEL 05 Problem 14
            Use only int variables
            Use only Decimals
            Use "for" statements to solve the problems. "If" also can be used to decision making but not for loop.
            Don't use Arrays, pointers, strings,etc.
   Question: 
            Write a program to get a number from the user and interchange the first and last digits and print the result .
   Answer:
            Input:123456   Output:623451
            Input:76895439 Output:96895437
            Input:675      Output:576
*/
#include<stdio.h>
int swap_1st_last(int n);
int main()
{
    int number;
    printf("Number: ");
    scanf("%d",&number);
    printf("%d",swap_1st_last(number));
}
int swap_1st_last(int n)
{
    int last, temp, middle, multiplier = 1;
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
    middle = (n%multiplier)/10;
    return (((n%10)*multiplier)+(middle*10)+last);
}
