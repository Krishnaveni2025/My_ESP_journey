/*
  C LEVEL 09 Problem 02
  Use only int variables
  Use ont decimals
  use arrays
Question: Get 5 numbers from user and print average of all numbers
*/
#include<stdio.h>
int main()
{
    int numbers[5], i, avrg = 0;
    for(i = 0; i<5; i++)
    {
        printf("Enter %d Element: ",i);
        scanf("%d",&numbers[i]);
        avrg+=numbers[i];
    }
    avrg /= 5;
    printf("Average = %d",avrg);
}
