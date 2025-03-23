//Question: Write a program to get number from the user print the total number of digits in that number.
/*Answer:
Input:123456 - Output- 6
Input:76895439- Output - 8
Input:675 - Output - 3
*/
/*#include<stdio.h>
int main()
{
    int x;
    scanf("%d",&x);
    //Your Code Here
    int digit,count =0;
    while(x!=0)
    {
        digit = x%10;
        count = count + 1;
        x = x/10;
    }
    printf("%d",count);

}
*/
/*-------------------Using Function------------------------------------*/
#include <stdio.h>
int count_digits(int no);//Function Declaration
int main()
{
    int number, result;
    scanf("%d", &number);
    result = count_digits(number);/*Calling Function*/
    printf("%d", result);
    return 0;
}
int count_digits(int no1)/*Function Defination*/
{
    int result;
    // Your Program Here
    result=0;
    while (no1 != 0)
    {
        result = result + 1;
        no1 = no1 / 10;
    }
    return result;
}