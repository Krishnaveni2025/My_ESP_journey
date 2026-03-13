/* C LEVEL 10 Problem 07
  Don't use structures
  Question: Get a string and find the length of the string
*/
#include <stdio.h>
int main()
{
    char str[100];
    int length = 0,i=0;
    printf("Enter String: ");
    scanf("%99s",str);
    while(str[i]!='\0')
    {
        length++;
        i++;
    }
    printf("Length = %d",length);

    return 0;
}
