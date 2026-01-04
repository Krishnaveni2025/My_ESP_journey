/*
  C LEVEL 09 Problem 03
  Use only int variables
  Use ont decimals
  use arrays
Question: Get 5 numbers from the user and print the smallest number
*/
#include <stdio.h>

int main()
{
    int i = 0,n;
    printf("Enter the size of the array: ");
    scanf("%d",&n);
    int arr[n],small = 0;
    for(i = 0; i<n; i++)
    {
        printf("Enter %d Element\n",i);
        scanf("%d",&arr[i]);
    }
    i = 0;
  small = arr[i];
  for(i = 1; i<n; i++)
    {
      if(small>arr[i])
      {
        small = arr[i];
      }
    }
  printf("%d",small);
    return 0;
}
