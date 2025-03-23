
//write a loop Program to print 1 to 5 on one by one.
/*
1
2
3
4
5
*/
/*#include<stdio.h>
int main()
{
    int x;
    //Your code here
    x=1;
    loop:if(x<6)
    {
        //Your Code here
        printf("%d\n",x);
        x=x+1;
        goto loop;
    }
}
*/
/*Using Function*/
#include<stdio.h>
int print1To5(int x);//function Declaration
int main()
{
    int x;
    //Your code here
    print1To5(x);//Calling function
}
int print1To5(int x)//function Defination
{
    x = 1;
    loop:if(x<6)
    {
        //Your Code here
        printf("%d\n",x);
        x=x+1;
        goto loop;
    }
}