//Question: Get a four-digit number from user 
//and only reverse the last two digits of the number, then print the number.
//Example: Input: 9561 Output 5961. Input: 3859 Output: 8359
#include<stdio.h>
int main()
{
    int x, result ;
    printf("Enter a Four digit number: ");
    scanf("%d",&x);
   // thousands = x/1000;
   // hundreds =  ((x/100)%10);
   // tens = ((x%100)/10);
   // ones = x%10;
    result = (((x/100)%10)*1000)+((x/1000)*100)+(((x%100)/10)*10)+(x%10);
    printf("Result = %d", result);
}