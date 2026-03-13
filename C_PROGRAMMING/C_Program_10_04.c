/* C LEVEL 10 Problem 04
  Don't use structures
  Question: Get a number as string and print the integer value of the string
*/
#include <stdio.h>
int main()
{
    char str[100];
    int i, value;
    printf("Enter Number String: ");
    scanf("%99s",str);
    for(i=0; str[i]!= '\0'; i++)
    {
        printf("%d",str[i]);
    }

    return 0;
}
