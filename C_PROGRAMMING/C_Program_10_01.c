/* C LEVEL 10 Problem 01
    Don't use structures
   Question: Get an alphabet  and print it's ASCII value
*/
#include<stdio.h>
char alphabet;
void getalphaprintASCII(char c);
int main()
{
    getalphaprintASCII(alphabet);
}
void getalphaprintASCII(char c)
{
    printf("Enter Alphabet: ");
    scanf("%c",&c);
    printf("ASCII: %d",c);
}
