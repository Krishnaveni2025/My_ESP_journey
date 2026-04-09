/* 
   C LEVEL 11 Problem 05
                  Use Pointers
   Question: 
                  Write a function to copy integers from one location to another location
   Function Name: 
                  memcopy(src,dst,size)
*/
#include<stdio.h>
int i,size;
void memcopy(int *src, int *dst, int size);
void getsource(int *src, int size);
void print(int *a, int size);
int main()
{
    printf("Enter Size of Array\n");
    scanf("%d",&size);
    int source[size], destination[size];
    getsource(source,size);
    print(source,size);
    memcopy(source,destination,size);
    print(destination,size);
}
void print(int *a, int size)
{
    printf("\n");
    for(i=0;i<size;i++)
    {
        printf("%d ",a[i]);
    }
}
void getsource(int *src, int size)
{
    for(i=0; i<size; i++)
    {
        printf("Enter %d Element: ",i+1);
        scanf("%d",&src[i]);
    }
}
void memcopy(int *src, int *dst, int size)
{
    for(i=0; i<size; i++)
    {
        *(dst) = *(src);
        dst++;
        src++;
    }
}
