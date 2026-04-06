/* C LEVEL 10 Problem 04
                Don't use structures
   Question: 
                Get a number as string and print the integer value of the string
*/
#include<stdio.h>
void getNS_printIS(char *nstrng);
char input[100];
int main()
{
    getNS_printIS(input);
}
void getNS_printIS( char *nstrng)
{
    int i = 0;
    printf("Enter Numbers: ");
    scanf("%s",nstrng);
    if(nstrng)
    while(nstrng[i]!=0)
    {
        printf("%d",(nstrng[i]-48));
        i++;
    }
}
