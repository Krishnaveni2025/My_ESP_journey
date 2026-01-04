/*
  C LEVEL 09 Problem 01
  Use only int variables
  Use ont decimals
  use arrays
Question: Get 5 numbers from the user and print all the sum of all numbers
*/
#include <stdio.h>
int main()
{
    int i = 0,n;
    printf("Enter the size of the array: ");
    scanf("%d",&n);
    int arr[n],sum = 0;
    for(i = 0; i<n; i++)
    {
        printf("Enter %d Element\n",i);
        scanf("%d",&arr[i]);
        sum += arr[i];
    }
    printf("%d",sum);
    return 0;
}
