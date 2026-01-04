/*
  C LEVEL 09 Problem 05
  Use only int variables
  Use ont decimals
  use arrays
Question: Get 5 numbers from the user and arrange in ascending order and print the same
*/
#include<stdio.h>
int main()
{
  int n = 5,i = 0, arr[n], temp, j = 1;
  for(i=0; i<n; i++)
    {
      printf("Enter %d Element:\n");
      scanf("%d",&arr[i]);
    }
  i = 0;
  for(i = 0; i<n; i++)
    {
      for(j=1; j<n; j++)
        {
          temp = arr[i];
          if(temp>arr[j])
          {
            arr[j] = arr[i];
            arr[j] = temp;
          }
        }
    }
  i = 0;
  for(i = 0; i<n; i++)
    {
      printf("%d ",arr[i]);
    }
}
