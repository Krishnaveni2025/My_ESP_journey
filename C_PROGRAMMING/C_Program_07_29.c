/* C LEVEL 07 Problem 29
         Use only int variables
         Use only Decimals
         Use functions with not return value.
         Don't use Arrays, pointers, strings,etc.
   Question: 
         Write a program to get three numbers from the user and 
         print the LCM of those numbers
   Function Name: 
         disp_LCM3
   Answer:
         Input: 20 40 80 Output: 80
         Input: 15 78 63 Output: 8190
  */
#include<stdio.h>
void disp_LCM3(int n1, int n2, int n3);
int main()
{
    int number1, number2, number3;
    printf("Enter Number 1: ");
    scanf("%d",&number1);
    printf("Enter Number 2: ");
    scanf("%d",&number2);
    printf("Enter Number 3: ");
    scanf("%d",&number3);
    disp_LCM3(number1,number2,number3);
    return 0;
}
void disp_LCM3(int n1, int n2, int n3)
{
    int l;
    if(n1>n2)
    {
        if(n1>n3)
            l = n1;
        else
            l = n3;
    }
    else
    {
        l = n2;
    }
    while(1)
    {
        if(!(l%n1))
        {
            if(!(l%n2))
            {
                if(!(l%n3))
                        break;
            }
        }
        l++;
    }
    printf("%d",l);
}
