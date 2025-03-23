//Question: Get a two-digit number from user and print the reverse of the number.
//Example: Input: 56 Output 65. Input: 59 Output: 95

#include<stdio.h>
int main()
{
    int x;
    printf("Enter a TWO digit number: ");
    scanf("%d",&x);
    int result = (((x%10)*10)+(x/10));
    printf("Result = %d", result);
}