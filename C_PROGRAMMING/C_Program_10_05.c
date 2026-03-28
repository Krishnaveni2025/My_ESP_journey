/* C LEVEL 10 Problem 05
        Don't use structures
  Question: 
        Get an integer and print it as a string
*/
#include<stdio.h>
int number, i , j, temp;
char result[100];
void getN_printStr(void);
int main()
{
    getN_printStr();
}
void getN_printStr(void)
{
    printf("Enter Number: ");
    scanf("%d",&number);
    while(number)
    {
        result[i] = (number%10)+48;//'0' or 0x30
        number /= 10;
        i++;
    }
    result[i]='\0';
    //printf("%s\n",result);
    int length = i;
    for(j=0; j<length/2; j++)
    {
        temp = result[j];
        result[j] = result[length-j-1];
        result[length-j-1] = temp;
    }
    printf("%s",result);
}
