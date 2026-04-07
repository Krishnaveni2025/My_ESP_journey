/* 
    C LEVEL 10 Problem 11
                Don't use structures
    Question: 
                Get a number string upto 50 digits and convert it to an integer array
*/
#include<stdio.h>
char input[51];
int integer[50];
int i,length;
void get50numbers(char *str);
void getlength(char *str);
void convert(char *str, int a[]);
void printarray(int a[]);
int main()
{
    get50numbers(input);
    convert(input,integer);
    printarray(integer);
}
void getlength(char *str)
{
    while(str[length]!='\0')
    {
        length++;
    }
}
void convert(char *str, int a[])
{
    getlength(str);
    for(i=0; i<length; i++)
    {
        a[i] = str[i]-48;
    }
}
void printarray(int a[])
{
    printf("Integer Array\n");
   for(i=0; i<length; i++)
   {
       printf("%d",a[i]);
   }
}
void get50numbers(char *str)
{
    printf("Enter upto 50 digits\n");
    scanf("%s",input);
}
