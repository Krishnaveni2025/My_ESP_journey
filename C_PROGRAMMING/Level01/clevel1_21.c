//Question: Get a number from user and subtract 5 from that number 
//if the number is odd, then print the result. 
//Do not use “if”.
//Example: Input: 695 Output 690. Input: 182 Output: 182
#include<stdio.h>
int main()
{
    int x,y;
    printf("Enter a number: ");
    scanf("%d",&x);
    y=x-5;
    while (x%2 !=0) //odd number
    {
    printf("%d",y);
    break;
    }
    while (x%2 ==0){
    printf("%d",x);
    }
}
