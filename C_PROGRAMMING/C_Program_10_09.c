/* C LEVEL 10 Problem 09
  Don't use structures
  Question: Get a string of numbers upto 50 digits and remove all leading zeros
*/
#include<stdio.h>
int main()
{
    char numbstr[51];
    printf("Enter a Number(50 digits):");
    scanf("%s",numbstr);
    int i = 0, j = 0;
    while((numbstr[i]!='\0')&&(numbstr[i]=='0'))
    {
        i++;
    }
    if(numbstr[i]=='\0'){
        numbstr[i] = '0';
        numbstr[1] = '\0';
    }
    else{
        while(numbstr[i]!='\0'){
            numbstr[j++] = numbstr[i++];
        }
        numbstr[j] = '\0';
    }
    printf("%s",numbstr);
}
