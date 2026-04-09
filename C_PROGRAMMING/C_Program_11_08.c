/* 
   C LEVEL 11 Problem 08
                  Use Pointers
   Question: 
                  Write a function two compare to strings. Print success or failure
   Function Name: 
                  strcomp(src, dst)
*/
#include<stdio.h>
int strcomp(char *src, char *dst);
char source[100],destination[100];
int main()
{
    printf("Enter 1st String\n");
    scanf("%s",source);
    printf("Enter 2nd String\n");
    scanf("%s",destination);
    if(strcomp(source, destination))
            printf("\nsuccess");
    else
            printf("\nfailure");
}
int strcomp(char *src, char *dst)
{
    while(*src!='\0')
    {
        if(*src != *dst)
                return 0;
        src++;
        dst++;
    }
    return 1;
}
