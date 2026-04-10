/* 
   C LEVEL 11 Problem 05
                  Use Pointers
   Question: 
                  Write a function to copy integers from one location to another location
   Function Name: 
                  memcopy(src,dst,size)
*/
#include<stdio.h>
void getsource(int *a,int s);
void memcopy(int *source, int *destination, int length);
void print(int *a, int s);
int main()
{
    int size;
    printf("Enter Size of the Number: ");
    scanf("%d",&size);
    int src[size],dst[size];
    getsource(src, size);
    print(src, size);
    memcopy(src,dst,size);
    print(dst,size);
}
void memcopy(int *source, int *destination, int length)
{
    for(int i = 0; i<length; i++)
    {
        *(destination+i) = *(source+i);
    }
}
void print(int *a, int s)
{
    printf("\n");
    for(int i = 0; i<s; i++)
    {
        printf("%d ",*(a+i));
    }
}
void getsource(int *a,int s)
{
    for(int i = 0; i<s; i++)
    {
        printf("Enter %d Number: ",i+1);
        scanf("%d",&a[i]);
    }
}
