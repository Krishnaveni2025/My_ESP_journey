/* 
   C LEVEL 06 Problem 23
            Use only int variables
            Use only Decimals
            Use "while" statements to solve the problems. "If" also can be used to decision making but not for loop.
            Don't use Arrays, pointers, strings,etc.
   Question: 
            Write a program to get a number from the user and 
            print the total number of single digit perfect square numbers in the number
   Answer:
            Input: 123456789 Output: 3
            Input: 987531    Output: 2
*/
#include<stdio.h>
int single_perfectCount(int n);
int main()
{
    int number;
    printf("Input: ");
    scanf("%d",&number);
    printf("Output: %d",single_perfectCount(number));
    return 0;
}
int single_perfectCount(int n)
{
    int i, count = 0;
    while(1)
    {
        if(n)
        {
            i = 1;
            while(1)
            {
                if(i<4)
                {
                    if((i*i)==(n%10))
                            count++;
                    i++;
                }
                else break;
            }
            n /= 10;
        }else return count;
    }
}
