//Question: Write a program to get number from the user and print the sum of all digits.
/*Answer:
Input:123456 - Output- 21
Input:76895439- Output - 51
Input:675 - Output - 18
*/
/*#include<stdio.h>
int main()
{
    int x;
    scanf("%d",&x);
    //Your Code Here
    int digit,sum =0;
    while(x!=0)
    {
        digit = x%10;
        sum = sum+digit;
        x = x/10;
    }
    printf("%d",sum);

}
*/
/*Using Function*/
#include <stdio.h>
int sum_digits(int no);/*Function Declaration*/
int main()
{
    int number, result;
    scanf("%d", &number);
    result = sum_digits(number);/*Calling Function*/
    printf("%d", result);
    return 0;
}
int sum_digits(int no1)/*Function Defination*/
{
    int result,digit;
    // Your Program Here
    result=0;
    while (no1 != 0)
    {
        digit = no1%10;
        result = result + digit;
        no1 = no1 / 10;
    }
    return result;
}
