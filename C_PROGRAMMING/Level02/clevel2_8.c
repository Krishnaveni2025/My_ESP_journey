// Question: Write a loop Program to print two-digit even numbers whose sum of digits is 6.
// Answer:
/*
24
42
60
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
        if ((x % 2 == 0) && (sum == 6))
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
/*Using Function*/
#include <stdio.h>
int evennum10To100(int start, int stop); // function Declaration
int main()
{
    evennum10To100(10,100);//function calling
    return 0;
}
int evennum10To100(int start,int stop) // function Defination
{
    int num;
    for(num = start; num<stop; num++)
    {
        int sum = (num%10)+(num/10);
        if((num%2 != 1)&&(sum == 6))
        {
            printf("%d\n",num);
        }
    }
    return 0 ; 
}