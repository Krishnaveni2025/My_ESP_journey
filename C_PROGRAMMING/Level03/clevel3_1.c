//Get a number from user and add 2 to that number and Print the Result
#include <stdio.h>
int function(int no);/*Funciton Declaration*/
int main()
{
    int number1, number2;
    scanf("%d", &number1);
    number2 = function(number1);/*Calling Function*/
    printf("%d", number2);
    return 0;
}
int function(int no1)/*Function Defination*/
{
    int no2;
    // Your Program Here
    no2 = no1 + 2;
    return no2;
}