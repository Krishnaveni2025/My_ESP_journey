/*
  C LEVEL 09 Problem 02
  Use only int variables
  Use ont decimals
  use arrays
Question: Get 5 numbers from user and print average of all numbers
*/
#include <stdio.h>

int main()
{
    int i = 0,n;
    printf("Enter the size of the array: ");
    scanf("%d",&n);
    int arr[n],avg = 0;
    for(i = 0; i<n; i++)
    {
        printf("Enter %d Element\n",i);
        scanf("%d",&arr[i]);
        avg += arr[i];
    }
  avg /= n;
    printf("%d",avg);
    return 0;
}
