/*
  C LEVEL 09 Problem 15
            Use only int variables
            Use only decimals
            Use arrays
  Question: 
            Get multiple numbers from the user and store them in an array . 
            Stop when the number is 0.
            Add each numbers digit and put them in an array and 
            arrange the new array in the ascending order and 
            print the same
  Answer:
            Input: 15 14 13 12 11 0 
            Output: 2 3 4 5 6
*/
#include<stdio.h>
#define MAX 50
int sumofdigits(int n);
void arrange_ascend(int a[], int r[]);
int main()
{
    int numbers[MAX], result[MAX];
    arrange_ascend(numbers, result);
}
int sumofdigits(int n)
{
    int sum = 0;
    while(n)
    {
        sum += (n%10);
        n /= 10;
    }
    return sum;
}
void arrange_ascend(int a[], int r[])
{
    int number, temp, i, j, total = 0;
    printf("Input: ");
    while(1)
    {
        scanf("%d",&number);
        if(!(number))   break;
        a[total] = number;
        r[total] = sumofdigits(number);
        total++;
    }
    for(i = 0; i<total; i++)
    {
        for(j = i+1; j<total; j++)
        {
            if(r[i]>r[j])
            {
                temp = r[i];
                r[i] = r[j];
                r[j] =temp;
            }
        }
    }
    printf("Output: ");
    for(i = 0; i<total; i++)
    {
        printf("%d ",r[i]);
    }
}
