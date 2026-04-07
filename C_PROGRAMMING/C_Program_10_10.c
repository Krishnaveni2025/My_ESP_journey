/* 
    C LEVEL 10 Problem 10
                Don't use structures
    Question: 
                Get a number upto 50 digits and reverse it
*/
#include<stdio.h>
int length(char *n);
void reverse(char *n);
int main()
{
    char number[51];
    printf("Enter Number(upto 50 digits)\n");
    scanf("%s",number);
    reverse(number);
    printf("\n%s",number);
    return 0;
}
int length(char *n)
{
    int len = 0;
    while(*(n+len)!='\0')
    {
        len++;
    }
    return len;
}
void reverse(char *n)
{
    int l = length(n);
    int temp;
    for(int i = 0; i<l/2;i++)
    {
        temp = *(n+i);
        *(n+i) = *(n+(l-i-1));
        *(n+(l-i-1)) = temp;
    }
}
