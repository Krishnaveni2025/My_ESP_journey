/* 
   C LEVEL 06 Problem 24
            Use only int variables
            Use only Decimals
            Use "while" statements to solve the problems. "If" also can be used to decision making but not for loop.
            Don't use Arrays, pointers, strings,etc.
   Question: 
            Write a program to get a number from the user and 
            print the total number of two digit perfect square numbers in the number
   Answer:
            Input: 163496481 Output: 4
            Input: 364925    Output: 4
*/
#include<stdio.h>
int twod_perfectCount(int n);
int main()
{
    int number;
    printf("Input: ");
    scanf("%d",&number);
    printf("Output: %d",twod_perfectCount(number));
    return 0;
}
int twod_perfectCount(int n)
{
    int i, count = 0;
    while(1)
    {
        if(n>15)
        {
            i = 4;
            while(1)
            {
                if(i<10)
                {
                    if((i*i)==(n%100))
                            count++;
                    i++;
                }else break;
            }
            n /= 10;
        }
        else return count;
    }
}
