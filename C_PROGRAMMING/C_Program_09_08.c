/*
  C LEVEL 09 Problem 08
  Use only int variables
  Use ont decimals
  use arrays
Question: Get 5 numbers from the user and remove the odd  numbers and create a new array and then  print the same*/
#include<stdio.h>
int main()
{
  int n = 5, arr[5], i = 0, j = 0, even[j], k =0;
  for(i = 0; i<n; i++)
    {
      printf("Enter %d Element: ",i);
      scanf("%d",&arr[i]);
      if(!(arr[i]%2))
      {
          even[j] = arr[i];
          j++;
      }
    }
    for(k = 0; k<j; k++)
    {
        printf("%d ",even[k]);
    }
  
}
