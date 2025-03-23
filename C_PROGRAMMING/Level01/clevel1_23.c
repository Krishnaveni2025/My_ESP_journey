//Question: Get a two digit number from user and subtract 5 from that number
// if the sum of the digits of the number is odd, then print the result.
 // Do not use“if”.
//Example: Input: 95 Output 95. Input: 72 Output: 67
#include<stdio.h>
int main()
{
    int x, sum, result;
    printf("Enter a Two digit number: ");
    scanf("%d",&x);
    sum= (x/10)+(x%10);
    result= x-5 ;
    while(sum%2 == 1){
    printf("%d", result);
    break;
    }
    while (sum%2==0){
    printf("%d",x);
    break;
    }
}