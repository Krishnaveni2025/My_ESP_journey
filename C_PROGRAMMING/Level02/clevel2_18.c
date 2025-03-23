//Question: Write a program to get number from user, print whether that number’s 
//first two digits (ten’s digits and one’s digit) is prime.
//Answer: 
//Input: 359 - Output: Prime
//Input: 3577 - Output: Not Prime
/*#include<stdio.h>
int main()
{
    int x;
    printf("enter a number: ");
    scanf("%d",&x);
    int i,first,second,num,c=0;
    first = x%10;
    second = (x/10)%10;
    num=(second*10)+first ;
    i=1;
    while(i<=num) {
        if(num%i ==0)
            c++;
        i++;
    }
    if(c==2)
        printf("prime");
    else
        printf("not");

}
*/
/*Using Function*/
#include<stdio.h>
//Function to check whether the first two digits (ten’s digits and one’s digit) is prime.
int isFirstTwoDigitsPrime(int num1);//Function Declaration
int main()
{
    int x,Result;
    printf("Enter a number: ");
    scanf("%d",&x);
    Result= isFirstTwoDigitsPrime(x);//Calling Function
    if(Result==1)
        printf("Prime");
    else
        printf("Not");
    return 0 ;
}
int isFirstTwoDigitsPrime(int num1) //Function Defination
{
    int i,first,second,num2,result,c=0;
    first = num1%10;
    second = (num1/10)%10;
    num2=(second*10)+first ;
    i=1;
    while(i<=num2) {
        if(num2%i ==0)
            c++;
        i++;
    }
    if(c==2)
    {
        result = 1;
    }
    else
    {
        result = 0;
    }
 return result;
}