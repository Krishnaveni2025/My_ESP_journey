/* C LEVEL 11 Problem 10
        Use Pointers
   Question: 
        Write a function to concatenate two strings to another 
   Function Name: 
        strcon(src1, src2, dst)
*/
#include<stdio.h>
void strcon(char *src1, char *src2, char *dst);
char source1[100],source2[100],destination[200];
void getstring(char *str);
int main()
{
    getstring(source1);
    getstring(source2);
    printf("First String: ");
    printf("%s",source1);
    printf("\nSecond String: ");
    printf("%s",source2);
    strcon(source1, source2, destination);
    printf("\nSingle String: ");
    printf("%s",destination);
}
void getstring(char *str)
{
    printf("Enter String\n");
    scanf("%s",str);
}
void strcon(char *src1, char *src2, char *dst)
{
    int i = 0, j = 0;
    while(src1[i]!='\0')
    {
        dst[i] = src1[i];
        i++;
    }
    while(src2[j]!='\0')
    {
        dst[i] = src2[j];
        i++;
        j++;
    }
    dst[i] = '\0';
}
