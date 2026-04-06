/* C LEVEL 10 Problem 03
                Don't use structures
   Question: 
                Get a String and print the same
*/
#include<stdio.h>
void getstrprintstr(char *strng);
char input[100];
int main()
{
    getstrprintstr(input);
}
void getstrprintstr(char *strng)
{
    printf("Enter a String: ");
    scanf("%s",strng);
    printf("%s",strng);
}
