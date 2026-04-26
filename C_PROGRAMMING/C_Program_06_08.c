/* 
   C LEVEL 06 Problem 08
            Use only int variables
            Use only Decimals
            Use "while" statements to solve the problems. "If" also can be used to decision making but not for loop.
            Don't use Arrays, pointers, strings,etc.
   Question: 
            write a loop program to print the two digit even numbers, 
            who's sum of digits are 6
   Answer:
            24
            42
            60
*/
#include<stdio.h>
void print_2deven_sofd6(void);
int even(int a);
int sodfd6(int a);
int main()
{
    print_2deven_sofd6();
}
void print_2deven_sofd6(void)
{
    int n = 11;
    while(1)
    {
        if(n<61)
        {
            if(even(n))
            {
                if(sodfd6(n))
                {
                    printf("%d\n",n);
                }
            }
            n++;
        }
        else break;
    }
}
int even(int a)
{
    return (!(a%2));
}
int sodfd6(int a)
{
    return (((a%10)+(a/10))==6);
}
