/* C LEVEL 10 Problem 03
  Don't use structures
  Question: Get a String and print the same
*/

#include <stdio.h>
int main()
{
    char str[100];
    printf("Enter String: ");
    scanf("%99s",str);
    printf("You Entered %s",str);
    return 0;
}
