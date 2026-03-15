/* C LEVEL 11 Problem 06
  Use Pointers
Question: Write a function to copy a string to another
Function Name: strcopy(src,dst)
*/
#include<stdio.h>
void strcopy(char *src, char *dst);
int main()
{
    char input[100], copy[100];
    printf("Enter a string: ");
    scanf("%s",input);
    strcopy(input, copy);
    printf("Copied String: %s",copy);
}
void strcopy(char *src, char *dst)
{
    while(*src!='\0')
    {
        *(dst++) = *(src++);
    }
    *(dst) = '\0';
}
