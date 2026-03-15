/* C LEVEL 11 Problem 07
  Use Pointers
Question: Write a function to compare a set of integers and print success or failure
Function Name: strcomp(src,dst,size)
*/
#include<stdio.h>
int strcomp(int *src, int *dst, int size);
int main()
{
    int size, array1[size], array2[size], i;
    printf("Enter Arrays Size: ");
    scanf("%d",&size);
    printf("First Array:\n");
    for(i=0; i<size; i++)
    {
        printf("Element %d: ",i);
        scanf("%d",&array1[i]);
    }
    printf("Second Array:\n");
    for(i=0; i<size; i++)
    {
        printf("Element %d: ",i);
        scanf("%d",&array2[i]);
    }
    if(strcomp(array1,array2,size))
            printf("Success");
    else
            printf("Failure");
}
int strcomp(int *src, int *dst, int size)
{
    for(int i=0; i<size; i++)
    {
        if(src[i] != dst[i])
            return 0;
    }
}
