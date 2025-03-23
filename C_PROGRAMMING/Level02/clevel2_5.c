// Question: Write a loop Program to print odd numberes 1 to 9.
// Answer:
/*
1
3
5
7
9
*/
/*#include <stdio.h>
int main()
{
    int x;
    // your Code here
    x = 1;
loop:
    if (x < 10)
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
}
*/
/*Using functions*/
#include <stdio.h>
int oddnum1To9(int from, int to); // function Declaration
int main()
{
    oddnum1To9(1,9);//function calling
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