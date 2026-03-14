/* C LEVEL 10 Problem 11
  Don't use structures
  Question: Get a number string upto 50 digits and convert it to an integer array
*/
#include<stdio.h>
int main()
{
    char numbstr[51];
    int number[50],i = 0,j = 0;
    printf("Enter Number string:");
    scanf("%s",numbstr);
    while(numbstr[i]!='\0')
    {
        number[i]= (numbstr[i])-48;
        i++;
    }
    printf("Integer array:\n");
    for(j=0;j<i;j++)
    {
        printf("%d",number[j]);
    }
}
