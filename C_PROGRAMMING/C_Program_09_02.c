/*
  C LEVEL 09 Problem 02
        Use only int variables
        Use ont decimals
        Use arrays
Question: 
        Get 5 numbers from user and print average of all numbers
*/
#include<stdio.h>
void print_avg5(int a[]);
int main()
{
    int numbers[5];
    print_avg5(numbers);
}
void print_avg5(int a[])
{
    int i, avrg = 0;
    for(i=0; i<5; i++)
    {
        printf("Enter %d Element: ",i);
        scanf("%d",&a[i]);
        avrg += a[i];
    }
    printf("%d",avrg/5);
}
