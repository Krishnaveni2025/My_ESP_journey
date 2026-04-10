/* 
   C LEVEL 11 Problem 10
                 Use Pointers
   Question: 
                 Write a function to concatenate two strings to another 
   Function Name: 
                 strcon(src1, src2, dst)
*/
#include<stdio.h>
void getstr(char *source1, char *source2);
void strcon(char *source1, char *source2, char *destination);
void print(char *str);
int main()
{
    char src1[51], src2[51],dst[102];
    getstr(src1,src2);
    print(src1);
    print(src2);
    strcon(src1, src2, dst);
    print(dst);
}
void print(char *str)
{
    printf("\n%s",str);
}
void strcon(char *source1, char *source2, char *destination)
{
    int l1 = 0,l2 = 0;
    while(*(source1+l1)!='\0')
    {
        *(destination+l1) = *(source1+l1);
        l1++;
    }
    while(*(source2+l2)!='\0')
    {
        *(destination+l1+l2) = *(source2+l2);
        l2++;
    }
    *(destination+l1+l2) = '\0';
}
void getstr(char *source1, char *source2)
{
    printf("Source 1: ");
    scanf("%s",source1);
    printf("Source 2: ");
    scanf("%s",source2);
}
