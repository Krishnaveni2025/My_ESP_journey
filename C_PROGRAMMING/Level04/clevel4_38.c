// Question: Get a String and print the same.
/*#include<stdio.h>
int main(){
char str[100];
printf("Enter a string: ");
scanf("%s",str);
printf("\n%s",str);
}*/
/*-------------------Using Function---------------------------*/
#include <stdio.h>
void printstring(char str1[100]); // Function Declaration
int main()
{
    char str[100];
    printf("Enter a string: ");
    scanf("%s", str);
    printstring(str);//Calling Function
    return 0;
}
void printstring(char str1[100])//Function Defination
{
    
    printf("\n%s", str1);
}