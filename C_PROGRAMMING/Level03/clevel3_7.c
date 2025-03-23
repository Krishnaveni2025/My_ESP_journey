// Get a number from user and compare the number. If same print "Same"Otherwise Print"Not Same".
#include <stdio.h>
int compare_numbers(int no1, int no2);/*Function Declaration*/
int main()
{
    int number1, number2, Result;
    scanf("%d %d", &number1, &number2);
    Result = compare_numbers(number1, number2);/*Calling Function*/
    if (Result == 1)
        printf("Same");
    else
        printf("Not Same");
    return 0;
}
int compare_numbers(int no1, int no2)/*Funciton Defination*/
{
    int result;
    // Your Program Here
    if (no1 == no2)
        result = 1;
    else
        result = 0;
    return result;
}