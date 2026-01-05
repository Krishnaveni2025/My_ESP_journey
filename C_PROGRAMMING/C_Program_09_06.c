/*
  C LEVEL 09 Problem 06
  Use only int variables
  Use ont decimals
  use arrays
Question: Get 5 numbers from the user and arrange in ascending order and print the same*/
#include<stdio.h>
int main()
{
  int n = 5,i = 0, arr[n], temp, j = 1;
  for(i=0; i<n; i++)
    {
      printf("Enter %d Element:\n",i);
      scanf("%d",&arr[i]);
    }
  i = 0;
  for(i = 0; i<n-1; i++)
    {
      int min = i;
      for(j=i+1; j<n; j++)
        {
          temp = arr[i];
          if(arr[j]<arr[min])
          {
             min = j;
          }
          if(min!=i){
            int temp = arr[min];
            arr[min] = arr[i];
            arr[i] = temp;
          }
        }
    }
  i = 0;
  for(i = 0; i<n; i++)
    {
      printf("%d ",arr[i]);
    }
}
