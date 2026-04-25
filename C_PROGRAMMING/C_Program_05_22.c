/* 
   C LEVEL 05 Problem 22
            Use only int variables
            Use only Decimals
            Use "for" statements to solve the problems. "If" also can be used to decision making but not for loop.
            Don't use Arrays, pointers, strings,etc.
   Question: 
            Write a program to get a number from the user and 
            print the total number of two digits numbers which are odd in that number
   Answer:
            Input: 12345678 Output: 3
            Input: 987531   Output: 4
*/
#include<stdio.h>
int twodigit_odd_count(int n);
int main()
{
    int number;
    printf("Input: ");
    scanf("%d",&number);
    printf("Output: %d",twodigit_odd_count(number));
    return 0;
}
int twodigit_odd_count(int n)
{
    int count = 0;
    for(;;)
    {
        if(n>10)
        {
            if((n%100)%2)
                    count++;
            n /= 10;
        }
        else
                break;
    }
    return count;
}
