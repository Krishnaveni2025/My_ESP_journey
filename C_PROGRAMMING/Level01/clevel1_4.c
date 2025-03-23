//Question: Get a number from user and divide by the number by 6 and print the quotient. 
//Example: Input: 45 Output 7. Input: 143 Output: 23
#include<stdio.h>
int main()
{
     int x,y;
    printf("Enter a number: ");
    scanf("%d",&x);
    y = x/6;
    printf("Result = %d",y);
}