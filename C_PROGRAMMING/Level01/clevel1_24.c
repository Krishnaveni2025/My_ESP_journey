//Question: Get a three-digit number from user and subtract 5 from that number 
//if one’s digit number and 100’s digit number are same, then print the result. 
//Do not use “if”.
//Example: Input: 595 Output 590. Input: 372 Output: 372
#include<stdio.h>
int main()
{
    int x,ones, hundreds, Result;
    printf("Enter a THREE digit number: ");
    scanf("%d",&x);
    ones = x%10;
    hundreds = x/100;
    Result = x-5;
    while (ones == hundreds){
    printf("Result = %d", Result);
    break ;
    }
    while (ones != hundreds){
    printf("Result = %d",x);
    break;
    }
}