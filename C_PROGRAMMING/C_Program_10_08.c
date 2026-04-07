/* 
    C LEVEL 10 Problem 08
                Don't use structures
    Question: 
                Get a string of numbers upto 50 digits and validate the number
*/
#include<stdio.h>
int valid(char *n);
int main()
{
    char charofnum[51];
    printf("Enter Number(upto 50 digits): ");
    scanf("%s",charofnum);
    if(valid(charofnum))
            printf("Number is Valid");
    else
            printf("Number is not Valid");
}
int valid(char *n)
{
    int i = 0;
    while(*(n+i)!='\0')
    {
        if(((*(n+i))<'0')||((*(n+i))>'9'))
                return 0;
        i++;
    }
    return 1;
}
