// Get a numner from the user & count the number of digits and Print the same.
#include <stdio.h>
int count_digits(int no);/*Function Declaration*/
int main()
{
    int number, result;
    scanf("%d", &number);
    result = count_digits(number);/*Calling Function*/
    printf("%d", result);
    return 0;
}
int count_digits(int no1)/*Defination  of Function*/
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