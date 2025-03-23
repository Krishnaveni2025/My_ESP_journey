//Question: Get two 2-digit numbers from user. 
//Print the sum of digits of the biggest number.
//Example: Input: 56 78 – Output: 15
//Input: 14 65 - Output: 11
#include<stdio.h>
int main ()
{
int x1,x2,y;
printf ("Enter First Number : ");
scanf("%d",&x1);
printf ("Enter Second Number : ");
scanf("%d",&x2);
 // Your Code Here
 if(x1>x2){
 y=(x1%10)+(x1/10);
 printf("%d",y);
 }
 else{
 y=(x2%10)+(x2/10);
printf ("Result = %d",y);
}
}