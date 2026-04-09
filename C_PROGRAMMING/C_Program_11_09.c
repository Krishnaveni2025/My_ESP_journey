/*
   C LEVEL 11 Problem 09
                 Use Pointers
   Question: 
                 Write a function to concatenate two integer arrays into a single array
   Function Name: 
                 intcon(src1, size1, src2, size2, dst)
*/
#include<stdio.h>
void intcon(int *src1, int size1,int *src2,int size2, int *dst);
void getarray(int *src, int s);
void printarray(int *src, int s);
int size1, size2, size;

int main()
{
    printf("Enter Size of first array\n");
    scanf("%d",&size1);
    
    printf("Enter Size of second array\n");
    scanf("%d",&size2);
    
    int source1[size1], source2[size2];
    
    
    printf("First Integer\n");
    getarray(source1, size1);
    printf("Second Integer\n");
    getarray(source2, size2);
    
    printf("First Integer\n");
    printarray(source1, size1);
    printf("\nSecond Integer\n");
    printarray(source2, size2);
    
    size = size1+size2;
    int destination[size];
    intcon(source1, size1, source2, size2,destination);
    
    printf("\nSingle Integer\n");
    printarray(destination, size);
}
void intcon(int *src1, int s1, int *src2, int s2, int *dst)
{
    for(int i = 0;i<s1; i++)
    {
        *(dst+i) = *(src1+i);
    }
    for(int j = 0; j<s2; j++)
    {
        *(dst+s1+j) = *(src2+j); 
    }
}
void printarray(int *src, int s)
{
    for(int i = 0; i<s; i++)
    {
        printf("%d ",src[i]);
    }
}
void getarray(int *src, int size)
{
    for(int i = 0; i<size; i++)
    {
        printf("Enter %d Element: ",i+1);
        scanf("%d",&src[i]);
    }
}
