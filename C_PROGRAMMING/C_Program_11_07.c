/* 
   C LEVEL 11 Problem 07
                  Use Pointers
   Question: 
                  Write a function to compare a set of integers and print success or failure
   Function Name: 
                  memcomp(src,dst,size)
*/
void print(int *a, int s);
int memcomp(int *source, int *destination, int length);
void getint(int *set1, int *set2, int s);

#include<stdio.h>
int main()
{
    int size,equal;
    printf("Enter size of the set: ");
    scanf("%d",&size);
    int src[size],dst[size];
    getint(src,dst,size);
    equal = memcomp(src, dst,size);
    print(src,size);
    print(dst,size);
    if(equal)
            printf("\nsuccess");
    else
            printf("\nfailure");
    return 0;
    
}
void getint(int *set1, int *set2, int s)
{
    int i = 0, j = 0;
    printf("First Set\n");
    for( i = 0; i<s; i++)
    {
        printf("Enter %d Number: ",i+1);
        scanf("%d",&set1[i]);
    }
    printf("Second Set\n");
    for(j = 0; j<s; j++)
    {
        printf("Enter %d Number: ",j+1);
        scanf("%d",&set2[j]);
    }
}
int memcomp(int *source, int *destination, int length)
{
    for(int i = 0; i<length; i++)
    {
        if(*(source+i)!= *(destination+i))
                return 0;
    }
    return 1;
}
void print(int *a, int s)
{
    printf("\n");
    for(int i = 0; i<s; i++)
    {
        printf("%d ",a[i]);
    }
}
