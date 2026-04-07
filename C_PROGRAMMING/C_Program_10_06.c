/* 
    C LEVEL 10 Problem 06
                Don't use structures
    Question: 
                Get an intger and print each digit as a character. 
                Print one character on one line
*/
#include<stdio.h>
void getint_printchar(int n, char *str);
int main()
{
    int number;
    char charofnum[20];
    getint_printchar(number, charofnum);
}
void getint_printchar(int n, char *str)
{
    int i = 0;
    printf("Enter Number: ");
    scanf("%d",&n);
    while(n)
    {
        str[i]= (n%10)+'0';
        n /= 10;
        i++;
    }
    str[i] = '\0';
    i = i-1;
    while(str[i]!=0)
    {
        printf("%c\n",str[i]);
        i--;
    }
}
