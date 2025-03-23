//Question: Get a number from user and multiply 3 to that number and print the result.
//Example: Input: 45 Output 135. Input: 1200 Output: 3600#include<stdio.h>
int main()
{
     int x,y;
    printf("Enter a number: ");
    scanf("%d",&x);
    y = x*3;
    printf("Result = %d",y);
}