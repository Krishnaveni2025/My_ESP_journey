/* 
   C LEVEL 11 Problem 08
                  Use Pointers
   Question: 
                  Write a function two compare to strings. Print success or failure
   Function Name: 
                  strcomp(src, dst)
*/
#include<stdio.h>
#define Max_size 10
void getstrings(char *src, char *dst);
int strcomp(char *src, char *dst);
int main()
{
    char source[Max_size], destination[Max_size];
    getstrings(source, destination);
    if(strcomp(source, destination))
                printf("Success");
    else
                printf("Failure");
    return 0;
}
void getstrings(char *src, char *dst)
{
    printf("String 1: ");
    scanf("%s",src);
    printf("String 2: ");
    scanf("%s",dst);
}
int strcomp(char *src, char *dst)
{
    int i = 0;
    while(*(src+i)!='\0')
    {
        if(*(src+i) != *(dst+i))
                return 0;
        i++;
    }
    return 1;
}
