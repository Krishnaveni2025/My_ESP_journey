/* C LEVEL 10 Problem 07
                Don't use structures
   Question: 
                Get a string and find the length of the string
*/
#include<stdio.h>
int length(char *str);
int main()
{
    char string[50];
    printf("Enter a string: ");
    scanf("%s",string);
    printf("%d",length(string));
    return 0;
}
int length(char *str)
{
    int l = 0;
    while(*(str+l)!='\0')
    {
        l++;
    }
    return l;
}
