/*
  C LEVEL 09 Problem 15
  Use only int variables
  Use only decimals
  use arrays
Question: Get multiple numbers from the user and store them in an array . Stop when the number is 0. 
Add each numbers digit and put them in an array and arrange the new array in the ascending order and print the same*/
#include<stdio.h>
int sumofdigits(int num);
int main()
{
    int input[200], output[200], i = 0, count = 0, number,j=0, temp;
    while(1)
    {
        printf("Enter %d Element: ",i);
        scanf("%d",&number);
        if(number)
        {
            input[i] = number;
            output[i] = sumofdigits(number);
            i++;
            count++;
        }
        else
        {
            break;
        }
        
    }
    printf("\nNew Array: ");
    for(i=0; i<count; i++)
    {
        printf("%d ",output[i]);
    }
    for(i=0; i<count; i++)
    {
        for(j=i+1; j<count; j++)
        {
            if(output[i]>output[j])
            {
                temp = output[j];
                output[j] = output[i];
                output[i] = temp;
            }
        }
    }
    printf("\nArranged Array in ascending order: ");
    for(i=0; i<count; i++)
    {
        printf("%d ",output[i]);
    }
}
int sumofdigits(int num)
{
    int sum = 0;
    while(num)
    {
        sum+=num%10;
        num/=10;
    }
    return sum;
}
