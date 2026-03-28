/* C LEVEL 10 Problem 09
        Don't use structures
   Question: 
        Get a string of numbers upto 50 digits and remove all leading zeros
*/
#include<stdio.h>
void removeleading0s(char *numstrng);
char input[51], output[51];
int i,j;
int main()
{
    printf("Enter 50 digits:");
    scanf("%s",input);
    removeleading0s(input);
    printf("Result\n%s",output);
}
void removeleading0s(char *numstrng)
{
    while(numstrng[i]!='\0')
    {
        if(numstrng[i]!='0')
        {
            output[j] = numstrng[i];
            j++;
        }
        i++;
    }
}
