//Question: Get a number and print its ASCII Value.
/*#include<stdio.h>
int main()
{
char num;
printf("Enter a number: ");
scanf("%c",&num);
printf("It's ASCII value is : %d",num);
}*/
/*-------------------USing Function----------------------*/
#include <stdio.h>

void printASCII(char ch);//Function Declaration
int main() //Main Function
{
    char character;

    printf("Enter a Number: ");
    scanf("%c", &character);

    printASCII(character);//Calling Function

    return 0;
}
void printASCII(char ch) //Function Defination
{
    printf("The ASCII value of '%c' is %d\n", ch, ch);
}
