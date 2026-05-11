/* 
   C LEVEL 11 Problem 07
                  Use Pointers
   Question: 
                  Write a function to compare a set of integers and print success or failure
   Function Name: 
                  memcomp(src,dst,size)
*/
#include<stdio.h>
#define Max_size 8
int memcomp(int *src, int *dst, int size);
void getsetint(int *src, int *dst, int size);
int main()
{
    int source[Max_size], destination[Max_size];
    getsetint(source, destination, Max_size);
    if(memcomp(source, destination, Max_size))
                printf("Success");
    else
                printf("Failure");
    return 0;
}
void getsetint(int *src, int *dst, int size)
{
    int i;
    printf("Integer 1: ");
    for(i = 0; i<size; i++)
    {
        scanf("%d",&src[i]);
    }
    printf("Integer 2: ");
    for(i = 0; i<size; i++)
    {
        scanf("%d",&dst[i]);
    }
}
int memcomp(int *src, int *dst, int size)
{
    for(int i = 0; i<size; i++)
    {
        if(src[i]!=dst[i])
                return 0;
    }
    return 1;
}
