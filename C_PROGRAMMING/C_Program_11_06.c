/* 
   C LEVEL 11 Problem 06
                  Use Pointers
   Question: 
                  Write a function to copy a string to another
   Function Name: 
                  strcopy(src,dst)
*/
#include<stdio.h>
void strcopy(char *source, char *destination);
void getsource(char *str);
void print(char *str);
int main()
{
    char src[51], dst[51];
    getsource(src);
    print(src);
    strcopy(src, dst);
    print(dst);
}
void print(char *str)
{
    printf("\n%s",str);
}
void getsource(char *str)
{
    printf("Enter Source: ");
    scanf("%s",str);
}
void strcopy(char *source, char *destination)
{
    while(*(source)!='\0')
    {
        *(destination++) = *(source++);
    }
    *(destination) = '\0';
}
