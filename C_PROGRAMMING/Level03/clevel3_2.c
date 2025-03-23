//get number from the user and substract 5 from that number and Print the Result.
#include<stdio.h>
int function(int no);/*function Declaration*/
int main()
{
    int number1,number2;
    scanf("%d",&number1);
    number2 = function(number1);/*Calling function*/
    printf("%d",number2);
    return 0;
}
int function(no1)/*Function Defination*/
{
    int no2;
    //Your Program Here
    no2=no1-5;
    return no2;
}