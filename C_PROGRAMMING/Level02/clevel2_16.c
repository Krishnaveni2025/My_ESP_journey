//Question: Write a program get number from user
//print whether that number is prime or not.
//Answer: 
//Input : 31 - Output : Prime
//Input : 27 - Output : Not Prime.
/*#include<stdio.h>
int main()
{
    int x;
    printf("enter a number: ");
    scanf("%d",&x);
    int i,c=0;
    i=1;
    while(i<=x) {
        if(x%i ==0)
            c++;
        i++;
    }
    if(c==2)
        printf("prime");
    else
        printf("not");

}*/
/*Using Function*/
#include<stdio.h>
int check_prime(number);//Function Declaration
int main()
{
    int x,result;
    printf("Enter a number: ");
    scanf("%d",&x);
    result = check_prime(x);//Callling Function
    if(result == 1)
    {
        printf("Prime");
    }
    else
    {
        printf("Not Prime");
    }
    return 0;
}
int check_prime(int num)//Function Defination
{
    int result,i,c=0;
    i=1;
    while(i<=num) {
        if(num%i ==0)
            c++;
        i++;
    }
    if(c==2)
    {
        result = 1;
    }
    else
    {
        result = 0 ;
    }
    return result;

}