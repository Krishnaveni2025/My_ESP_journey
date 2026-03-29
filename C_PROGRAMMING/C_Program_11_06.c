/* C LEVEL 11 Problem 06
        Use Pointers
   Question: 
        Write a function to copy a string to another
   Function Name: 
        strcopy(src,dst)
*/
#include<stdio.h>
void strcopy(char *src, char *dst);
char source[100], destination[100];
int main()
{
    printf("Enter Source\n");
    scanf("%s",source);
    strcopy(source, destination);
    printf("Destination\n%s",destination);
}
void strcopy(char *src, char *dst)
{
    while(*src!='\0')
    {
        *(dst++) = *(src++);
    }
    *dst = '\0';
}
