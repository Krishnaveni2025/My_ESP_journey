
//Question: Write a program print total number of single digit Prime numbers
//Answer: 4
/*#include<stdio.h>
int main()
{
    int i,x,c=0;
    for(i=1; i<10; i++) {
        for(x=2; x<i; x++) {
            if(i%x == 0)
                break;
        }
        if(i==x)
        c++;  
    }
    printf("%d",c);
}
*/
/*Using Function*/
#include<stdio.h>
int countSinglePrime(int count);//Function Declaration
int main()
{
    int c,number = 2;
    c = countSinglePrime(number);//Calling Function
    printf("%d",c);
}
int countSinglePrime(int count)//Function Defination
{
    int i,c=0;
    for(i=1; i<10; i++) {
        for(count=2; count<i; count++) {
            if(i%count == 0)
                break;
        }
        if(i==count)
        c++;  
    }
    return c;
}