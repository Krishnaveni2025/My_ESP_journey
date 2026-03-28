/* C LEVEL 10 Problem 06
        Don't use structures
   Question: 
        Get an intger and print each digit as a character. 
        Print one character on one line
*/
#include<stdio.h>
int number,i,j, temp;
char charofnum[100];
void getnum_printchar(void);
int main()
{
    getnum_printchar();
}
void getnum_printchar(void)
{
    printf("Enter Number: ");
    scanf("%d",&number);
    while(number)
    {
        charofnum[i] = (number%10) + '0';
        number /= 10;
        i++;
    }
    charofnum[i] = '\0';
    
    for(j=0; j<i/2; j++)
    {
        temp = charofnum[j];
        charofnum[j] = charofnum[i-j-1];
        charofnum[i-j-1] = temp;
    }
    for(j=0; charofnum[j]!='\0';j++)
    {
        printf("%c\n",charofnum[j]);
    }
}
