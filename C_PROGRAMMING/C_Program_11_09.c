/* C LEVEL 11 Problem 09
  Use Pointers
Question: Write a function to concatenate two integer arrays into a single array
Function Name: intcon(src1, size1, src2, size2, dst)
*/
#include<stdio.h>
void intcon(int *src1, int size1, int *src2, int size2, int *dst);
int main()
{
    int size1, size2, i;
    printf("Enter First Array Size: ");
    scanf("%d",&size1);
    int input1[size1];
    for(i = 0; i<size1; i++)
    {
        printf("Enter Element %d: ",i);
        scanf("%d",&input1[i]);
    }
    printf("Enter Second Array Size: ");
    scanf("%d",&size2);
    int input2[size2];
    for(i = 0; i<size2; i++)
    {
        printf("Enter Element %d: ",i);
        scanf("%d",&input2[i]);
    }
    int size = size1+size2;
    int output[size];
    intcon(input1, size1, input2, size2, output);
    printf("After Conactenation:\n");
    for(i=0; i<size; i++)
    {
        printf("%d ",output[i]);
    }
}
void intcon(int *src1, int size1, int *src2, int size2, int *dst)
{
    for(int i=0; i<size1; i++)
    {
        *(dst+i) = *(src1+i);
    }
    for(int j = 0; j<size2; j++)
    {
        *(dst+size1+j) = *(src2+j);
    }
}
