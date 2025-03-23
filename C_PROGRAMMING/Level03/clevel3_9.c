//Get a number from  the user and swap its digits.
#include<stdio.h>
int swap_digits(int no);/*Function Declaration*/
int main()
{
    int number,result;
    scanf("%d",&number);
    result = swap_digits ( number);/*Calling Function*/
    printf("%d",result);
    return 0;
}
int swap_digits(int no1)/*Function Defination*/
{
    int result ;
    //Your Program Here
    result = ((no1%10)*10)+(no1/10);
    return result;
}