/* C LEVEL 10 Problem 10
        Don't use structures
   Question: 
        Get a number upto 50 digits and reverse it
*/
#include<stdio.h>
void reverse_string(char *str);
int getlength(char *str);
char input[51];
int i,temp, length;
int main()
{
    printf("Enter 50 digits\n");
    scanf("%50s",input);
    reverse_string(input);
    printf("Result\n%s",input);
}
void reverse_string(char *str)
{
    length = getlength(str);
    for(i=0; i<length/2; i++)
    {
        temp = str[i];
        str[i] = str[length-i-1];
        str[length-i-1] = temp;
    }
}
int getlength(char *str)
{
    while(str[length]!='\0')
    {
        length++;
    }
    return length;
}
