/*
  C LEVEL 09 Problem 11
  Use only int variables
  Use ont decimals
  use arrays
Question: Get 5 numbers from the user and 
reverse each number and 
create a new array and then  
print the sum of all numbers in the new array */

#include<stdio.h>
int reverse_num(int num);
int main()
{
    int numbers[5], i, reverse[5],sum =0;
    for(i=0; i<5; i++)
    {
        printf("Enter %d Element: ",i);
        scanf("%d",&numbers[i]);
        reverse[i] = reverse_num(numbers[i]);
        sum += reverse[i];
    }
    for(i=0;i<5;i++)
    {
        printf("%d ",reverse[i]);
    }
    printf("\n%d",sum);
}
int reverse_num(int num)
{
    int rev =0;
    unsigned int n = (unsigned int)num;
    int bits ,i;
    if(n<16)
    {
        bits = 4;
    }else if(n<256){
        bits = 8;
    }else if(n<65536){
        bits = 16;
    }else if(n<4096){
        bits = 12;
    }
    else{
        bits = 32;
    }
    for(i=0; i<bits; i++)
    {
        rev<<=1;
        if(n&1) 
            rev |= 1;
        n>>=1;
    }
    return (int)rev;
}
