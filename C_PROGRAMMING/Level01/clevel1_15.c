//Question: Get a four-digit number from user 
//and only reverse the first two digits of the number, then print the number.
//Example: Input: 9561 Output 9516. Input: 3859 Output: 3895
#include<stdio.h>
int main()
{
    int x, result ;
    printf("Enter a Four digit number: ");
    scanf("%d",&x);
    result = ((x/1000)*1000)+(((x/100)%10)*100)+((x%10)*10)+((x%100)/10);
    printf("Result = %d", result);
}