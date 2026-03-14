/* C LEVEL 10 Problem 08
  Don't use structures
  Question: Get a string of numbers upto 50 digits and validate the number
*/
#include<stdio.h>
int main()
{
    char numbstr[51];
    printf("Enter a Number(50 digits): ");
    scanf("%s",numbstr);
    int valid = 1,i=0;
    while(numbstr[i]!='\0')
    {
        if(numbstr[i]<'0' || numbstr[i]>'9')
        {
            valid = 0;
            break;
        }
        i++;
    }
    if(valid)
    {
        printf("Your number is valid");
    }
    else{
        printf("Pleease Enter a valid number");
    }
}
