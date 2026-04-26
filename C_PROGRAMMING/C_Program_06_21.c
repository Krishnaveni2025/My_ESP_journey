/* 
   C LEVEL 06 Problem 21
            Use only int variables
            Use only Decimals
            Use "while" statements to solve the problems. "If" also can be used to decision making but not for loop.
            Don't use Arrays, pointers, strings,etc.
   Question: 
            Write a program to get a number from the user and 
            print the total number of digits which are odd in that number
   Answer:
            Input: 12345678 Output: 4
            Input: 987531   Output:5
*/
#include<stdio.h>
int single_oddcount(int n);
int main()
{
    int number;
    printf("Input: ");
    scanf("%d",&number);
    printf("Output: %d",single_oddcount(number));
    return 0;
}
int single_oddcount(int n)
{
    int count = 0;
    while(1)
    {
        if(n)
        {
            if((n%10)%2)
                    count++;
            n /= 10;
        }
        else return count;
    }
}
