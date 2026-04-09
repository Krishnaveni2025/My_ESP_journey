/* 
   C LEVEL 11 Problem 07
                  Use Pointers
   Question: 
                  Write a function to compare a set of integers and print success or failure
   Function Name: 
                  memcomp(src,dst,size)
*/
#include<stdio.h>
int memcomp(int *src, int *dst, int size);
void getinteger(int*a, int size);
void printinteger(int *a, int size);
int main()
{
    int size;
    printf("Enter Size: ");
    scanf("%d",&size);
    int source[size], destination[size];
    getinteger(source, size);
    getinteger(destination, size);
    printinteger(source, size);
    printinteger(destination, size);
    if(memcomp(source, destination, size))
            printf("\nsuccess");
    else
            printf("\nfailure");
}
void printinteger(int *a, int size)
{
    printf("\n");
    for(int i =0; i<size; i++)
    {
        printf("%d ",a[i]);
    }
}
void getinteger(int*a, int size)
{
    printf("\n");
    for(int i = 0; i<size; i++)
    {
        printf("Enter %d Element: ",i+1);
        scanf("%d",&a[i]);
    }
}
int memcomp(int *src, int *dst, int size)
{
    for(int i = 0; i<size; i++)
    {
        if(src[i] != dst[i])
                return 0;
    }
    return 1;
}
