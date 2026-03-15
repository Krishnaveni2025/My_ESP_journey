/* C LEVEL 11 Problem 05
  Use Pointers
Question: Write a function to copy integers from one location to another location
Function Name: memcopy(src,dst,size)
*/
#include<stdio.h>
void memcopy(int *src,int *dst, int size);
int main()
{
    int size, array[size], copy[size] ,i;
    printf("Enter the size of array: ");
    scanf("%d",&size);
    for(i=0; i<size; i++)
    {
        printf("Enter %d Element: ",i);
        scanf("%d",&array[i]);
    }
    memcopy(array, copy, size);
    printf("Copied array:\n");
    for(i=0; i<size; i++)
    {
        printf("%d ",copy[i]);
    }
}
void memcopy(int *src, int *dst, int size)
{
    for(int i =0 ; i<size; i++)
    {
        *(dst++) = *(src++);
    }
}
