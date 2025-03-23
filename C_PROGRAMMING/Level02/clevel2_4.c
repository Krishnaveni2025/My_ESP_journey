//Question: write a loop Program to print sum from 6 to 1 .
//Answer: 21
/*#include<stdio.h>
int main()
{
    int x;
    //Your code here
    x=6;
    int sum = 0;
    loop:if(x>0)
    {
        //Your Code here
        sum = sum+x;
        x=x-1;
        goto loop;
    }
    else{
     printf("%d",sum);
    }
}*/
/*Using Function*/
#include<stdio.h>
int printsum1To5(int x);//function Declaration
int main()
{
    int sum;
    //Your code here
    sum = 0;
    int result;
    result = printsum1To5(sum);//Calling function
    printf("%d",result);

}
int printsum1To5(int x)//function Defination
{
    x = 0;
    int result = 0,sum;
    while(x<=6)
    {
        result = result + x;
        x=x+1;
    }
    sum = result;
    return sum;
}