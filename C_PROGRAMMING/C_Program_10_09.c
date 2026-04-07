/* 
    C LEVEL 10 Problem 09
                Don't use structures
    Question: 
                Get a string of numbers upto 50 digits and remove all leading zeros
*/
#include<stdio.h>
int length(char *n);
void removeleading0s(char *n, char *r);
int main()
{
    char number[51],result[51];
    printf("Enter Number(upto 50 digits): ");
    scanf("%s",number);
    removeleading0s(number,result);
    printf("%s",result);
}
int length(char *n)
{
    int l = 0;
    while(*(n+l)!='\0')
    {
        l++;
    }
    return l;
}
void removeleading0s(char *n, char *r)
{
    int len = length(n);
    int i = 0, j = 0;
    while((*(n+i)=='0')&&(i<len))
    {
        i++;
    }
    while(i<len)
    {
        *(r+j) = *(n+i);
        j++;
        i++;
    }
    *(r+j) = '\0';
}
