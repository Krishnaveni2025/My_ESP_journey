//Question: Get a three-digit number from user and print sum the digits.
//Example: Input: 562 Output 13. Input: 469 Output: 19

#include<stdio.h>
int main()
{
     int x,y;
    printf("Enter a THREE digit number: ");
    scanf("%d",&x);
    y = (x/100)+((x%100)/10)+(x%10);
    printf("Result = %d",y);
}