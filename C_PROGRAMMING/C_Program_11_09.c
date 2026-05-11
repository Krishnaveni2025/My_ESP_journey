/*
   C LEVEL 11 Problem 09
                 Use Pointers
   Question: 
                 Write a function to concatenate two integer arrays into a single array
   Function Name: 
                 intcon(src1, size1, src2, size2, dst)
*/
#include<stdio.h>
#define s1 8
#define s2 5
#define s s1+s2
void getintegers(int *src1, int size1, int *src2, int size2);
void intcon(int *src1, int size1, int *src2, int size2, int *dst);
void print(int *array, int size);
int main()
{
    int source1[s1], source2[s2],destination[s];
    getintegers(source1, s1, source2, s2);
    intcon(source1, s1, source2, s2, destination);
    print(destination, s);
}
void print(int *array, int size)
{
    int i = 0;
    printf("Destination: ");
    for(i = 0; i<size; i++)
    {
        printf("%d ",array[i]);
    }
}
void getintegers(int *src1, int size1, int *src2, int size2)
{
    int i;
    printf("Source 1: ");
    for(i = 0; i<size1; i++)
    {
        scanf("%d",&src1[i]);
    }
    printf("Source 2: ");
    for(i = 0; i<size2; i++)
    {
        scanf("%d",&src2[i]);
    }
}
void intcon(int *src1, int size1, int *src2, int size2, int *dst)
{
    int i, j;
    for(i = 0; i<size1; i++)
    {
        dst[i] = src1[i];
    }
    for(j = 0; j<size2; j++)
    {
        dst[i+j] = src2[j]; 
    }
}
