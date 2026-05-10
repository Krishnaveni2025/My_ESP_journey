/* 
   C LEVEL 11 Problem 05
                  Use Pointers
   Question: 
                  Write a function to copy integers from one location to another location
   Function Name: 
                  memcopy(src,dst,size)
*/
#include<stdio.h>
#define MAX_SIZE 10
void memcopy(int *src, int *dst, int size);
void getnumbers(int *array, int size);
void print(int *array, int size);
int main()
{
    int source[MAX_SIZE], destination[MAX_SIZE];
    getnumbers(source, MAX_SIZE);
    memcopy(source, destination, MAX_SIZE);
    print(destination,MAX_SIZE);
}
void print(int *array, int size)
{
    printf("Destination Integers: ");
    for(int i = 0; i<size; i++)
    {
        printf("%d ",array[i]);
    }   
}
void getnumbers(int *array, int size)
{
    printf("Source Integers: ");
    for(int i = 0; i<size; i++)
    {
        scanf("%d",&array[i]);
    }
}
void memcopy(int *src, int *dst, int size)
{
    for(int i = 0; i<size; i++)
    {
        dst[i] = src[i];
    }
}
