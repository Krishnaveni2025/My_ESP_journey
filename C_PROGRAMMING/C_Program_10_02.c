/* C LEVEL 10 Problem 02
                Don't use structures
   Question: 
                Get a single number and print it's ASCII value
*/
#include<stdio.h>
int number;
void getnumprintASCII(int n);
int main()
{
    getnumprintASCII(number);
}
void getnumprintASCII(int n)
{
    printf("Enter a Single Number: ");
    scanf("%d",&number);
    printf("ASCII(Octal): %o",number+(0x30));//48
    //printf("ASCII(hexa Decimal): %x",number+(0x30));//48
    //printf("ASCII(decimal): %d",number+(0x30));//48
}
