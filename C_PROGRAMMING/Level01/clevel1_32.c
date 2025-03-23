//Question: Get two 2-digit numbers from user. If the sum of the numbers is less than 100, then 
//print the sum, otherwise print the difference. 
//Example: Input: 56 78 – Output: 22
//Input: 14 65 - Output: 79

#include<stdio.h>
int main ()
{
    int x1,x2,y,diff;
    printf ("Enter First Number : ");
    scanf("%d",&x1);
    printf ("Enter Second Number : ");
    scanf("%d",&x2);
// Your Code Here
    y = x1 + x2;
    while(y<100) {
        printf ("Result = %d",y);
        break;
    }
    while (y>=100) {
    if(x1>x2){
        diff = x1-x2;
        }
        else{
        diff = x2-x1;
        }
        printf("%d",diff);
        break;
    }
}