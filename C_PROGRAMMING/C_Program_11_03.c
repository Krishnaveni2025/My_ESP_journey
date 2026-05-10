/* 
  C LEVEL 11 Problem 03
                Use Pointers
  Question: 
                Write a loop program to print 1 to 5 one by one.
                Write a function and print the result in the main function
  Function Name: 
                arrange_ascend
  Answer:
                1
                2
                3
                4
                5
*/
#include<stdio.h>
#define size 5
int arrange_ascend(int *a);
int main()
{
  for(int i = 1; i<6; i++)
        printf("%d\n",arrange_ascend(&i));
}
int arrange_ascend(int *a)
{
  if(*a<6)
      return *a;
}
