/* 
   C LEVEL 01 Program 22
            Use only int variables
            Use only Decimals
            Use the following operations only
            +,-,/,*,%
            Do not use any other operations
   Question: 
            Get a number from the user and 
            subtract 5 from that number 
            if the number's ten's digit position is odd 
            then print the result. 
            Do not use "if"
   Example:
            Input:685   Output:685
            Input:89172 Output:89167
*/
#include<stdio.h>
int main()
{
    int number;
    printf("Input: ");
    scanf("%d",&number);
    printf("Output: %d",(number-(5*(((number/10)%10)%2))));
}
