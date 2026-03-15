/* C LEVEL 11 Problem 10
  Use Pointers
Question: Write a function to concatenate two strings to another 
Function Name: strcon(src1, src2, dst)
*/
#include<stdio.h>
void strcon(char *src1, char *src2, char *dst);
int main()
{
    char input1[50], input2[50], output[101];
    printf("Enter First String: ");
    scanf("%s",input1);
    printf("Enter Second String: ");
    scanf("%s",input2);
    strcon(input1, input2, output);
    printf("Result: %s",output);
    return 0;
}
void strcon(char *src1, char *src2, char *dst)
{
    int i= 0, j=0;
    while(src1[i] != '\0')
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
    dst[i]= '\0';
}
