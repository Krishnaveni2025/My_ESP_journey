//Get a number from the user and check whether the sum of its digits is 14 and Print Result. Don't change the program.
#include<stdio.h>
int sum14(int no);/*Function DEclaration*/
int main()
{
    int number , Result;
    scanf("%d",&number);
    Result =sum14(number);/*Calling Function*/
    if(Result == 1)
        printf("Sum Of Digits is 14");
    else
        printf("Sum Of Digits is not 14");
    return 0;
}
int sum14(int no1)/*Function Defination*/
{
    int result;
    //Your Program Here
    result =0;
    int digit;
    while(no1 != 0){
        digit = no1 % 10;
        result = digit+result;
        no1 = no1/10;
    }
    if(result == 14)
        return 1;
    else
        return 0;
}