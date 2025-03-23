//Question: Get a four-digit number from user.
//If the sum of the ten’s digit and 
//hundred’s digit is greater than 10,
//then print “Success”, otherwise print “Failure”.
//Example: Input: 7529 – Output: Failure. Input: 9386 - Output: Success.
#include<stdio.h>
int main()
{
   int x,y;
    printf("Enter a 4 digit number: ");
    scanf("%d",&x);
    y=((x/100)%10)+((x%100)/10);
    if(y>10){
    printf("Success");
    }
    else{
    printf("Failure");
    }
}