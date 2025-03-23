//Question: Get a four-digit number from user and subtract 5 from that number
// if ten’s digit position and 100’s digit position is same, then print the result.
//Do not use “if”.
//Example: Input: 7595 Output 7595. Input: 3772 Output: 3767
#include<stdio.h>
int main()
{
    int x,tens,hundreds, Result ;
    printf("Enter a 4 digit number: ");
    scanf("%d",&x);
    tens = (x/10)%10;
    hundreds = (x%1000)/100;
    Result = x-5;
    while (tens == hundreds){
    printf("Result = %d", Result);
    break;
    }
    while (tens != hundreds){
    printf("Result = %d",x);
    break;
    }
    
}