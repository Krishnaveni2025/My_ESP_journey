/* C LEVEL 10 Problem 05
  Don't use structures
  Question: Get an integer and print it as a string
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
    str[i]='\0';// 54321\0
    for(j=0; j<i/2; j++)//0 1
    {
        temp = str[j];//5 4
        str[j] = str[i-j-1];//14321 12325
        str[i-j-1] = temp;//  14325 12345  
        i--;//4 3
    }
    printf("%s",str);//12345

    return 0;
}
