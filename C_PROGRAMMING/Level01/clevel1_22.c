//Question: Get a number from user and subtract 5 from that number 
//if the number’s ten’s position digit is odd, then print the result. 
//Do not use “if”.
//Example: Input: 685 Output 685. Input: 89172 Output: 89167
#include<stdio.h>
int main()
{
    int x,y,z;
    printf("Enter a number: ");
    scanf("%d",&x);
    y = (x/10)%10;//tens digit 
    z = x-5;
    while(y%2 !=0)//odd number 
    {
    printf("Result = %d",z);
    break ;
    }
    while(y%2==0){
    printf("Result = %d",x);
    }
    
}