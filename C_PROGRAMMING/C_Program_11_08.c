/* 
   C LEVEL 11 Problem 08
                  Use Pointers
   Question: 
                  Write a function two compare to strings. Print success or failure
   Function Name: 
                  strcomp(src, dst)
*/
#include<stdio.h>
int strcomp(char *source, char *destination);
void getstrs(char *source, char *destination);
int main()
{
    char src[51], dst[51];
    getstrs(src, dst);
    int equal;
    equal = strcomp(src,dst);
    if(equal)
            printf("success");
    else
            printf("failure");
}
void getstrs(char *source, char *destination)
{
    printf("string 1: ");
    scanf("%s",source);
    printf("string 2: ");
    scanf("%s",destination);
}
int strcomp(char *source, char *destination)
{
    int i = 0;
    while(*(source+i)!='\0')
    {
        if(*(source+i)!= *(destination+i))
                return 0;
        i++;
    }
    return 1;
}
