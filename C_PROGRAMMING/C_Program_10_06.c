/* C LEVEL 10 Problem 06
  Don't use structures
  Question: Get an intger and print each digit as a character. Print one character on one line
*/
#include <stdio.h>
int main()
{
    char str[100];
    int i=0,j,temp, value;
    printf("Enter Number: ");
    scanf("%d",&value);//12345
    while(value)//t t t t t
    {
        str[i] = (value%10)+'0';//5 54 543 5432 54321
        value /= 10;//1234 123 12 1 0
        i++;//1 2 3 4 5
    }
    str[i]='\0';
    for(j=i;j>=0;j--)
    {
        printf("%c\n",str[i]);//1 2 3 4 5 
        i--;
    }

    return 0;
}
