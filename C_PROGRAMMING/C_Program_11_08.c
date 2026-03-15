/* C LEVEL 11 Problem 08
  Use Pointers
Question: Write a function to compare to strings. Print success or failure
Function Name: strcomp(src, dst)
*/
#include<stdio.h>
int strcomp(char *src, char *dst);
int main()
{
    char input1[100],input2[100];
    printf("Enter First String:\n");
    scanf("%s",input1);
    printf("Enter Second String:\n");
    scanf("%s",input2);
    if(strcomp(input1,input2))
            printf("Success");
    else
            printf("Failure");
}
int strcomp(char *src, char *dst)
{
    int result = 1;
    while(*src != '\0')
    {
        if(*src != *dst)
        {
            result = 0;
            break;
        }
        src++;
        dst++;
    }
    return result;
}
