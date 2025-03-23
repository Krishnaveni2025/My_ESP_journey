// Question: Write a loop Program to print two-digit odd numbers whose sum of digits is 7.
// Answer:
/*
25
43
61
*/
/*#include <stdio.h>
int main()
{
    int x;
    // your Code here
    x = 10;
    int sum;
loop:
    if (x < 100)
    {
        sum = (x%10)+(x/10);
        if ((x % 2 == 1) && (sum == 7))
        {
            // Your Code Here
            printf("%d\n", x);
            x = x + 1;
            goto loop;
        }
        else
        {
            x = x + 1;
            goto loop;
        }
    }
}*/
/*Using Function*/
#include <stdio.h>
int oddnum11To99(int from, int to); // function Declaration
int main()
{
    oddnum11To99(11,99);//function calling
    return 0;
}
int oddnum11To99(int from,int to) // function Defination
{
    int num;
    for(num = from; num<=to; num++)
    {
        int sum = (num%10)+(num/10);
        if((num%2 !=0)&&(sum == 7))
        {
            printf("%d\n",num);
        }
    }
}