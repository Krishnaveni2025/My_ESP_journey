//Question: Get a three-digit number from user and print the ten’s digit.
//Example: Input: 456 Output 5. Input: 569 Output: 6

#include<stdio.h>
int main()
{
     int x,y;
    printf("Enter a Three digit number: ");
    scanf("%d",&x);
    y = (x%100)/10;
    printf("Result = %d",y);
}