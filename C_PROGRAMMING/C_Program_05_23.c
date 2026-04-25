/* 
   C LEVEL 05 Problem 23
            Use only int variables
            Use only Decimals
            Use "for" statements to solve the problems. "If" also can be used to decision making but not for loop.
            Don't use Arrays, pointers, strings,etc.
   Question: 
            Write a program to get a number from the user and 
            print the total number of single digit perfect square numbers in the number
   Answer:
            Input: 123456789 Output: 3
            Input: 987531    Output: 2
*/
#include<stdio.h>
int singledigit_perfect_count(int n);
int main()
{
    int number;
    printf("Input: ");
    scanf("%d",&number);
    printf("Output: %d",singledigit_perfect_count(number));
    return 0;
}
int singledigit_perfect_count(int n)
{
    int i =1, count = 0;
    for(;;)
    {
        if(n)
        {
            i = 1;
            for(;;)
            {
                if(i<4)
                {
                    if((i*i)==(n%10))
                            count++;
                    i++;
                }
                else
                        break;
            }
            n /= 10;
        }
        else
                break;
    }
    return count;
}
