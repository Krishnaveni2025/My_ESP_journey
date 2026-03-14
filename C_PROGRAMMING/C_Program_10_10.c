/* C LEVEL 10 Problem 10
  Don't use structures
  Question: Get a number upto 50 digits and reverse it
*/
#include<stdio.h>
int main()
{
    char numbstr[51];
    printf("Enter a Number(50 digits):");
    scanf("%s",numbstr);
    int i = 0, j = 0, temp;
    while(numbstr[i]!='\0')
    {
        j++;
        i++;
    }
    for(i=0; i<j/2; i++)
    {
        temp = numbstr[i];
        numbstr[i] = numbstr[j-i-1];
        numbstr[j-i-1] = temp;
    }
    printf("%s",numbstr);
}
