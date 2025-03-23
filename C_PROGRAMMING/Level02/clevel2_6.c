// Question: Write a loop Program to print two-digit odd numberes below 20.
// Answer:
/*
11
13
15
17
19
*/
/*
#include <stdio.h>
int main()
{
    int x;
    // your Code here
    x = 10;
loop:
    if (x < 20)
    {
        if (x % 2 == 1)
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
/*Using functions*/
#include <stdio.h>
int oddnum11To19(int from, int to); // function Declaration
int main()
{
    oddnum1To9(11,19);//function calling
    return 0;
}
int oddnum1To9(int from,int to) // function Defination
{
    int num;
    for(num = from; num<=to; num++)
    {
        if(num%2 !=0)
        {
            printf("%d\n",num);
        }
    }
}
