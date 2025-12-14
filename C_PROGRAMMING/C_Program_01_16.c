/* C LEVEL 01 Program 16
  Question: Get a four digit number from the user and only reverse last two digits of the number then print the number
Example:
Input:9561 Output:5961
Input:3859 Output:8359
*/
#include<stdio.h>
int main()
{
  int x,y;
  //your code here
  printf("Enter a four digit number: ");
  scanf("%d",&x);
  y = (((x/100)%10)*1000)+((x/1000)*100)+(x%100);
  printf("%d",y);
  return  0;
}
