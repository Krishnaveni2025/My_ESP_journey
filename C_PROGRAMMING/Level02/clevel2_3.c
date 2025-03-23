//write a loop Program to  print sum from 1 to 5 .
//Answer: 15
/*#include<stdio.h>
int main()
{
    int x;
    //Your code here
    x=1;
    int sum = 0;
    loop:if(x<6)
    {
        //Your Code here
        sum = sum+x;
        x=x+1;
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
    sum = printsum1To5(sum);//Calling function
    printf("%d",sum);

}
int printsum1To5(int x)//function Defination
{
    x = 0;
    int result = 0,sum;
    while(x<6)
    {
        result = result + x;
        x=x+1;
    }
    sum = result;
    return sum;
}