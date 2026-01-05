/*
  C LEVEL 09 Problem 07
  Use only int variables
  Use ont decimals
  use arrays
Question: Get 5 numbers from the user and arrange in descending order and print the same*/
#include<stdio.h>
int main()
{
  int n = 5,i = 0, arr[n],temp,j = 1,k=0;
  for(i=0; i<n; i++)
    {
      printf("Enter %d Element:\n",i);
      scanf("%d",&arr[i]);
    }
  i = 0;
  for(i = 0; i<n-1; i++)
    {
      int max = i;
      for(j=i+1; j<n; j++)
        {
          temp = arr[i];
          if(arr[j]>arr[max])
          {
             max = j;
          }
          if(max!=i){
            int temp = arr[max];
            arr[max] = arr[i];
            arr[i] = temp;
          }
        }
    }
  
  for(k = 0; k<n; k++)
    {
      printf("%d ",arr[k]);
    }
}
