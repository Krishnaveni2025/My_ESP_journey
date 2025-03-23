//Question: Get a character and print its ASCII Value.
/*#include<stdio.h>
int main()
{
    char char1;
    printf("Enter a character:");
    scanf("%c",&char1);
    printf("It's ASCII value is : %d",char1);
    }*/
   /*-------------------USing Function----------------------*/
#include <stdio.h>

void printASCII(char ch);//Function Declaration
int main() //Main Function
{
    char character;

    printf("Enter a character: ");
    scanf("%c", &character);

    printASCII(character);//Calling Function

    return 0;
}
void printASCII(char ch) //Function Defination
{
    printf("The ASCII value of '%c' is %d\n", ch, ch);
}
