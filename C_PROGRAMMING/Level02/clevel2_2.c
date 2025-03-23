//write a loop Program to print 5 to 1 on one by one.
/*
5
4
3
2
1
*/
/*#include<stdio.h>
int main()
{
    int x;
    //Your code here
    x=5;
    loop:if(x>0)
    {
        //Your Code here
        printf("%d\n",x);
        x=x-1;
        goto loop;
    }
}*/
/*Using Function*/
#include<stdio.h>
int print5To1(int x);//function Declaration
int main()
{
    int x;
    //Your code here
    print5To1(x);//Calling function
}
int print5To1(int x)//function Defination
{
    x = 5;
    loop:if(x>0)
    {
        //Your Code here
        printf("%d\n",x);
        x=x-1;
        goto loop;
    }
}