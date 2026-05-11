/* 
   C LEVEL 11 Problem 10
                 Use Pointers
   Question: 
                 Write a function to concatenate two strings to another 
   Function Name: 
                 strcon(src1, src2, dst)
*/
#include<stdio.h>
#define s1 10
#define s2 10
#define s s1+s2
void getTwostrs(char *src1, char *src2);
void strcon(char *src1, char *src2, char *dst);
void print(char *str);
int main()
{
    char source1[s1], source2[s2], destination[s];
    getTwostrs(source1, source2);
    strcon(source1, source2, destination);
    print(destination);
    return 0;
}
void print(char *str)
{
    printf("Destination: %s",str);
}
void strcon(char *src1, char *src2, char *dst)
{
    int l1, l2;
    while(*(src1+l1)!='\0')
    {
        *(dst+l1) = *(src1+l1);
        l1++;
    }
    while(*(src2+l2)!='\0')
    {
        *(dst+l1+l2) = *(src2+l2);
        l2++;
    }
    *(dst+l1+l2) = '\0';
}
void getTwostrs(char *src1, char *src2)
{
    printf("Source 1: ");
    scanf("%s",src1);
    printf("Source 2: ");
    scanf("%s",src2);
}
