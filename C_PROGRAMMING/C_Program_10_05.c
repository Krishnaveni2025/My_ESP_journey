/* 
    C LEVEL 10 Problem 05
                Don't use structures
    Question: 
                Get an integer and print it as a string
*/
#include<stdio.h>
void getINT_printSTR(int n);

int main()
{
    int number;
    getINT_printSTR(number);
}
void getINT_printSTR(int n)
{
    char num[10];
    int i = 0, temp;
    printf("Enter Number: ");
    scanf("%d",&n);
    while(n)
    {
        num[i] = (n%10) + '0';
        n /= 10;
        i++;
    }
    num[i] = '\0';
    for(int j = 0; j<i/2; j++)
    {
        temp = num[j];
        num[j] = num[i-j-1];
        num[i-j-1] = temp ;
    }
    printf("String: %s",num);
}
