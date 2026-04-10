/*
   C LEVEL 11 Problem 09
                 Use Pointers
   Question: 
                 Write a function to concatenate two integer arrays into a single array
   Function Name: 
                 intcon(src1, size1, src2, size2, dst)
*/
#include<stdio.h>

void intcon(int *source1, int size1, int *source2, int size2, int *destination);
void getint(int *set1, int s1, int *set2, int s2);
void print(int *a, int s);
int main()
{
    int size1, size2,size;
    printf("Enter size of the first array: ");
    scanf("%d",&size1);
    printf("Enter size of the second array: ");
    scanf("%d",&size2);
    size = size1+size2;
    int src1[size1], src2[size2],dst[size];
    getint(src1,size1,src2,size2);
    print(src1,size1);
    print(src2,size2);
    intcon(src1, size1, src2, size2, dst);
    print(dst,size);
}
void print(int *a, int s)
{
    printf("\n");
    for(int i = 0; i<s; i++)
    {
        printf("%d ",a[i]);
    }
}
void getint(int *set1, int s1, int *set2, int s2)
{
    printf("First Set\n");
    for(int i = 0; i<s1; i++)
    {
        printf("Enter %d Number: ",i+1);
        scanf("%d",&set1[i]);
    }
    printf("Second Set\n");
    for(int j = 0; j<s2; j++)
    {
        printf("Enter %d Number: ",j+1);
        scanf("%d",&set2[j]);
    }
}
void intcon(int *source1, int size1, int *source2, int size2, int *destination)
{
    int i = 0, j = 0;
    for(i = 0; i<size1; i++)
    {
        *(destination+i) = *(source1+i);
    }
    for(j = 0; j<size2; j++)
    {
       *(destination+i+j) = *(source2+j); 
    }
}
