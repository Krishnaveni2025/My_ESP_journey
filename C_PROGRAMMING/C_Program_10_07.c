/* C LEVEL 10 Problem 07
        Don't use structures
   Question: 
        Get a string and find the length of the string
*/
#include<stdio.h>
char input[100];
int length;
int getlength(char *str);
int main()
{
    printf("Enter String: ");
    scanf("%s",input);
    printf("Length: %d",getlength(input));
}
int getlength(char *str)
{
    while(str[length]!='\0')
    {
        length++;
    }
    return length;
}
