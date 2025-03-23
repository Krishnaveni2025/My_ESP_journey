//Question: Write a program to get a 4-digit number from user, print whether that 
//number’s middle two digits (hundred’s digit and ten’s digit) is prime.
//Answer: 
//Input: 6359 - Output: Not Prime
//Input: 3517 - Output: Prime
/*#include<stdio.h>
int main()
{
    int x;
    printf("enter a 4-digit  number: ");
    scanf("%d",&x);
    int i,third,second,num,c=0;
    third = (x/100)%10;
    second = (x/10)%10;
    num=(third*10)+second ;
    i=1;
    while(i<=num) {
        if(num%i ==0)
            c++;
        i++;
    }
    if(c==2)
        printf("prime");
    else
        printf("not prime");

}
*/
/*Using Function*/
#include<stdio.h>
//Function to check whether the middle two digits (ten’s digits and hundred’s digit) is prime.
int is_tens_hundreds_Prime(int num1);//Function Declaration
int main()
{
    int x,Result;
    printf("Enter a 4-digit number: ");
    scanf("%d",&x);
    Result= is_tens_hundreds_Prime(x);//Calling Function
    if(Result==1)
        printf("Prime");
    else
        printf("Not Prime");
    return 0 ;
}
int is_tens_hundreds_Prime(int num1) //Function Defination
{
    int i,third,second,result,num2,c=0;
    third = (num1/100)%10;
    second = (num1/10)%10;
    num2=(third*10)+second ;
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