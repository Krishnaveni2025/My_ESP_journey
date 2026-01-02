/* C LEVEL 08 Problem 20
  Question: Write a program to get two numbers from the user and print the HCF of those numbers
  Function Name: disp_count_HCF2
  Answer:
  Input: 20 40  Output: 20
  Input: 15 78  Output: 3
  */
#include<stdio.h>
int disp_count_HCF2(int, int);
int main()
{
int x,y,hcf;
scanf("%d %d",&x, &y);
hcf = disp_count_HCF2(x,y);
  printf("%d",hcf);
}
int disp_count_HCF2(int a, int b)
{
//your code here
  while(a!=b)
    {
      if(a>b)
      {
        a -= b;
      }
      else
      {
        b -= a;
      }
    } 
return (b);//a
}
