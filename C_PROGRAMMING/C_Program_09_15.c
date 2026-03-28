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
*/
#include<stdio.h>
void getnumbers(int a[]);
void printarray(int a[],int s);
int sumofdigits(int n);
void array_ascend(int a[], int total);
int input[100], output[100], number,temp, total, i, j;
int main()
{
    getnumbers(input);
    printarray(input, total);
    printarray(output, total);
    array_ascend(output, total);
    printarray(output, total);
}
void array_ascend(int a[], int total)
{
    for(i=0; i<total; i++)
    {
        for(j = i+1; j<total; j++)
        {
            if(a[i]>a[j])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
}
int sumofdigits(int n)
{
    int sum = 0;
    while(n)
    {
        sum += (n%10);
        n/=10;
    }
    return sum;
}
void printarray(int a[], int s)
{
    printf("\n");
    for(i = 0; i<total; i++)
    {
        printf("%d ",a[i]);
    }
}
void getnumbers(int a[])
{
    while(1)
    {
        printf("Enter %d Element: ",total+1);
        scanf("%d",&number);
        if(!number)
                break;
        input[total] = number;
        output[total] = sumofdigits(number);
        total++;
    }
}
