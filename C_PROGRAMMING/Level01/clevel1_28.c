//Question: Get a three-digit number from user. 
//If the sum of the one’s digit and hundred’s digit is less than 10, 
//then print “Success”, otherwise print “Failure”.
//Example: Input: 569 - Output Failure. Input: 316 - Output: Success.
#include<stdio.h>
int main()
{
    int x,y;
    printf("Enter a THREE digit number: ");
    scanf("%d",&x);
    y=(x/100)+(x%10);
    if(y<10){
    printf("Success");
    }
    else{
    printf("Failure");
    }
}